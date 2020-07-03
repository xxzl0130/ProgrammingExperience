#include "xmlGenerator.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QHeaderView>
#include <QDoubleSpinBox>
#include <QDebug>
#include <iostream>

xmlGenerator::xmlGenerator(QWidget *parent)
	: QMainWindow(parent), parser(nullptr), document(nullptr), path(nullptr),stylesheet(nullptr)
{
	ui.setupUi(this);
	ui.actionClear->setEnabled(false);
	ui.actionSave->setEnabled(false);
	if (QApplication::arguments().size() > 1)
	{
		this->stylesheetFilename = QApplication::arguments()[1];
		try
		{
			loadStylesheet();
		}
		catch (const std::exception& e)
		{
			errorBox(tr("Faild to load xml file!\n") + tr("Please check your file!\n"), this->stylesheetFilename + "\n" + e.what(), tr("Error"));
			clear();
		}
		ui.actionSave->setEnabled(true);
		ui.actionClear->setEnabled(true);
		ui.actionSaveAs->setEnabled(true);
	}
}

void xmlGenerator::loadStylesheet()
{
	parser = new rl::xml::DomParser;
	document = new rl::xml::Document;
	*document = parser->readFile(stylesheetFilename.toStdString(), "", XML_PARSE_NOENT | XML_PARSE_XINCLUDE);
	document->substitute(XML_PARSE_NOENT | XML_PARSE_XINCLUDE);
	if (("stylesheet" == document->getRootElement().getName() || "transform" == document->getRootElement().getName())
		&& "1.0" == document->getRootElement().getProperty("version") && document->getRootElement().hasNamespace()
		&& "http://www.w3.org/1999/XSL/Transform" == document->getRootElement().getNamespace().getHref())
	{// 检查文件合法性
		path = new rl::xml::Path(*document);
		stylesheet = new rl::xml::Stylesheet(*document);
		rl::xml::Node param = path->eval("/").getValue<rl::xml::NodeSet>()[0].getFirstChild().getFirstChild();

		while(param.getName() == "param")
		{
			paramMap[param.getProperty("name")] = param.getProperty("select").c_str();
			param = param.getNext();
		}

		setTable();
	}
	else
	{
		throw "Invalid stylesheet file.";
	}
}

void xmlGenerator::errorBox(const QString& text, const QString& info, const QString& title)
{
	QMessageBox msgBox;
	msgBox.setText(text);
	msgBox.setIcon(QMessageBox::Icon::Critical);
	if (info.size() > 0)
		msgBox.setInformativeText(info);
	msgBox.setStandardButtons(QMessageBox::Ok);
	msgBox.setDefaultButton(QMessageBox::Ok);
	if (title.size() > 0)
		msgBox.setWindowTitle(title);
	msgBox.setButtonText(QMessageBox::Ok, tr("OK"));
	msgBox.exec();
}

void xmlGenerator::setTable()
{
	size_t itemCnt = 0;
	
	ui.tableWidget->setColumnCount(2);
	ui.tableWidget->setRowCount(paramMap.size());
	for(auto& it:paramMap)
	{
		ui.tableWidget->setItem(itemCnt, 0, new QTableWidgetItem(QString::fromStdString(it.first)));
		auto item = ui.tableWidget->item(itemCnt, 0);
		item->setFlags(item->flags() & (~Qt::ItemIsEditable));
		item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		auto spinBox = new QDoubleSpinBox(ui.tableWidget);
		spinBox->setDecimals(4);
		spinBox->setSingleStep(0.01);
		spinBox->setValue(strtod(it.second.c_str(),nullptr));
		spinBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		
		ui.tableWidget->setCellWidget(itemCnt, 1, spinBox);
		++itemCnt;
	}
	ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
	ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
	QStringList header;
	header << tr(u8"参数名") << tr(u8"参数值");
	ui.tableWidget->setHorizontalHeaderLabels(header);
	ui.tableWidget->horizontalHeader()->setVisible(true);
	ui.tableWidget->horizontalHeader()->setStretchLastSection(true);
	ui.tableWidget->setAlternatingRowColors(true);
	ui.tableWidget->show();
}

void xmlGenerator::open()
{
	this->stylesheetFilename = QFileDialog::getOpenFileName(this, "", this->stylesheetFilename, tr("XML files") + " (*.xml)");
	if(stylesheetFilename.size() > 0)
	{
		try
		{
			clear();
			//errorBox(stylesheetFilename);
			loadStylesheet();
		}
		catch (const std::exception& e)
		{
			errorBox(tr("Faild to load xml file!\n") + tr("Please check your file!"), this->stylesheetFilename + "\n" + e.what(), tr("Error"));
			clear();
		}
		ui.actionSave->setEnabled(true);
		ui.actionClear->setEnabled(true);
		ui.actionSaveAs->setEnabled(true);
	}
}

void xmlGenerator::save()
{
	size_t itemCnt = ui.tableWidget->rowCount();
	for(auto i = 0u;i < itemCnt;++i)
	{
		QString name = ui.tableWidget->item(i, 0)->text();
		QDoubleSpinBox* valueBox = dynamic_cast<QDoubleSpinBox*>(ui.tableWidget->cellWidget(i, 1));
		double value = valueBox->value();
		paramMap[name.toStdString()] = std::to_string(value);
	}
	*document = stylesheet->apply(paramMap);
	if(this->saveFilename.size() == 0)
	{// 已经保存过，就不再弹出文件框
		this->saveFilename = QFileDialog::getSaveFileName(this, "", this->stylesheetFilename, tr("XML files") + " (*.xml)");
	}
	if(this->saveFilename.size() > 0)
	{
		document->save(saveFilename.toStdString());
	}
}

void xmlGenerator::saveAs()
{
	this->saveFilename = QString();
	save();
}

void xmlGenerator::clear()
{
	delete this->parser;
	this->parser = nullptr;
	delete this->stylesheet;
	this->stylesheet = nullptr;
	delete this->path;
	this->path = nullptr;
	delete this->document;
	this->document = nullptr;
	this->saveFilename = QString();
	//this->stylesheetFilename = QString();
	while(ui.tableWidget->columnCount())
	{
		ui.tableWidget->removeColumn(0);
	}
	ui.actionClear->setEnabled(false);
	ui.actionSave->setEnabled(false);
	ui.actionSaveAs->setEnabled(false);
}

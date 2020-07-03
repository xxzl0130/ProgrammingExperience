#include "MainWindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QJsonParseError>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QDoubleSpinBox>
#include <QSpinBox>
#include <QComboBox>
#include <rl/xml/Path.h>
#include <rl/xml/Document.h>
#include <rl/xml/DomParser.h>
#include <rl/xml/Stylesheet.h>
#include <set>
#include <algorithm>

#define NAME_COL	0
#define GROUP_COL	1
#define OFFSET_COL	2
#define TYPE_COL	3
#define VALUE_COL	4

MainWindow::MainWindow(QWidget *parent):
	QMainWindow(parent),
	ui(new Ui::MainWindowClass()),
	saved(false)
{
	ui->setupUi(this);
	initTable(0);

	if (QApplication::arguments().size() > 1)
	{
		auto filename = QApplication::arguments()[1];
		QFileInfo file(filename);
		if(file.exists())
		{
			filename = file.absoluteFilePath();
			if(file.suffix().toLower() == "json")
			{
				loadJson(filename);
			}
			else if(file.suffix().toLower() == "xml")
			{
				loadStylesheet(filename);
			}
		}
	}
}

void MainWindow::openJson()
{
	clearItem();

	auto filename = QFileDialog::getOpenFileName(this, "", this->jsonFilename, tr("JSON file") + " (*.json)");
	if (filename.isEmpty())
	{
		return;
	}
	loadJson(filename);
}

void MainWindow::openStylesheet()
{
	auto filename = QFileDialog::getOpenFileName(this, "", this->stylesheetFilename
		, tr("xml file") + " (*.xml)");
	if (filename.isEmpty())
	{
		return;
	}
	loadStylesheet(filename);
}

void MainWindow::save()
{
	if(this->jsonFilename.size() < 5)
	{//strlen(".json") == 5
		auto filename = QFileDialog::getSaveFileName(this, "", this->jsonFilename, tr("JSON file") + " (*.json)");
		if (filename.isEmpty())
		{
			return;
		}
		this->jsonFilename = filename;
	}
	saveJson(this->jsonFilename);
	saved = true;
}

void MainWindow::saveAs()
{
	auto filename = QFileDialog::getSaveFileName(this, "", this->jsonFilename, tr("JSON file") + " (*.json)");
	if (filename.isEmpty())
	{
		return;
	}
	this->jsonFilename = filename;
	saveJson(this->jsonFilename);
	saved = true;
}

void MainWindow::addItem()
{
	//rowCount()数值比末行号大1，因此直接插入就可以
	addItem(this->ui->parameterTable->rowCount(), "name", 0, 0, "string", "value");
	this->ui->parameterTable->show();
}

void MainWindow::deleteItem()
{
	auto row = this->ui->parameterTable->currentRow();
	if(row != -1)
	{
		this->ui->parameterTable->removeRow(row);
	}
}

void MainWindow::clearItem()
{
	while (this->ui->parameterTable->rowCount())
	{
		this->ui->parameterTable->removeRow(0);
	}
	this->ui->parameterTable->show();
}

void MainWindow::contentChanged(int row, int col)
{
	// 有内容被修改后标记未保存
	saved = false;
}

void MainWindow::closeEvent(QCloseEvent* event)
{
	if(saved)
	{
		event->accept();
		return;
	}
	QMessageBox msgBox;
	msgBox.setText(tr(u8"确定要不保存就退出吗？"));
	msgBox.setWindowTitle(this->windowTitle());
	msgBox.setIcon(QMessageBox::Icon::Warning);
	msgBox.setInformativeText(tr(u8"如果单击“不保存”，您将丢失所有未保存的信息。"));
	msgBox.setStandardButtons(QMessageBox::Save| QMessageBox::Cancel| QMessageBox::No);
	msgBox.setDefaultButton(QMessageBox::Save);
	msgBox.setButtonText(QMessageBox::Save, tr(u8"保存"));
	msgBox.setButtonText(QMessageBox::Cancel, tr(u8"取消"));
	msgBox.setButtonText(QMessageBox::No, tr(u8"不保存"));
	switch(msgBox.exec())
	{
	case QMessageBox::Save:
		save();
		event->accept();
		break;
	case QMessageBox::Cancel:
		event->ignore();
		break;
	case QMessageBox::No:
		event->accept();
		break;
	default:
		save();
		event->ignore();
		break;
	}
}

void MainWindow::addItem(int row, const QJsonObject& js)
{
	QString name;
	int group;
	int offset;
	QString type;
	QString value;

	name = js.value("Name").toString();
	group = js.value("IndexGroup").toInt();
	offset = js.value("IndexOffset").toInt();
	type = js.value("Type").toString();

	if (type == "double")
	{
		double data;
		if (js.value("Value").isDouble())
		{
			data = js.value("Value").toDouble();
		}
		else
		{
			data = js.value("Value").toString().toDouble();
		}
		value = QString::number(data, 'f', 4);
	}
	else if (type == "int")
	{
		int data;
		if (js.value("Value").isDouble())
		{
			data = js.value("Value").toDouble();
		}
		else
		{
			data = js.value("Value").toString().toDouble();
		}
		value = QString::number(data);
	}
	else
	{//其他类型默认以字符串处理
		value = js.value("Value").toString();
	}
	addItem(row, name, group, offset, type, value);
}

void MainWindow::addItem(int row, const QString& name, int group, int offset, const QString& type, const QString& value)
{
	if(row >= this->ui->parameterTable->rowCount())
	{// 扩容
		// 行号比行数小1
		this->ui->parameterTable->setRowCount(row + 1);
	}

	auto item = new QTableWidgetItem(name);
	item->setFlags(item->flags() | Qt::ItemIsEditable);
	item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
	ui->parameterTable->setItem(row, NAME_COL, item);

	item = new QTableWidgetItem(QString::number(group));
	item->setFlags(item->flags() | Qt::ItemIsEditable);
	item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
	ui->parameterTable->setItem(row, GROUP_COL, item);

	item = new QTableWidgetItem(QString::number(offset));
	item->setFlags(item->flags() | Qt::ItemIsEditable);
	item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
	ui->parameterTable->setItem(row, OFFSET_COL, item);

	auto box = new QComboBox(this);
	box->addItem("double");
	box->addItem("int");
	box->addItem("string");
	ui->parameterTable->setCellWidget(row, TYPE_COL, box);

	if (type == "double")
	{
		box->setCurrentIndex(0);
	}
	else if (type == "int")
	{
		box->setCurrentIndex(1);
	}
	else //string
	{
		box->setCurrentIndex(2);
	}

	item = new QTableWidgetItem(value);
	item->setFlags(item->flags() | Qt::ItemIsEditable);
	item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
	ui->parameterTable->setItem(row, VALUE_COL, item);
}

QString MainWindow::typeof(const QString& v)
{
	bool ok = false;

	v.toInt(&ok, 10);
	if (ok)
		return "int";
	v.toInt(&ok, 8);
	if (ok)
		return "int";
	v.toInt(&ok, 16);
	if (ok)
		return "int";

	v.toDouble(&ok);
	if (ok)
		return "double";

	return "string";
}

int MainWindow::str2int(const QString& s)
{
	bool ok = false;
	int value = 0;

	value = s.toInt(&ok, 10);
	if (ok)
		return value;
	value = s.toInt(&ok, 16);
	if (ok)
		return value;
	value = s.toInt(&ok, 8);
	if (ok)
		return value;
	return 0;
}

void MainWindow::initTable(int row)
{
	ui->parameterTable->setColumnCount(5);
	ui->parameterTable->setRowCount(row);
	ui->parameterTable->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui->parameterTable->setSelectionMode(QAbstractItemView::SingleSelection);
	QStringList header;
	QFont font;
	font.setBold(true); //加粗
	header << tr(u8"参数名") << tr(u8"IndexGroup")
		<< tr(u8"IndexOffset") << tr(u8"类型") << tr(u8"参数值");
	ui->parameterTable->setHorizontalHeaderLabels(header);
	ui->parameterTable->horizontalHeader()->setFont(font);
	ui->parameterTable->horizontalHeader()->setVisible(true);
	//ui->parameterTable->horizontalHeader()->setStretchLastSection(true);
	ui->parameterTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui->parameterTable->verticalHeader()->setFont(font);
	ui->parameterTable->setAlternatingRowColors(true);
	ui->parameterTable->setFocusPolicy(Qt::NoFocus);
	ui->parameterTable->show();
}

bool MainWindow::checkTable()
{
	std::set<QString> nameSet;
	std::set<std::pair<int, int>> indexSet;

	for(auto i = 0;i < this->ui->parameterTable->rowCount();++i)
	{
		auto name = ui->parameterTable->item(i, NAME_COL)->text();
		if(nameSet.count(name) != 0)
		{
			errorBox(tr(u8"名称重复！"), "Line:" + QString::number(i + 1));
			return false;
		}
		nameSet.insert(name);

		auto indexStr = ui->parameterTable->item(i, GROUP_COL)->text();
		if(typeof(indexStr) != "int")
		{
			errorBox(tr(u8"GroupIndex 非法！"), "Line:" + QString::number(i + 1));
			return false;
		}
		auto index = str2int(indexStr);

		auto offsetStr = ui->parameterTable->item(i, OFFSET_COL)->text();
		if (typeof(indexStr) != "int")
		{
			errorBox(tr(u8"IndexOffset 非法！"), "Line:" + QString::number(i + 1));
			return false;
		}
		auto offset = str2int(offsetStr);

		if(indexSet.count(std::make_pair(index, offset)) != 0)
		{
			errorBox(tr(u8"GroupIndex&IndexOffset 重复！"), "Line:" + QString::number(i + 1));
			return false;
		}
		indexSet.insert(std::make_pair(index, offset));

		auto valueStr = ui->parameterTable->item(i, VALUE_COL)->text();
		auto valueBox = dynamic_cast<QComboBox*>(ui->parameterTable->cellWidget(i, TYPE_COL));
		auto valueType = typeof(valueStr);
		auto boxStr = valueBox->currentText();

		if(valueType == boxStr || (boxStr == "double" && valueStr == "int")
			//只有double可以兼容int，反过来不行
		  || boxStr == "string") //string兼容所有
		{
			
		}
		else
		{
			errorBox(tr(u8"Value值无效！"), "Line:" + QString::number(i + 1));
			return false;
		}
	}

	return true;
}

void MainWindow::saveJson(const QString& filename)
{
	if (filename.isEmpty() || filename < 2)
	{
		return;
	}

	if(!checkTable())
	{
		return;
	}
	QJsonObject parametersJson;
	QJsonArray parametersArray;

	for(auto i = 0;i < ui->parameterTable->rowCount();++i)
	{
		QJsonObject js;
		const auto name = this->ui->parameterTable->item(i, NAME_COL)->text();
		js.insert("Name", name);
		const auto group = str2int(this->ui->parameterTable->item(i, GROUP_COL)->text());
		js.insert("IndexGroup", group);
		const auto offset = str2int(this->ui->parameterTable->item(i, OFFSET_COL)->text());
		js.insert("IndexOffset", offset);
		const auto typeBox = dynamic_cast<QComboBox*>(this->ui->parameterTable->cellWidget(i, TYPE_COL));
		const auto type = typeBox->currentText();
		js.insert("Type", type);

		if(type == "int")
		{
			const auto value = str2int(this->ui->parameterTable->item(i, VALUE_COL)->text());
			js.insert("Value", value);
		}
		else if(type == "double")
		{
			const auto value = this->ui->parameterTable->item(i, VALUE_COL)->text().toDouble();
			js.insert("Value", value);
		}
		else
		{
			const auto value = this->ui->parameterTable->item(i, VALUE_COL)->text();
			js.insert("Value", value);
		}
		parametersArray.push_back(js);
	}
	parametersJson.insert("Parameters", parametersArray);

	QJsonDocument document(parametersJson);
	auto tmp = document.toJson(QJsonDocument::Indented);
	QFile file(filename);
	if (file.open(QIODevice::WriteOnly | QIODevice::Text))
	{
		file.write(tmp);
		this->jsonFilename = filename;
	}
	else
	{
		errorBox(tr(u8"写入文件失败！"));
	}
	file.close();
}

void MainWindow::loadJson(const QString& filename)
{
	QJsonObject parametersJson;
	QJsonArray parametersArray;
	QFile file(filename);
	if (file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QJsonParseError jsonError;
		QJsonDocument doucment = QJsonDocument::fromJson(file.readAll(), &jsonError);
		file.close();
		if (!doucment.isNull() && jsonError.error == QJsonParseError::NoError
			&& doucment.isObject())
		{
			parametersJson = doucment.object();
			if (parametersJson.contains("Parameters"))
			{
				clearItem();
				this->jsonFilename = filename;

				parametersArray = parametersJson.value("Parameters").toArray();

				initTable(parametersArray.size());
				int itemCnt = 0;
				for (auto i = 0; i < parametersArray.size(); ++i)
				{
					// 将array中的每个转为一个object后再取value
					addItem(itemCnt, parametersArray[i].toObject());
					++itemCnt;
				}
				this->ui->parameterTable->show();
			}
			else
			{
				errorBox(tr("Parameter file format error!"), QString(), QString());
			}
		}
		else
		{
			errorBox(tr("Faild to load parameter file!"), QString(), QString());
		}
	}
	else
	{
		errorBox(tr("Faild to load parameter file!"), QString(), QString());
	}
	file.close();
	// 只有打开json能认为是已保存，stylesheet不行
	saved = true;
}

void MainWindow::loadStylesheet(const QString& filename)
{
	rl::xml::DomParser parser;
	rl::xml::Document document;

	document = parser.readFile(filename.toStdString(), "",
		XML_PARSE_NOENT | XML_PARSE_XINCLUDE);
	document.substitute(XML_PARSE_NOENT | XML_PARSE_XINCLUDE);

	if (("stylesheet" == document.getRootElement().getName() || "transform" == document.getRootElement().getName())
		&& "1.0" == document.getRootElement().getProperty("version") && document.getRootElement().hasNamespace()
		&& "http://www.w3.org/1999/XSL/Transform" == document.getRootElement().getNamespace().getHref())
	{
		rl::xml::Path path(document);
		rl::xml::Stylesheet stylesheet(document);

		rl::xml::Node param = path.eval("/").getValue<rl::xml::NodeSet>()[0].getFirstChild().getFirstChild();

		clearItem();
		initTable(0);
		this->stylesheetFilename = filename;

		int cnt = 0;
		while (param.getName() == "param")
		{
			QString name = param.getProperty("name").c_str();
			QString value = param.getProperty("select").c_str();
			QString type = typeof(value);

			addItem(cnt++, name, 0, 0, type, value);

			param = param.getNext();
		}
		this->ui->parameterTable->show();
	}
}

void MainWindow::errorBox(const QString& text, const QString& info, const QString& title)
{
	QMessageBox msgBox(this);
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

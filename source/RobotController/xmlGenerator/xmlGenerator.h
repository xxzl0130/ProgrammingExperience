#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_xmlGenerator.h"
#include <rl/xml/Document.h>
#include <rl/xml/DomParser.h>
#include <rl/xml/Stylesheet.h>
#include <rl/xml/Path.h>
#include <map>
#include <string>

class xmlGenerator : public QMainWindow
{
	Q_OBJECT

public:
	xmlGenerator(QWidget *parent = Q_NULLPTR);

private:
	Ui::xmlGeneratorClass ui;
	QString stylesheetFilename;
	QString saveFilename;

	rl::xml::DomParser* parser;
	rl::xml::Document* document;
	rl::xml::Path* path;
	rl::xml::Stylesheet* stylesheet;

	std::map<std::string, std::string> paramMap;

	void loadStylesheet();
	static void errorBox(const QString& text, const QString& info = QString(), const QString& title = QString());
	void setTable();

public slots:
	void open();
	void save();
	void saveAs();
	void clear();
};

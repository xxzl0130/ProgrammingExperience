#include "Viewer.h"
#include "ViewerPlugin.h"

#include <QtCore/QtPlugin>

ViewerPlugin::ViewerPlugin(QObject *parent)
	: QObject(parent)
{
	initialized = false;
}

void ViewerPlugin::initialize(QDesignerFormEditorInterface * /*core*/)
{
	if (initialized)
		return;

	initialized = true;
}

bool ViewerPlugin::isInitialized() const
{
	return initialized;
}

QWidget *ViewerPlugin::createWidget(QWidget *parent)
{
	return new Viewer(parent);
}

QString ViewerPlugin::name() const
{
	return "Viewer";
}

QString ViewerPlugin::group() const
{
	return "My Plugins";
}

QIcon ViewerPlugin::icon() const
{
	return QIcon();
}

QString ViewerPlugin::toolTip() const
{
	return QString();
}

QString ViewerPlugin::whatsThis() const
{
	return QString();
}

bool ViewerPlugin::isContainer() const
{
	return false;
}

QString ViewerPlugin::domXml() const
{
	return "<widget class=\"Viewer\" name=\"viewer\">\n"
		" <property name=\"geometry\">\n"
		"  <rect>\n"
		"   <x>0</x>\n"
		"   <y>0</y>\n"
		"   <width>100</width>\n"
		"   <height>100</height>\n"
		"  </rect>\n"
		" </property>\n"
		"</widget>\n";
}

QString ViewerPlugin::includeFile() const
{
	return "Viewer.h";
}

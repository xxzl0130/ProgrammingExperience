#include "xmlGenerator.h"
#include <QtWidgets/QApplication>
#include <QMessageBox>
#include <qdatetime.h>

int main(int argc, char *argv[])
{
	try
	{
		QApplication application(argc, argv);
		// ReSharper disable once CppDeprecatedEntity
		freopen("runtime.log", "a", stdout);
		// ReSharper disable once CppDeprecatedEntity
		freopen("runtimeError.log", "a", stderr);
		QDateTime time = QDateTime::currentDateTime();
		QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
		fprintf(stdout, "--------------------------------\n%s\n", str.toStdString().c_str());
		fprintf(stderr, "--------------------------------\n%s\n", str.toStdString().c_str());

		xmlGenerator w;
		w.show();
		return application.exec();
	}
	catch (const std::exception& e)
	{
		QApplication application(argc, argv);
		QMessageBox::critical(nullptr, "Error", e.what());
		return EXIT_FAILURE;
	}
}

#include "commonHeader.h"
#include "rlHeaders.h"

#include "MainWindow.h"

MainWindow* MainWindow::singleton = nullptr;

int main(int argc, char *argv[])
{
	try
	{
		QApplication application(argc, argv);

		qRegisterMetaType<rl::math::Real>("rl::math::Real");
		qRegisterMetaType<rl::math::Transform>("rl::math::Transform");
		qRegisterMetaType<rl::math::Vector>("rl::math::Vector");
		qRegisterMetaType<rl::plan::VectorList>("rl::plan::VectorList");
		qRegisterMetaType<std::string>("std::string");

		QObject::connect(&application, SIGNAL(lastWindowClosed()), &application, SLOT(quit()));

		MainWindow::instance()->show();

		return application.exec();
	}
	catch (const std::exception& e)
	{
		QApplication application(argc, argv);
		QMessageBox::critical(nullptr, "Error", e.what());
		return EXIT_FAILURE;
	}
}

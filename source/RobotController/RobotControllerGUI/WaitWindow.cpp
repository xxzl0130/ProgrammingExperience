#include "commonheader.h"
#include "WaitWindow.h"

WaitWindow::WaitWindow(QWidget* parent, Qt::WindowFlags f):
	QDialog(parent,f),
	ui(new Ui::WaitWindow)
{
	ui->setupUi(this);
}

WaitWindow::~WaitWindow()
{
}

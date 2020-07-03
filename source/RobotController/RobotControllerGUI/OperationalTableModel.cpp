#include "commonHeader.h"
#include "OperationalTableModel.h"
#include "MainWindow.h"
#include "PlannerThread.h"
#include "Viewer.h"

OperationalTableModel::OperationalTableModel(QObject* parent) :
	QAbstractTableModel(parent),dataSource(nullptr)
{
}

OperationalTableModel::~OperationalTableModel()
{
}

int OperationalTableModel::columnCount(const QModelIndex& parent) const
{
	return 1;
}

QVariant OperationalTableModel::data(const QModelIndex& index, int role) const
{
	if (nullptr == MainWindow::instance()->model)
	{
		return QVariant();
	}

	if (!index.isValid())
	{
		return QVariant();
	}

	switch (role)
	{
	case Qt::DisplayRole:
	case Qt::EditRole:
	{
		if(dataSource == nullptr)
		{
			return QVariant();
		}

		return dataSource(index.row());
	}
	case Qt::TextAlignmentRole:
		return QVariant(Qt::AlignRight | Qt::AlignVCenter);
		break;
	default:
		break;
	}

	return QVariant();
}

Qt::ItemFlags OperationalTableModel::flags(const QModelIndex &index) const
{
	if (!index.isValid())
	{
		return Qt::NoItemFlags;
	}

	return QAbstractItemModel::flags(index) & ~Qt::ItemIsEditable;
}

QVariant OperationalTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
	if (Qt::DisplayRole == role && Qt::Vertical == orientation)
	{
		//°´Ë³Ðòx y z
		return QString('x' + section);
	}

	return QVariant();
}

void OperationalTableModel::invalidate()
{
	this->beginResetModel();
	this->endResetModel();
}

int OperationalTableModel::rowCount(const QModelIndex& parent) const
{
	if (nullptr == MainWindow::instance()->model2)
	{
		return 0;
	}

	return 3;
}

bool OperationalTableModel::setData(const QModelIndex& index, const QVariant& value, int role)
{
	if (nullptr == MainWindow::instance()->model2)
	{
		return false;
	}

	if (MainWindow::instance()->plannerThread->isRunning())
	{
		return false;
	}

	if (index.isValid() && Qt::EditRole == role)
	{
		emit dataChanged(index, index);

		return true;
	}

	return false;
}

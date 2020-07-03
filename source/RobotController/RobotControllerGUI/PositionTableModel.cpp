#include "commonHeader.h"
#include "PositionTableModel.h"
#include "MainWindow.h"
#include "PlannerThread.h"
#include "Viewer.h"

PositionTableModel::PositionTableModel(QObject* parent) :
	QAbstractTableModel(parent)
{
}

PositionTableModel::~PositionTableModel()
{
}

int PositionTableModel::columnCount(const QModelIndex& parent) const
{
	return 1;
}

QVariant PositionTableModel::data(const QModelIndex& index, int role) const
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
		auto &qUnits = MainWindow::instance()->units;

		if (rl::math::UNIT_RADIAN == qUnits(index.row()))
		{
			return (*MainWindow::instance()->q)(index.row()) * rl::math::RAD2DEG;
		}
		else
		{
			return (*MainWindow::instance()->q)(index.row());
		}
	}
	case Qt::TextAlignmentRole:
		return QVariant(Qt::AlignRight | Qt::AlignVCenter);
		break;
	default:
		break;
	}

	return QVariant();
}

Qt::ItemFlags PositionTableModel::flags(const QModelIndex &index) const
{
	if (!index.isValid())
	{
		return Qt::NoItemFlags;
	}

	return QAbstractItemModel::flags(index) & ~Qt::ItemIsEditable;
}

QVariant PositionTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
	if (Qt::DisplayRole == role && Qt::Vertical == orientation)
	{
		return QString::number(section);
	}

	return QVariant();
}

void PositionTableModel::invalidate()
{
	this->beginResetModel();
	this->endResetModel();
}

int PositionTableModel::rowCount(const QModelIndex& parent) const
{
	if (nullptr == MainWindow::instance()->model)
	{
		return 0;
	}

	return MainWindow::instance()->model->getDofPosition();
}

bool PositionTableModel::setData(const QModelIndex& index, const QVariant& value, int role)
{
	if (nullptr == MainWindow::instance()->model)
	{
		return false;
	}

	if (MainWindow::instance()->plannerThread->isRunning())
	{
		return false;
	}

	if (index.isValid() && Qt::EditRole == role)
	{
		auto &qUnits = MainWindow::instance()->units;

		if (rl::math::UNIT_RADIAN == qUnits(index.row()))
		{
			(*MainWindow::instance()->q)(index.row()) = value.value<rl::math::Real>() * rl::math::DEG2RAD;
		}
		else
		{
			(*MainWindow::instance()->q)(index.row()) = value.value<rl::math::Real>();
		}

		MainWindow::instance()->viewer->drawConfiguration(*MainWindow::instance()->q);
		MainWindow::instance()->operationalTableModel->invalidate();

		emit dataChanged(index, index);
		emit positionChanged(false);

		return true;
	}

	return false;
}

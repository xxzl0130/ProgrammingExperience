#include "commonHeader.h"
#include "PositionTableDelegate.h"
#include "MainWindow.h"

PositionTableDelegate::PositionTableDelegate(QObject* parent) :
	QItemDelegate(parent)
{
}

PositionTableDelegate::~PositionTableDelegate()
{
}

QWidget* PositionTableDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
	QDoubleSpinBox* editor = new QDoubleSpinBox(parent);

	rl::math::Vector maximum = MainWindow::instance()->model->getMaximum();
	rl::math::Vector minimum = MainWindow::instance()->model->getMinimum();
	auto &qUnits = MainWindow::instance()->units;

	if (rl::math::UNIT_RADIAN == qUnits(index.row()))
	{
		editor->setDecimals(2);
		editor->setMinimum(minimum(index.row()) * rl::math::RAD2DEG);
		editor->setMaximum(maximum(index.row()) * rl::math::RAD2DEG);
		editor->setSingleStep(1.0f);
	}
	else
	{
		editor->setDecimals(4);
		editor->setMinimum(minimum(index.row()));
		editor->setMaximum(maximum(index.row()));
		editor->setSingleStep(0.01f);
	}
	editor->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

	QObject::connect(editor, SIGNAL(valueChanged(double)), this, SLOT(valueChanged(double)));

	return editor;
}

void PositionTableDelegate::setEditorData(QWidget* editor, const QModelIndex& index) const
{
	QDoubleSpinBox* doubleSpinBox = static_cast<QDoubleSpinBox*>(editor);
	doubleSpinBox->setValue(index.model()->data(index, Qt::EditRole).toDouble());
}

void PositionTableDelegate::setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const
{
	QDoubleSpinBox* doubleSpinBox = static_cast<QDoubleSpinBox*>(editor);
	doubleSpinBox->interpretText();
	model->setData(index, doubleSpinBox->value(), Qt::EditRole);
}

void PositionTableDelegate::updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
	editor->setGeometry(option.rect);
}

void PositionTableDelegate::valueChanged(double d)
{
	emit commitData(static_cast<QWidget*>(QObject::sender()));
}

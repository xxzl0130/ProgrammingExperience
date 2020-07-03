#pragma once
#include "commonHeader.h"

/*
 * 配合PositionTableModel的Delegate
 * 主要是创建DoubleSpinBox的editor，并且设置上下限
 */
class PositionTableDelegate : public QItemDelegate
{
	Q_OBJECT

public:
	PositionTableDelegate(QObject* parent = nullptr);

	virtual ~PositionTableDelegate();

	QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const;

	void setEditorData(QWidget* editor, const QModelIndex& index) const;

	void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const;

	void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const;

public slots:
	void valueChanged(double d);

protected:

private:

};
#pragma once
#include "commonHeader.h"

/*
 * ���PositionTableModel��Delegate
 * ��Ҫ�Ǵ���DoubleSpinBox��editor����������������
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
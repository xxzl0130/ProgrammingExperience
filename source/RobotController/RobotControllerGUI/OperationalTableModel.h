#pragma once

#include "commonHeader.h"

/*
 * 显示末端工具坐标的表格所用Model，不可编辑，不需要Delegate
 * 使用MainWindow中的model2进行计算
 * 坐标顺序可能需要调整
 */
class OperationalTableModel : public QAbstractTableModel
{
public:
	OperationalTableModel(QObject* parent = nullptr);

	virtual ~OperationalTableModel();

	int columnCount(const QModelIndex& parent = QModelIndex()) const;

	QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;

	Qt::ItemFlags flags(const QModelIndex &index) const;

	QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;

	void invalidate();

	int rowCount(const QModelIndex& parent = QModelIndex()) const;

	bool setData(const QModelIndex& index, const QVariant& value, int role = Qt::EditRole);

	/**
	 * \brief 用于获取表格中数据的函数指针，以使该类可以为位置、速度、加速度表格通用
	 */
	double (*dataSource)(int index);

protected:

private:

};
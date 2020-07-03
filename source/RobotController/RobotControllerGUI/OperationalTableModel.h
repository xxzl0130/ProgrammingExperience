#pragma once

#include "commonHeader.h"

/*
 * ��ʾĩ�˹�������ı������Model�����ɱ༭������ҪDelegate
 * ʹ��MainWindow�е�model2���м���
 * ����˳�������Ҫ����
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
	 * \brief ���ڻ�ȡ��������ݵĺ���ָ�룬��ʹ�������Ϊλ�á��ٶȡ����ٶȱ��ͨ��
	 */
	double (*dataSource)(int index);

protected:

private:

};
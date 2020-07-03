#pragma once

#include "commonHeader.h"

/*
 * ��ʾ���ؽڽǶȵ�Table���õ�Model
 * ��MainWindow��ϣ���ȡq����ʾ
 * �ɱ༭��ʹ��doubleSpinBox�༭
 */
class PositionTableModel : public QAbstractTableModel
{
	Q_OBJECT

public:
	PositionTableModel(QObject* parent = nullptr);

	virtual ~PositionTableModel();

	int columnCount(const QModelIndex& parent = QModelIndex()) const;

	QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;

	Qt::ItemFlags flags(const QModelIndex &index) const;

	QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;

	void invalidate();

	int rowCount(const QModelIndex& parent = QModelIndex()) const;

	bool setData(const QModelIndex& index, const QVariant& value, int role = Qt::EditRole);

signals:
	void positionChanged(bool);
};
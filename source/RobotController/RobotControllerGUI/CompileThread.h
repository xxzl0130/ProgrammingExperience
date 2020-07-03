#pragma once

#include <QThread>

#include "ProgramItem.h"

/**
 * \brief �����롱���ָ����̣߳�Ŀǰ����Move���˴���
 */
class CompileThread : public QThread
{
	Q_OBJECT

public:
	CompileThread(QObject *parent);
	~CompileThread();

	void run() override;
	void stop();

	QTreeWidget* tree;

	double sampleTime;
protected:
	/**
	 * \brief ��item���еݹ���㣬Ŀǰֻ֧��MoveLJC�;���λ�á����λ��
	 * ��������Ϊ���ݹ鴦��item����point����solvePointTarget���Ŀ��㣬
	 * ��ʹ��solveProgramPath���·��
	 * \param item Ҫ�����item
	 * \param currentPosition ��ʼλ�ã��ᱻ�޸�Ϊ����item�˶����λ��
	 * \return �����Ƿ�ɹ�
	 */
	bool solveProgramItem(ProgramItemBase* item, rl::math::Vector &currentPosition);
	/**
	 * \brief ���type���ͽ���·�����㣬MoveCΪ��㣬���ܴ���
	 * \param type MovePLJ
	 * \param s ��ʼ��
	 * \param t ��ֹ��
	 * \param path �������·��
	 * \return �����Ƿ�ɹ�
	 */
	bool solveProgramPath(ProgramItemBase::ProgramType type, const rl::math::Vector& s, const rl::math::Vector& t,
		rl::plan::VectorList& path);
	/**
	 * \brief ���type���ͽ���·�����㣬���ٶȹ滮
	 * \param type ����
	 * \param s ���
	 * \param t �յ�
	 * \param vs ���ٶ�
	 * \param vt ĩ�ٶ�
	 * \param vmax ����ٶ�
	 * \param a ���ٶ�
	 * \param sampleTime ����ʱ��
	 * \param path ���·��
	 * \param pathVel ����ٶ�
	 * \return �Ƿ�ɹ�
	 */
	bool solveProgramPathVel(ProgramItemBase::ProgramType type, const rl::math::Vector& s, const rl::math::Vector& t,
		const rl::math::Vector& vs, double vt, double vmax, double a, double sampleTime, rl::plan::VectorList& path, rl::plan::VectorList& pathVel);
	/**
	 * \brief ����item���������Ŀ���
	 * \param item ��ǰ��Ŀ
	 * \param result ������
	 * \param start Ϊ��������ṩ����ʼ�㣬��ʡ��
	 * \return �����Ƿ�ɹ�
	 */
	bool solvePointTarget(ProgramItemBase* item, rl::math::Vector& result,
		const rl::math::Vector& start = rl::math::Vector());

signals:
	void finish(bool ok);

private:
	bool running;
};

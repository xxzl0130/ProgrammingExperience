#pragma once
#include "commonHeader.h"
#include "ProgramItem.h"

class SimulateThread : public QThread
{
	Q_OBJECT

public:
	SimulateThread(QObject *parent);
	~SimulateThread();

	void run() override;
	void stop();

	QList<ProgramItemBase*> commandList;
	bool pause;

protected:
	void checkPause();
	/**
	 * \brief 仅路径点的动画模拟
	 * \param q 路径点
	 */
	void drawPathMove(const rl::plan::VectorList& q);
	/**
	 * \brief 带速度的模拟，未实现
	 * \param q 路径点
	 * \param qd 速度
	 */
	void drawPathVelMove(const rl::plan::VectorList& q, const rl::plan::VectorList& qd);
	/**
	 * \brief 递归处理，对item进行仿真
	 * \param item 编程项目
	 */
	void simulateItem(ProgramItemBase* item);
	/**
	 * \brief 递归收集path信息，用于绘制路径
	 * \param item 编程项目
	 * \return 路径
	 */
	rl::plan::VectorList collectPath(ProgramItemBase* item);
	void sendSimulateRatioInfo(double ratio);

signals:
	void finish();
	void showMessage(const QString& msg);
	/**
	* \brief 通用的错误框模板
	* \param text 错误内容
	* \param info 提示信息
	* \param title 标题
	*/
	void errorBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());
	/**
	* \brief 通用的信息框模板
	* \param text 错误内容
	* \param info 提示信息
	* \param title 标题
	*/
	void infoBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());
	/**
	* \brief 通用的警告框模板
	* \param text 错误内容
	* \param info 提示信息
	* \param title 标题
	*/
	void warningBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());
	void configurationRequested(const rl::math::Vector& q);
	void pointRequested(const rl::math::Vector& xyz);
	void configurationPathRequested(const rl::plan::VectorList& path);

private:
	bool running;
};

#pragma once

#include "commonHeader.h"
#include "KinematicsAlgorithm.h"
#include "tinysplinecpp.h"

class PlannerThread : public QThread, public rl::plan::Viewer
{
	Q_OBJECT

public:
	PlannerThread(QObject* parent = nullptr);
	virtual ~PlannerThread();

	enum WorkType
	{
		Point2Point,
		Line,
		Circle,
		B_Spline,
	} workType;

	// 继承自Viewer，发射signal调用真正的Viewer显示
	void drawConfiguration(const rl::math::Vector& q);
	void drawConfigurationEdge(const rl::math::Vector& q0, const rl::math::Vector& q1, const bool& free = true);
	void drawConfigurationPath(const rl::plan::VectorList& path);
	void drawConfigurationVertex(const rl::math::Vector& q, const bool& free = true);
	void drawLine(const rl::math::Vector& xyz0, const rl::math::Vector& xyz1);
	void drawPoint(const rl::math::Vector& xyz);
	void drawSphere(const rl::math::Vector& center, const rl::math::Real& radius);
	void drawSweptVolume(const rl::plan::VectorList& path);
	void drawWork(const rl::math::Transform& t);
	void drawWorkEdge(const rl::math::Vector& q0, const rl::math::Vector& q1);
	void drawWorkPath(const rl::plan::VectorList& path);
	void drawWorkVertex(const rl::math::Vector& q);
	void reset();
	void resetEdges();
	void resetLines();
	void resetPoints();
	void resetSpheres();
	void resetVertices();

	void drawPath(rl::plan::VectorList path);

	void run();
	void stop();
	void showMessage(const std::string& message);

	bool animate;
	// 暂时没用
	bool quit;
	bool swept;

	// 插补间隔
	double delta;

	KinematicsAlgorithm kinematicsAlgorithm;
	tinyspline::BSpline bspline;

//protected:
	bool point2PointPlan(rl::plan::VectorList& path);
	bool linePlan(rl::plan::VectorList& path);
	bool circlePlan(rl::plan::VectorList& path);
	bool bsplinePlan(rl::plan::VectorList& path);
	bool checkKeyPoint(const std::vector<rl::math::Vector>& path);

private:
	bool running;

signals:
	// 用来发射的信号，由QT实现
	void configurationRequested(const rl::math::Vector& q);
	void configurationEdgeRequested(const rl::math::Vector& q0, const rl::math::Vector& q1, const bool& free);
	void configurationVertexRequested(const rl::math::Vector& q, const bool& free);
	void configurationPathRequested(const rl::plan::VectorList& path);
	void edgeResetRequested();
	void lineRequested(const rl::math::Vector& xyz0, const rl::math::Vector& xyz1);
	void lineResetRequested();
	void messageRequested(const std::string& message);
	void pointRequested(const rl::math::Vector& xyz);
	void pointResetRequested();
	void resetRequested();
	void sphereRequested(const rl::math::Vector& center, const rl::math::Real& radius);
	void sphereResetRequested();
	void sweptVolumeRequested(const rl::plan::VectorList& path);
	void vertexResetRequested();
	void workRequested(const rl::math::Transform& t);
	void workEdgeRequested(const rl::math::Vector& q0, const rl::math::Vector& q1);
	void workPathRequested(const rl::plan::VectorList& path);
	void workVertexRequested(const rl::math::Vector& q);
	
	void positionChanged(const rl::math::Vector& q, bool refresh);
	void sendPath(const rl::plan::VectorList& path);
	void sendPathVel(const rl::plan::VectorList& path);
	void sendResult(bool res);
	/**
	* \brief 通用的错误框模板
	* \param text 错误内容
	* \param info 提示信息
	* \param title 标题
	*/
	void errorBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());
};
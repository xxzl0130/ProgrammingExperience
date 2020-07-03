#pragma once
/*
 * 预编译头文件，暂未加入Eigen的模板库部分
 * 主要分为rl库、Qt库、std库以及自编常用函数几部分
 */
#include <Inventor/nodes/SoCamera.h>
#include <Inventor/nodes/SoOrthographicCamera.h>
#include <Inventor/nodes/SoPerspectiveCamera.h>
#include <Inventor/Qt/SoQt.h>
#include <rl/plan/AddRrtConCon.h>
#include <rl/plan/AdvancedOptimizer.h>
#include <rl/plan/BridgeSampler.h>
#include <rl/plan/DistanceModel.h>
#include <rl/plan/Eet.h>
#include <rl/plan/GaussianSampler.h>
#include <rl/plan/GnatNearestNeighbors.h>
#include <rl/plan/KdtreeBoundingBoxNearestNeighbors.h>
#include <rl/plan/KdtreeNearestNeighbors.h>
#include <rl/plan/LinearNearestNeighbors.h>
#include <rl/plan/Prm.h>
#include <rl/plan/PrmUtilityGuided.h>
#include <rl/plan/RecursiveVerifier.h>
#include <rl/plan/Rrt.h>
#include <rl/plan/RrtCon.h>
#include <rl/plan/RrtConCon.h>
#include <rl/plan/RrtDual.h>
#include <rl/plan/RrtExtCon.h>
#include <rl/plan/RrtExtExt.h>
#include <rl/plan/RrtGoalBias.h>
#include <rl/plan/SequentialVerifier.h>
#include <rl/plan/SimpleModel.h>
#include <rl/plan/SimpleOptimizer.h>
#include <rl/plan/UniformSampler.h>
#include <rl/plan/WorkspaceSphereExplorer.h>
#include <rl/sg/Body.h>
#include <rl/sg/SimpleScene.h>
#include <rl/xml/Attribute.h>
#include <rl/xml/Document.h>
#include <rl/xml/DomParser.h>
#include <rl/xml/Node.h>
#include <rl/xml/Object.h>
#include <rl/xml/Path.h>
#include <rl/xml/Stylesheet.h>
#include <rl/kin/Kinematics.h>
#include <rl/mdl/Dynamic.h>
#include <rl/plan/NearestNeighbors.h>
#include <rl/plan/Optimizer.h>
#include <rl/plan/Planner.h>
#include <rl/plan/Sampler.h>
#include <rl/plan/SimpleModel.h>
#include <rl/plan/Verifier.h>
#include <rl/plan/Eet.h>
#include <rl/plan/WorkspaceSphereExplorer.h>
#include <rl/plan/Viewer.h>
#include <rl/plan/GnatNearestNeighbors.h>
#include <rl/sg/Model.h>
#include <rl/sg/so/Model.h>
#include <rl/sg/Scene.h>
#include <rl/sg/so/Scene.h>
#include <rl/sg/so/Model.h>
#include <rl/mdl/XmlFactory.h>

#ifdef RL_SG_BULLET
#include <rl/sg/bullet/Scene.h>
#include <rl/sg/bullet/Model.h>
#endif
#ifdef RL_SG_SO
#include <rl/sg/so/Scene.h>
#include <rl/sg/so/Model.h>
#endif
#ifdef RL_SG_SOLID
#include <rl/sg/solid/Scene.h>
#include <rl/sg/solid/Model.h>
#endif
#ifdef RL_SG_ODE
#include <rl/sg/ode/Scene.h>
#include <rl/sg/ode/Model.h>
#endif
#ifdef RL_SG_PQP
#include <rl/sg/pqp/Scene.h>
#include <rl/sg/pqp/Model.h>
#endif

#include <QDialog>
#include <QString>
#include <QMutexLocker>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>
#include <QJsonParseError>
#include <QFileDialog>
#include <QTemporaryFile>
#include <QString>
#include <QList>
#include <QTreeWidgetItem>
#include <QThread>
#include <QTimer>
#include <QTextStream>
#include <QMainWindow>
#include <QMutex>
#include <QMutexLocker>
#include <QAbstractTableModel>
#include <QDialog>
#include <QPushButton>
#include <QAction>
#include <QJsonArray>
#include <QItemDelegate>
#include <QTreeWidgetItem>
#include <QLineEdit>
#include <QDateTime>
#include <QFileDialog>
#include <QGLWidget>
#include <QMessageBox>
#include <QPainter>
#include <QApplication>
#include <QDoubleSpinBox>
#include <QModelIndex>
#include <QRegExp>
#include <QRegExpValidator>

#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <chrono>
#include <fstream>
#include <iostream>
#include <iomanip>

bool str2Bool(const QString& str);
int str2Int(const QString& str);
double str2Double(const QString& str);
rl::math::Vector str2Vector(const QString& str, const QString& spec = ",");
QString vector2Str(const rl::math::Vector& vec);
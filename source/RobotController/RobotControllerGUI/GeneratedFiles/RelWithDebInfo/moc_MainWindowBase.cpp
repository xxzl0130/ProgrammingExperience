/****************************************************************************
** Meta object code from reading C++ file 'MainWindowBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "commonHeader.h"
#include "../../MainWindowBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindowBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindowBase_t {
    QByteArrayData data[88];
    char stringdata0[1303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindowBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindowBase_t qt_meta_stringdata_MainWindowBase = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MainWindowBase"
QT_MOC_LITERAL(1, 15, 22), // "configurationRequested"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 16), // "rl::math::Vector"
QT_MOC_LITERAL(4, 56, 26), // "configurationPathRequested"
QT_MOC_LITERAL(5, 83, 20), // "rl::plan::VectorList"
QT_MOC_LITERAL(6, 104, 11), // "sendAmsAddr"
QT_MOC_LITERAL(7, 116, 7), // "AmsAddr"
QT_MOC_LITERAL(8, 124, 13), // "sendFlashTime"
QT_MOC_LITERAL(9, 138, 25), // "sendParameterJsonFilename"
QT_MOC_LITERAL(10, 164, 8), // "errorBox"
QT_MOC_LITERAL(11, 173, 4), // "text"
QT_MOC_LITERAL(12, 178, 4), // "info"
QT_MOC_LITERAL(13, 183, 5), // "title"
QT_MOC_LITERAL(14, 189, 10), // "warningBox"
QT_MOC_LITERAL(15, 200, 7), // "infoBox"
QT_MOC_LITERAL(16, 208, 5), // "reset"
QT_MOC_LITERAL(17, 214, 10), // "pathSolved"
QT_MOC_LITERAL(18, 225, 3), // "res"
QT_MOC_LITERAL(19, 229, 11), // "showMessage"
QT_MOC_LITERAL(20, 241, 11), // "std::string"
QT_MOC_LITERAL(21, 253, 3), // "msg"
QT_MOC_LITERAL(22, 257, 9), // "setOnline"
QT_MOC_LITERAL(23, 267, 10), // "setOffline"
QT_MOC_LITERAL(24, 278, 16), // "setOnlineOffline"
QT_MOC_LITERAL(25, 295, 12), // "setReadWrite"
QT_MOC_LITERAL(26, 308, 15), // "positionChanged"
QT_MOC_LITERAL(27, 324, 7), // "refresh"
QT_MOC_LITERAL(28, 332, 16), // "positionChanged2"
QT_MOC_LITERAL(29, 349, 1), // "q"
QT_MOC_LITERAL(30, 351, 16), // "positionChanged3"
QT_MOC_LITERAL(31, 368, 18), // "reset2ZeroPosition"
QT_MOC_LITERAL(32, 387, 14), // "sendPath2Robot"
QT_MOC_LITERAL(33, 402, 8), // "drawPath"
QT_MOC_LITERAL(34, 411, 11), // "receivePath"
QT_MOC_LITERAL(35, 423, 4), // "path"
QT_MOC_LITERAL(36, 428, 14), // "receivePathVel"
QT_MOC_LITERAL(37, 443, 7), // "pathVel"
QT_MOC_LITERAL(38, 451, 14), // "showWaitWindow"
QT_MOC_LITERAL(39, 466, 14), // "hideWaitWindow"
QT_MOC_LITERAL(40, 481, 18), // "updateToolPosition"
QT_MOC_LITERAL(41, 500, 10), // "loadConfig"
QT_MOC_LITERAL(42, 511, 10), // "saveConfig"
QT_MOC_LITERAL(43, 522, 22), // "getRandomConfiguration"
QT_MOC_LITERAL(44, 545, 26), // "getRandomFreeConfiguration"
QT_MOC_LITERAL(45, 572, 8), // "addPoint"
QT_MOC_LITERAL(46, 581, 10), // "clearPoint"
QT_MOC_LITERAL(47, 592, 11), // "deletePoint"
QT_MOC_LITERAL(48, 604, 9), // "startPlan"
QT_MOC_LITERAL(49, 614, 17), // "planMethodChanged"
QT_MOC_LITERAL(50, 632, 5), // "index"
QT_MOC_LITERAL(51, 638, 12), // "pauseAnimate"
QT_MOC_LITERAL(52, 651, 19), // "showRemoteSetWindow"
QT_MOC_LITERAL(53, 671, 22), // "showParameterSetWindow"
QT_MOC_LITERAL(54, 694, 9), // "saveImage"
QT_MOC_LITERAL(55, 704, 8), // "saveVRML"
QT_MOC_LITERAL(56, 713, 17), // "drawConfiguration"
QT_MOC_LITERAL(57, 731, 21), // "drawConfigurationPath"
QT_MOC_LITERAL(58, 753, 21), // "rl::plan::VectorList&"
QT_MOC_LITERAL(59, 775, 18), // "setRobotParameters"
QT_MOC_LITERAL(60, 794, 33), // "std::map<std::string,std::str..."
QT_MOC_LITERAL(61, 828, 10), // "parameters"
QT_MOC_LITERAL(62, 839, 12), // "startSolveIK"
QT_MOC_LITERAL(63, 852, 8), // "showAxis"
QT_MOC_LITERAL(64, 861, 13), // "ikSolveFinish"
QT_MOC_LITERAL(65, 875, 16), // "receiveFlashTime"
QT_MOC_LITERAL(66, 892, 4), // "time"
QT_MOC_LITERAL(67, 897, 19), // "refreshPlannerTable"
QT_MOC_LITERAL(68, 917, 12), // "saveKeyPoint"
QT_MOC_LITERAL(69, 930, 12), // "loadKeyPoint"
QT_MOC_LITERAL(70, 943, 13), // "savePathPoint"
QT_MOC_LITERAL(71, 957, 13), // "loadPathPoint"
QT_MOC_LITERAL(72, 971, 19), // "setAlwaysFlashTable"
QT_MOC_LITERAL(73, 991, 19), // "joint0SliderChanged"
QT_MOC_LITERAL(74, 1011, 5), // "value"
QT_MOC_LITERAL(75, 1017, 19), // "joint1SliderChanged"
QT_MOC_LITERAL(76, 1037, 19), // "joint2SliderChanged"
QT_MOC_LITERAL(77, 1057, 19), // "joint3SliderChanged"
QT_MOC_LITERAL(78, 1077, 19), // "joint4SliderChanged"
QT_MOC_LITERAL(79, 1097, 19), // "joint5SliderChanged"
QT_MOC_LITERAL(80, 1117, 22), // "joint0ValueTextChanged"
QT_MOC_LITERAL(81, 1140, 22), // "joint1ValueTextChanged"
QT_MOC_LITERAL(82, 1163, 22), // "joint2ValueTextChanged"
QT_MOC_LITERAL(83, 1186, 22), // "joint3ValueTextChanged"
QT_MOC_LITERAL(84, 1209, 22), // "joint4ValueTextChanged"
QT_MOC_LITERAL(85, 1232, 22), // "joint5ValueTextChanged"
QT_MOC_LITERAL(86, 1255, 23), // "applyToolPositionChange"
QT_MOC_LITERAL(87, 1279, 23) // "toolPositionTypeChanged"

    },
    "MainWindowBase\0configurationRequested\0"
    "\0rl::math::Vector\0configurationPathRequested\0"
    "rl::plan::VectorList\0sendAmsAddr\0"
    "AmsAddr\0sendFlashTime\0sendParameterJsonFilename\0"
    "errorBox\0text\0info\0title\0warningBox\0"
    "infoBox\0reset\0pathSolved\0res\0showMessage\0"
    "std::string\0msg\0setOnline\0setOffline\0"
    "setOnlineOffline\0setReadWrite\0"
    "positionChanged\0refresh\0positionChanged2\0"
    "q\0positionChanged3\0reset2ZeroPosition\0"
    "sendPath2Robot\0drawPath\0receivePath\0"
    "path\0receivePathVel\0pathVel\0showWaitWindow\0"
    "hideWaitWindow\0updateToolPosition\0"
    "loadConfig\0saveConfig\0getRandomConfiguration\0"
    "getRandomFreeConfiguration\0addPoint\0"
    "clearPoint\0deletePoint\0startPlan\0"
    "planMethodChanged\0index\0pauseAnimate\0"
    "showRemoteSetWindow\0showParameterSetWindow\0"
    "saveImage\0saveVRML\0drawConfiguration\0"
    "drawConfigurationPath\0rl::plan::VectorList&\0"
    "setRobotParameters\0std::map<std::string,std::string>\0"
    "parameters\0startSolveIK\0showAxis\0"
    "ikSolveFinish\0receiveFlashTime\0time\0"
    "refreshPlannerTable\0saveKeyPoint\0"
    "loadKeyPoint\0savePathPoint\0loadPathPoint\0"
    "setAlwaysFlashTable\0joint0SliderChanged\0"
    "value\0joint1SliderChanged\0joint2SliderChanged\0"
    "joint3SliderChanged\0joint4SliderChanged\0"
    "joint5SliderChanged\0joint0ValueTextChanged\0"
    "joint1ValueTextChanged\0joint2ValueTextChanged\0"
    "joint3ValueTextChanged\0joint4ValueTextChanged\0"
    "joint5ValueTextChanged\0applyToolPositionChange\0"
    "toolPositionTypeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindowBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      76,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  394,    2, 0x06 /* Public */,
       4,    1,  397,    2, 0x06 /* Public */,
       6,    1,  400,    2, 0x06 /* Public */,
       8,    1,  403,    2, 0x06 /* Public */,
       9,    1,  406,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    3,  409,    2, 0x0a /* Public */,
      10,    2,  416,    2, 0x2a /* Public | MethodCloned */,
      10,    1,  421,    2, 0x2a /* Public | MethodCloned */,
      14,    3,  424,    2, 0x0a /* Public */,
      14,    2,  431,    2, 0x2a /* Public | MethodCloned */,
      14,    1,  436,    2, 0x2a /* Public | MethodCloned */,
      15,    3,  439,    2, 0x0a /* Public */,
      15,    2,  446,    2, 0x2a /* Public | MethodCloned */,
      15,    1,  451,    2, 0x2a /* Public | MethodCloned */,
      16,    0,  454,    2, 0x0a /* Public */,
      17,    1,  455,    2, 0x0a /* Public */,
      19,    1,  458,    2, 0x0a /* Public */,
      19,    1,  461,    2, 0x0a /* Public */,
      22,    0,  464,    2, 0x0a /* Public */,
      23,    0,  465,    2, 0x0a /* Public */,
      24,    0,  466,    2, 0x0a /* Public */,
      25,    0,  467,    2, 0x0a /* Public */,
      26,    1,  468,    2, 0x0a /* Public */,
      26,    0,  471,    2, 0x2a /* Public | MethodCloned */,
      28,    2,  472,    2, 0x0a /* Public */,
      28,    1,  477,    2, 0x2a /* Public | MethodCloned */,
      30,    1,  480,    2, 0x0a /* Public */,
      31,    0,  483,    2, 0x0a /* Public */,
      32,    0,  484,    2, 0x0a /* Public */,
      33,    0,  485,    2, 0x0a /* Public */,
      34,    1,  486,    2, 0x0a /* Public */,
      36,    1,  489,    2, 0x0a /* Public */,
      38,    0,  492,    2, 0x0a /* Public */,
      39,    0,  493,    2, 0x0a /* Public */,
      40,    0,  494,    2, 0x0a /* Public */,
      41,    0,  495,    2, 0x09 /* Protected */,
      42,    0,  496,    2, 0x09 /* Protected */,
      43,    0,  497,    2, 0x09 /* Protected */,
      44,    0,  498,    2, 0x09 /* Protected */,
      45,    0,  499,    2, 0x09 /* Protected */,
      46,    0,  500,    2, 0x09 /* Protected */,
      47,    0,  501,    2, 0x09 /* Protected */,
      48,    0,  502,    2, 0x09 /* Protected */,
      49,    1,  503,    2, 0x09 /* Protected */,
      51,    0,  506,    2, 0x09 /* Protected */,
      52,    0,  507,    2, 0x09 /* Protected */,
      53,    0,  508,    2, 0x09 /* Protected */,
      54,    0,  509,    2, 0x09 /* Protected */,
      55,    0,  510,    2, 0x09 /* Protected */,
      56,    1,  511,    2, 0x09 /* Protected */,
      57,    1,  514,    2, 0x09 /* Protected */,
      59,    1,  517,    2, 0x09 /* Protected */,
      62,    0,  520,    2, 0x09 /* Protected */,
      63,    0,  521,    2, 0x09 /* Protected */,
      64,    1,  522,    2, 0x09 /* Protected */,
      65,    1,  525,    2, 0x09 /* Protected */,
      67,    0,  528,    2, 0x09 /* Protected */,
      68,    0,  529,    2, 0x09 /* Protected */,
      69,    0,  530,    2, 0x09 /* Protected */,
      70,    0,  531,    2, 0x09 /* Protected */,
      71,    0,  532,    2, 0x09 /* Protected */,
      72,    0,  533,    2, 0x09 /* Protected */,
      73,    1,  534,    2, 0x09 /* Protected */,
      75,    1,  537,    2, 0x09 /* Protected */,
      76,    1,  540,    2, 0x09 /* Protected */,
      77,    1,  543,    2, 0x09 /* Protected */,
      78,    1,  546,    2, 0x09 /* Protected */,
      79,    1,  549,    2, 0x09 /* Protected */,
      80,    1,  552,    2, 0x09 /* Protected */,
      81,    1,  555,    2, 0x09 /* Protected */,
      82,    1,  558,    2, 0x09 /* Protected */,
      83,    1,  561,    2, 0x09 /* Protected */,
      84,    1,  564,    2, 0x09 /* Protected */,
      85,    1,  567,    2, 0x09 /* Protected */,
      86,    0,  570,    2, 0x09 /* Protected */,
      87,    1,  571,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,   29,   27,
    QMetaType::Void, 0x80000000 | 3,   29,
    QMetaType::Void, 0x80000000 | 3,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,   35,
    QMetaType::Void, 0x80000000 | 5,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   29,
    QMetaType::Void, 0x80000000 | 58,   35,
    QMetaType::Void, 0x80000000 | 60,   61,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   50,

       0        // eod
};

void MainWindowBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindowBase *_t = static_cast<MainWindowBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configurationRequested((*reinterpret_cast< const rl::math::Vector(*)>(_a[1]))); break;
        case 1: _t->configurationPathRequested((*reinterpret_cast< const rl::plan::VectorList(*)>(_a[1]))); break;
        case 2: _t->sendAmsAddr((*reinterpret_cast< const AmsAddr(*)>(_a[1]))); break;
        case 3: _t->sendFlashTime((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->sendParameterJsonFilename((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->errorBox((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->errorBox((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->errorBox((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->warningBox((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 9: _t->warningBox((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->warningBox((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->infoBox((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->infoBox((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->infoBox((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->reset(); break;
        case 15: _t->pathSolved((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->showMessage((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 17: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->setOnline(); break;
        case 19: _t->setOffline(); break;
        case 20: _t->setOnlineOffline(); break;
        case 21: _t->setReadWrite(); break;
        case 22: _t->positionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->positionChanged(); break;
        case 24: _t->positionChanged2((*reinterpret_cast< const rl::math::Vector(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 25: _t->positionChanged2((*reinterpret_cast< const rl::math::Vector(*)>(_a[1]))); break;
        case 26: _t->positionChanged3((*reinterpret_cast< const rl::math::Vector(*)>(_a[1]))); break;
        case 27: _t->reset2ZeroPosition(); break;
        case 28: _t->sendPath2Robot(); break;
        case 29: _t->drawPath(); break;
        case 30: _t->receivePath((*reinterpret_cast< const rl::plan::VectorList(*)>(_a[1]))); break;
        case 31: _t->receivePathVel((*reinterpret_cast< const rl::plan::VectorList(*)>(_a[1]))); break;
        case 32: _t->showWaitWindow(); break;
        case 33: _t->hideWaitWindow(); break;
        case 34: _t->updateToolPosition(); break;
        case 35: _t->loadConfig(); break;
        case 36: _t->saveConfig(); break;
        case 37: _t->getRandomConfiguration(); break;
        case 38: _t->getRandomFreeConfiguration(); break;
        case 39: _t->addPoint(); break;
        case 40: _t->clearPoint(); break;
        case 41: _t->deletePoint(); break;
        case 42: _t->startPlan(); break;
        case 43: _t->planMethodChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->pauseAnimate(); break;
        case 45: _t->showRemoteSetWindow(); break;
        case 46: _t->showParameterSetWindow(); break;
        case 47: _t->saveImage(); break;
        case 48: _t->saveVRML(); break;
        case 49: _t->drawConfiguration((*reinterpret_cast< const rl::math::Vector(*)>(_a[1]))); break;
        case 50: _t->drawConfigurationPath((*reinterpret_cast< rl::plan::VectorList(*)>(_a[1]))); break;
        case 51: _t->setRobotParameters((*reinterpret_cast< const std::map<std::string,std::string>(*)>(_a[1]))); break;
        case 52: _t->startSolveIK(); break;
        case 53: _t->showAxis(); break;
        case 54: _t->ikSolveFinish((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 55: _t->receiveFlashTime((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 56: _t->refreshPlannerTable(); break;
        case 57: _t->saveKeyPoint(); break;
        case 58: _t->loadKeyPoint(); break;
        case 59: _t->savePathPoint(); break;
        case 60: _t->loadPathPoint(); break;
        case 61: _t->setAlwaysFlashTable(); break;
        case 62: _t->joint0SliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->joint1SliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 64: _t->joint2SliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: _t->joint3SliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 66: _t->joint4SliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 67: _t->joint5SliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 68: _t->joint0ValueTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 69: _t->joint1ValueTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 70: _t->joint2ValueTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 71: _t->joint3ValueTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 72: _t->joint4ValueTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 73: _t->joint5ValueTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 74: _t->applyToolPositionChange(); break;
        case 75: _t->toolPositionTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindowBase::*)(const rl::math::Vector & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowBase::configurationRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindowBase::*)(const rl::plan::VectorList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowBase::configurationPathRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindowBase::*)(const AmsAddr & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowBase::sendAmsAddr)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindowBase::*)(const int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowBase::sendFlashTime)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindowBase::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowBase::sendParameterJsonFilename)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindowBase::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindowBase.data,
      qt_meta_data_MainWindowBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindowBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindowBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowBase.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindowBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 76)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 76;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 76)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 76;
    }
    return _id;
}

// SIGNAL 0
void MainWindowBase::configurationRequested(const rl::math::Vector & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindowBase::configurationPathRequested(const rl::plan::VectorList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindowBase::sendAmsAddr(const AmsAddr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindowBase::sendFlashTime(const int & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindowBase::sendParameterJsonFilename(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

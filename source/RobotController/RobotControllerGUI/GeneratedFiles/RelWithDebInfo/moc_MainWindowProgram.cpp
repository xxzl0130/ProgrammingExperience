/****************************************************************************
** Meta object code from reading C++ file 'MainWindowProgram.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "commonHeader.h"
#include "../../MainWindowProgram.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindowProgram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindowProgram_t {
    QByteArrayData data[94];
    char stringdata0[1554];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindowProgram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindowProgram_t qt_meta_stringdata_MainWindowProgram = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MainWindowProgram"
QT_MOC_LITERAL(1, 18, 14), // "commandRenamed"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "addCommand"
QT_MOC_LITERAL(4, 45, 28), // "ProgramItemBase::ProgramType"
QT_MOC_LITERAL(5, 74, 4), // "type"
QT_MOC_LITERAL(6, 79, 33), // "refreshAbsolutePointPositionT..."
QT_MOC_LITERAL(7, 113, 16), // "refreshDeltaInfo"
QT_MOC_LITERAL(8, 130, 30), // "onInsertCommandNextRadioButton"
QT_MOC_LITERAL(9, 161, 30), // "onInsertCommandPrevRadioButton"
QT_MOC_LITERAL(10, 192, 11), // "saveProgram"
QT_MOC_LITERAL(11, 204, 11), // "loadProgram"
QT_MOC_LITERAL(12, 216, 16), // "setAbsolutePoint"
QT_MOC_LITERAL(13, 233, 17), // "showAbsolutePoint"
QT_MOC_LITERAL(14, 251, 21), // "setRelativePointStart"
QT_MOC_LITERAL(15, 273, 22), // "showRelativePointStart"
QT_MOC_LITERAL(16, 296, 20), // "setRelativePointGoal"
QT_MOC_LITERAL(17, 317, 21), // "showRelativePointGoal"
QT_MOC_LITERAL(18, 339, 16), // "pointTypeChanged"
QT_MOC_LITERAL(19, 356, 5), // "index"
QT_MOC_LITERAL(20, 362, 15), // "moveTypeChanged"
QT_MOC_LITERAL(21, 378, 23), // "jointSharedSpeedChanged"
QT_MOC_LITERAL(22, 402, 4), // "text"
QT_MOC_LITERAL(23, 407, 23), // "jointSharedAccelChanged"
QT_MOC_LITERAL(24, 431, 17), // "sharedToolChanged"
QT_MOC_LITERAL(25, 449, 16), // "setUseSharedTool"
QT_MOC_LITERAL(26, 466, 11), // "setNoFillet"
QT_MOC_LITERAL(27, 478, 9), // "setFillet"
QT_MOC_LITERAL(28, 488, 15), // "setFilletRadius"
QT_MOC_LITERAL(29, 504, 6), // "radius"
QT_MOC_LITERAL(30, 511, 19), // "setUseSharedSetting"
QT_MOC_LITERAL(31, 531, 17), // "jointSpeedChanged"
QT_MOC_LITERAL(32, 549, 17), // "jointAccelChanged"
QT_MOC_LITERAL(33, 567, 15), // "pointVarChanged"
QT_MOC_LITERAL(34, 583, 6), // "itemUp"
QT_MOC_LITERAL(35, 590, 8), // "itemDown"
QT_MOC_LITERAL(36, 599, 10), // "itemDelete"
QT_MOC_LITERAL(37, 610, 16), // "popWindowTypeMsg"
QT_MOC_LITERAL(38, 627, 18), // "popWindowTypeError"
QT_MOC_LITERAL(39, 646, 20), // "popWindowTypeWarning"
QT_MOC_LITERAL(40, 667, 20), // "setStopWithPopWindow"
QT_MOC_LITERAL(41, 688, 16), // "previewPopWindow"
QT_MOC_LITERAL(42, 705, 20), // "popWindowTextChanged"
QT_MOC_LITERAL(43, 726, 18), // "commentTextChanged"
QT_MOC_LITERAL(44, 745, 9), // "setNoWait"
QT_MOC_LITERAL(45, 755, 11), // "setWaitTime"
QT_MOC_LITERAL(46, 767, 15), // "waitTimeChanged"
QT_MOC_LITERAL(47, 783, 4), // "time"
QT_MOC_LITERAL(48, 788, 14), // "setWaitDigital"
QT_MOC_LITERAL(49, 803, 20), // "waitDigitalInChanged"
QT_MOC_LITERAL(50, 824, 25), // "waitDigitalInLevelChanged"
QT_MOC_LITERAL(51, 850, 13), // "setWaitAnalog"
QT_MOC_LITERAL(52, 864, 19), // "waitAnalogInChanged"
QT_MOC_LITERAL(53, 884, 24), // "waitAnalogCompareChanged"
QT_MOC_LITERAL(54, 909, 24), // "waitAnalogInLevelChanged"
QT_MOC_LITERAL(55, 934, 5), // "value"
QT_MOC_LITERAL(56, 940, 9), // "setWaitFx"
QT_MOC_LITERAL(57, 950, 13), // "waitFxChanged"
QT_MOC_LITERAL(58, 964, 15), // "addBlankCommand"
QT_MOC_LITERAL(59, 980, 14), // "addMoveCommand"
QT_MOC_LITERAL(60, 995, 15), // "addPointCommand"
QT_MOC_LITERAL(61, 1011, 14), // "addWaitCommand"
QT_MOC_LITERAL(62, 1026, 13), // "addSetCommand"
QT_MOC_LITERAL(63, 1040, 13), // "addPopCommand"
QT_MOC_LITERAL(64, 1054, 14), // "addStopCommand"
QT_MOC_LITERAL(65, 1069, 17), // "addCommentCommand"
QT_MOC_LITERAL(66, 1087, 12), // "addPointPrev"
QT_MOC_LITERAL(67, 1100, 12), // "addPointNext"
QT_MOC_LITERAL(68, 1113, 24), // "programTreeSelectChanged"
QT_MOC_LITERAL(69, 1138, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(70, 1155, 6), // "widget"
QT_MOC_LITERAL(71, 1162, 15), // "jump2StructPage"
QT_MOC_LITERAL(72, 1178, 8), // "setNoSet"
QT_MOC_LITERAL(73, 1187, 16), // "setDigitalOutput"
QT_MOC_LITERAL(74, 1204, 18), // "setDigitalOutputFx"
QT_MOC_LITERAL(75, 1223, 15), // "setAnalogOutput"
QT_MOC_LITERAL(76, 1239, 17), // "setAnalogOutputFx"
QT_MOC_LITERAL(77, 1257, 6), // "setVar"
QT_MOC_LITERAL(78, 1264, 7), // "setLoad"
QT_MOC_LITERAL(79, 1272, 7), // "setTool"
QT_MOC_LITERAL(80, 1280, 20), // "setDigitalOutChanged"
QT_MOC_LITERAL(81, 1301, 25), // "setDigitalOutLevelChanged"
QT_MOC_LITERAL(82, 1327, 26), // "setDigitalOutFxCombChanged"
QT_MOC_LITERAL(83, 1354, 22), // "setDigitalOutFxChanged"
QT_MOC_LITERAL(84, 1377, 19), // "setAnalogOutChanged"
QT_MOC_LITERAL(85, 1397, 24), // "setAnalogOutLevelChanged"
QT_MOC_LITERAL(86, 1422, 25), // "setAnalogOutFxCombChanged"
QT_MOC_LITERAL(87, 1448, 21), // "setAnalogOutFxChanged"
QT_MOC_LITERAL(88, 1470, 13), // "setVarChanged"
QT_MOC_LITERAL(89, 1484, 15), // "setVarFxChanged"
QT_MOC_LITERAL(90, 1500, 14), // "setLoadChanged"
QT_MOC_LITERAL(91, 1515, 14), // "setToolChanged"
QT_MOC_LITERAL(92, 1530, 18), // "programNameChanged"
QT_MOC_LITERAL(93, 1549, 4) // "name"

    },
    "MainWindowProgram\0commandRenamed\0\0"
    "addCommand\0ProgramItemBase::ProgramType\0"
    "type\0refreshAbsolutePointPositionTable\0"
    "refreshDeltaInfo\0onInsertCommandNextRadioButton\0"
    "onInsertCommandPrevRadioButton\0"
    "saveProgram\0loadProgram\0setAbsolutePoint\0"
    "showAbsolutePoint\0setRelativePointStart\0"
    "showRelativePointStart\0setRelativePointGoal\0"
    "showRelativePointGoal\0pointTypeChanged\0"
    "index\0moveTypeChanged\0jointSharedSpeedChanged\0"
    "text\0jointSharedAccelChanged\0"
    "sharedToolChanged\0setUseSharedTool\0"
    "setNoFillet\0setFillet\0setFilletRadius\0"
    "radius\0setUseSharedSetting\0jointSpeedChanged\0"
    "jointAccelChanged\0pointVarChanged\0"
    "itemUp\0itemDown\0itemDelete\0popWindowTypeMsg\0"
    "popWindowTypeError\0popWindowTypeWarning\0"
    "setStopWithPopWindow\0previewPopWindow\0"
    "popWindowTextChanged\0commentTextChanged\0"
    "setNoWait\0setWaitTime\0waitTimeChanged\0"
    "time\0setWaitDigital\0waitDigitalInChanged\0"
    "waitDigitalInLevelChanged\0setWaitAnalog\0"
    "waitAnalogInChanged\0waitAnalogCompareChanged\0"
    "waitAnalogInLevelChanged\0value\0setWaitFx\0"
    "waitFxChanged\0addBlankCommand\0"
    "addMoveCommand\0addPointCommand\0"
    "addWaitCommand\0addSetCommand\0addPopCommand\0"
    "addStopCommand\0addCommentCommand\0"
    "addPointPrev\0addPointNext\0"
    "programTreeSelectChanged\0QTreeWidgetItem*\0"
    "widget\0jump2StructPage\0setNoSet\0"
    "setDigitalOutput\0setDigitalOutputFx\0"
    "setAnalogOutput\0setAnalogOutputFx\0"
    "setVar\0setLoad\0setTool\0setDigitalOutChanged\0"
    "setDigitalOutLevelChanged\0"
    "setDigitalOutFxCombChanged\0"
    "setDigitalOutFxChanged\0setAnalogOutChanged\0"
    "setAnalogOutLevelChanged\0"
    "setAnalogOutFxCombChanged\0"
    "setAnalogOutFxChanged\0setVarChanged\0"
    "setVarFxChanged\0setLoadChanged\0"
    "setToolChanged\0programNameChanged\0"
    "name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindowProgram[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      82,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  424,    2, 0x0a /* Public */,
       3,    1,  425,    2, 0x0a /* Public */,
       6,    0,  428,    2, 0x0a /* Public */,
       7,    0,  429,    2, 0x0a /* Public */,
       8,    0,  430,    2, 0x09 /* Protected */,
       9,    0,  431,    2, 0x09 /* Protected */,
      10,    0,  432,    2, 0x09 /* Protected */,
      11,    0,  433,    2, 0x09 /* Protected */,
      12,    0,  434,    2, 0x09 /* Protected */,
      13,    0,  435,    2, 0x09 /* Protected */,
      14,    0,  436,    2, 0x09 /* Protected */,
      15,    0,  437,    2, 0x09 /* Protected */,
      16,    0,  438,    2, 0x09 /* Protected */,
      17,    0,  439,    2, 0x09 /* Protected */,
      18,    1,  440,    2, 0x09 /* Protected */,
      20,    1,  443,    2, 0x09 /* Protected */,
      21,    1,  446,    2, 0x09 /* Protected */,
      23,    1,  449,    2, 0x09 /* Protected */,
      24,    1,  452,    2, 0x09 /* Protected */,
      25,    0,  455,    2, 0x09 /* Protected */,
      26,    0,  456,    2, 0x09 /* Protected */,
      27,    0,  457,    2, 0x09 /* Protected */,
      28,    1,  458,    2, 0x09 /* Protected */,
      30,    0,  461,    2, 0x09 /* Protected */,
      31,    1,  462,    2, 0x09 /* Protected */,
      32,    1,  465,    2, 0x09 /* Protected */,
      33,    1,  468,    2, 0x09 /* Protected */,
      34,    0,  471,    2, 0x09 /* Protected */,
      35,    0,  472,    2, 0x09 /* Protected */,
      36,    0,  473,    2, 0x09 /* Protected */,
      37,    0,  474,    2, 0x09 /* Protected */,
      38,    0,  475,    2, 0x09 /* Protected */,
      39,    0,  476,    2, 0x09 /* Protected */,
      40,    0,  477,    2, 0x09 /* Protected */,
      41,    0,  478,    2, 0x09 /* Protected */,
      42,    0,  479,    2, 0x09 /* Protected */,
      43,    0,  480,    2, 0x09 /* Protected */,
      44,    0,  481,    2, 0x09 /* Protected */,
      45,    0,  482,    2, 0x09 /* Protected */,
      46,    1,  483,    2, 0x09 /* Protected */,
      48,    0,  486,    2, 0x09 /* Protected */,
      49,    1,  487,    2, 0x09 /* Protected */,
      50,    1,  490,    2, 0x09 /* Protected */,
      51,    0,  493,    2, 0x09 /* Protected */,
      52,    1,  494,    2, 0x09 /* Protected */,
      53,    1,  497,    2, 0x09 /* Protected */,
      54,    1,  500,    2, 0x09 /* Protected */,
      56,    0,  503,    2, 0x09 /* Protected */,
      57,    1,  504,    2, 0x09 /* Protected */,
      58,    0,  507,    2, 0x09 /* Protected */,
      59,    0,  508,    2, 0x09 /* Protected */,
      60,    0,  509,    2, 0x09 /* Protected */,
      61,    0,  510,    2, 0x09 /* Protected */,
      62,    0,  511,    2, 0x09 /* Protected */,
      63,    0,  512,    2, 0x09 /* Protected */,
      64,    0,  513,    2, 0x09 /* Protected */,
      65,    0,  514,    2, 0x09 /* Protected */,
      66,    0,  515,    2, 0x09 /* Protected */,
      67,    0,  516,    2, 0x09 /* Protected */,
      68,    1,  517,    2, 0x09 /* Protected */,
      71,    0,  520,    2, 0x09 /* Protected */,
      72,    0,  521,    2, 0x09 /* Protected */,
      73,    0,  522,    2, 0x09 /* Protected */,
      74,    0,  523,    2, 0x09 /* Protected */,
      75,    0,  524,    2, 0x09 /* Protected */,
      76,    0,  525,    2, 0x09 /* Protected */,
      77,    0,  526,    2, 0x09 /* Protected */,
      78,    0,  527,    2, 0x09 /* Protected */,
      79,    0,  528,    2, 0x09 /* Protected */,
      80,    1,  529,    2, 0x09 /* Protected */,
      81,    1,  532,    2, 0x09 /* Protected */,
      82,    1,  535,    2, 0x09 /* Protected */,
      83,    1,  538,    2, 0x09 /* Protected */,
      84,    1,  541,    2, 0x09 /* Protected */,
      85,    1,  544,    2, 0x09 /* Protected */,
      86,    1,  547,    2, 0x09 /* Protected */,
      87,    1,  550,    2, 0x09 /* Protected */,
      88,    1,  553,    2, 0x09 /* Protected */,
      89,    1,  556,    2, 0x09 /* Protected */,
      90,    1,  559,    2, 0x09 /* Protected */,
      91,    1,  562,    2, 0x09 /* Protected */,
      92,    1,  565,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Int,   19,
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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Double,   55,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
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
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Double,   55,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Double,   55,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QString,   93,

       0        // eod
};

void MainWindowProgram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindowProgram *_t = static_cast<MainWindowProgram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commandRenamed(); break;
        case 1: _t->addCommand((*reinterpret_cast< ProgramItemBase::ProgramType(*)>(_a[1]))); break;
        case 2: _t->refreshAbsolutePointPositionTable(); break;
        case 3: _t->refreshDeltaInfo(); break;
        case 4: _t->onInsertCommandNextRadioButton(); break;
        case 5: _t->onInsertCommandPrevRadioButton(); break;
        case 6: _t->saveProgram(); break;
        case 7: _t->loadProgram(); break;
        case 8: _t->setAbsolutePoint(); break;
        case 9: _t->showAbsolutePoint(); break;
        case 10: _t->setRelativePointStart(); break;
        case 11: _t->showRelativePointStart(); break;
        case 12: _t->setRelativePointGoal(); break;
        case 13: _t->showRelativePointGoal(); break;
        case 14: _t->pointTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->moveTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->jointSharedSpeedChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->jointSharedAccelChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->sharedToolChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->setUseSharedTool(); break;
        case 20: _t->setNoFillet(); break;
        case 21: _t->setFillet(); break;
        case 22: _t->setFilletRadius((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: _t->setUseSharedSetting(); break;
        case 24: _t->jointSpeedChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->jointAccelChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->pointVarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->itemUp(); break;
        case 28: _t->itemDown(); break;
        case 29: _t->itemDelete(); break;
        case 30: _t->popWindowTypeMsg(); break;
        case 31: _t->popWindowTypeError(); break;
        case 32: _t->popWindowTypeWarning(); break;
        case 33: _t->setStopWithPopWindow(); break;
        case 34: _t->previewPopWindow(); break;
        case 35: _t->popWindowTextChanged(); break;
        case 36: _t->commentTextChanged(); break;
        case 37: _t->setNoWait(); break;
        case 38: _t->setWaitTime(); break;
        case 39: _t->waitTimeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->setWaitDigital(); break;
        case 41: _t->waitDigitalInChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->waitDigitalInLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->setWaitAnalog(); break;
        case 44: _t->waitAnalogInChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->waitAnalogCompareChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->waitAnalogInLevelChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 47: _t->setWaitFx(); break;
        case 48: _t->waitFxChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 49: _t->addBlankCommand(); break;
        case 50: _t->addMoveCommand(); break;
        case 51: _t->addPointCommand(); break;
        case 52: _t->addWaitCommand(); break;
        case 53: _t->addSetCommand(); break;
        case 54: _t->addPopCommand(); break;
        case 55: _t->addStopCommand(); break;
        case 56: _t->addCommentCommand(); break;
        case 57: _t->addPointPrev(); break;
        case 58: _t->addPointNext(); break;
        case 59: _t->programTreeSelectChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 60: _t->jump2StructPage(); break;
        case 61: _t->setNoSet(); break;
        case 62: _t->setDigitalOutput(); break;
        case 63: _t->setDigitalOutputFx(); break;
        case 64: _t->setAnalogOutput(); break;
        case 65: _t->setAnalogOutputFx(); break;
        case 66: _t->setVar(); break;
        case 67: _t->setLoad(); break;
        case 68: _t->setTool(); break;
        case 69: _t->setDigitalOutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 70: _t->setDigitalOutLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 71: _t->setDigitalOutFxCombChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: _t->setDigitalOutFxChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 73: _t->setAnalogOutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 74: _t->setAnalogOutLevelChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 75: _t->setAnalogOutFxCombChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 76: _t->setAnalogOutFxChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 77: _t->setVarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 78: _t->setVarFxChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 79: _t->setLoadChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 80: _t->setToolChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 81: _t->programNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindowProgram::staticMetaObject = {
    { &MainWindowBase::staticMetaObject, qt_meta_stringdata_MainWindowProgram.data,
      qt_meta_data_MainWindowProgram,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindowProgram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindowProgram::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowProgram.stringdata0))
        return static_cast<void*>(this);
    return MainWindowBase::qt_metacast(_clname);
}

int MainWindowProgram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindowBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 82)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 82;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 82)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 82;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

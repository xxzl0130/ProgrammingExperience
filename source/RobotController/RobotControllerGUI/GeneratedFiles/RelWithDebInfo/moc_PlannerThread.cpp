/****************************************************************************
** Meta object code from reading C++ file 'PlannerThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "commonHeader.h"
#include "../../PlannerThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlannerThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlannerThread_t {
    QByteArrayData data[48];
    char stringdata0[624];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlannerThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlannerThread_t qt_meta_stringdata_PlannerThread = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PlannerThread"
QT_MOC_LITERAL(1, 14, 22), // "configurationRequested"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "rl::math::Vector"
QT_MOC_LITERAL(4, 55, 1), // "q"
QT_MOC_LITERAL(5, 57, 26), // "configurationEdgeRequested"
QT_MOC_LITERAL(6, 84, 2), // "q0"
QT_MOC_LITERAL(7, 87, 2), // "q1"
QT_MOC_LITERAL(8, 90, 4), // "free"
QT_MOC_LITERAL(9, 95, 28), // "configurationVertexRequested"
QT_MOC_LITERAL(10, 124, 26), // "configurationPathRequested"
QT_MOC_LITERAL(11, 151, 20), // "rl::plan::VectorList"
QT_MOC_LITERAL(12, 172, 4), // "path"
QT_MOC_LITERAL(13, 177, 18), // "edgeResetRequested"
QT_MOC_LITERAL(14, 196, 13), // "lineRequested"
QT_MOC_LITERAL(15, 210, 4), // "xyz0"
QT_MOC_LITERAL(16, 215, 4), // "xyz1"
QT_MOC_LITERAL(17, 220, 18), // "lineResetRequested"
QT_MOC_LITERAL(18, 239, 16), // "messageRequested"
QT_MOC_LITERAL(19, 256, 11), // "std::string"
QT_MOC_LITERAL(20, 268, 7), // "message"
QT_MOC_LITERAL(21, 276, 14), // "pointRequested"
QT_MOC_LITERAL(22, 291, 3), // "xyz"
QT_MOC_LITERAL(23, 295, 19), // "pointResetRequested"
QT_MOC_LITERAL(24, 315, 14), // "resetRequested"
QT_MOC_LITERAL(25, 330, 15), // "sphereRequested"
QT_MOC_LITERAL(26, 346, 6), // "center"
QT_MOC_LITERAL(27, 353, 14), // "rl::math::Real"
QT_MOC_LITERAL(28, 368, 6), // "radius"
QT_MOC_LITERAL(29, 375, 20), // "sphereResetRequested"
QT_MOC_LITERAL(30, 396, 20), // "sweptVolumeRequested"
QT_MOC_LITERAL(31, 417, 20), // "vertexResetRequested"
QT_MOC_LITERAL(32, 438, 13), // "workRequested"
QT_MOC_LITERAL(33, 452, 19), // "rl::math::Transform"
QT_MOC_LITERAL(34, 472, 1), // "t"
QT_MOC_LITERAL(35, 474, 17), // "workEdgeRequested"
QT_MOC_LITERAL(36, 492, 17), // "workPathRequested"
QT_MOC_LITERAL(37, 510, 19), // "workVertexRequested"
QT_MOC_LITERAL(38, 530, 15), // "positionChanged"
QT_MOC_LITERAL(39, 546, 7), // "refresh"
QT_MOC_LITERAL(40, 554, 8), // "sendPath"
QT_MOC_LITERAL(41, 563, 11), // "sendPathVel"
QT_MOC_LITERAL(42, 575, 10), // "sendResult"
QT_MOC_LITERAL(43, 586, 3), // "res"
QT_MOC_LITERAL(44, 590, 17), // "errorBoxRequested"
QT_MOC_LITERAL(45, 608, 4), // "text"
QT_MOC_LITERAL(46, 613, 4), // "info"
QT_MOC_LITERAL(47, 618, 5) // "title"

    },
    "PlannerThread\0configurationRequested\0"
    "\0rl::math::Vector\0q\0configurationEdgeRequested\0"
    "q0\0q1\0free\0configurationVertexRequested\0"
    "configurationPathRequested\0"
    "rl::plan::VectorList\0path\0edgeResetRequested\0"
    "lineRequested\0xyz0\0xyz1\0lineResetRequested\0"
    "messageRequested\0std::string\0message\0"
    "pointRequested\0xyz\0pointResetRequested\0"
    "resetRequested\0sphereRequested\0center\0"
    "rl::math::Real\0radius\0sphereResetRequested\0"
    "sweptVolumeRequested\0vertexResetRequested\0"
    "workRequested\0rl::math::Transform\0t\0"
    "workEdgeRequested\0workPathRequested\0"
    "workVertexRequested\0positionChanged\0"
    "refresh\0sendPath\0sendPathVel\0sendResult\0"
    "res\0errorBoxRequested\0text\0info\0title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlannerThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      26,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       5,    3,  147,    2, 0x06 /* Public */,
       9,    2,  154,    2, 0x06 /* Public */,
      10,    1,  159,    2, 0x06 /* Public */,
      13,    0,  162,    2, 0x06 /* Public */,
      14,    2,  163,    2, 0x06 /* Public */,
      17,    0,  168,    2, 0x06 /* Public */,
      18,    1,  169,    2, 0x06 /* Public */,
      21,    1,  172,    2, 0x06 /* Public */,
      23,    0,  175,    2, 0x06 /* Public */,
      24,    0,  176,    2, 0x06 /* Public */,
      25,    2,  177,    2, 0x06 /* Public */,
      29,    0,  182,    2, 0x06 /* Public */,
      30,    1,  183,    2, 0x06 /* Public */,
      31,    0,  186,    2, 0x06 /* Public */,
      32,    1,  187,    2, 0x06 /* Public */,
      35,    2,  190,    2, 0x06 /* Public */,
      36,    1,  195,    2, 0x06 /* Public */,
      37,    1,  198,    2, 0x06 /* Public */,
      38,    2,  201,    2, 0x06 /* Public */,
      40,    1,  206,    2, 0x06 /* Public */,
      41,    1,  209,    2, 0x06 /* Public */,
      42,    1,  212,    2, 0x06 /* Public */,
      44,    3,  215,    2, 0x06 /* Public */,
      44,    2,  222,    2, 0x26 /* Public | MethodCloned */,
      44,    1,  227,    2, 0x26 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Bool,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    8,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   15,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 3,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 27,   26,   28,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    6,    7,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   39,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   45,   46,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   45,   46,
    QMetaType::Void, QMetaType::QString,   45,

       0        // eod
};

void PlannerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlannerThread *_t = static_cast<PlannerThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configurationRequested((*reinterpret_cast< const rl::math::Vector(*)>(_a[1]))); break;
        case 1: _t->configurationEdgeRequested((*reinterpret_cast< const rl::math::Vector(*)>(_a[1])),(*reinterpret_cast< const rl::math::Vector(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 2: _t->configurationVertexRequested((*reinterpret_cast< const rl::math::Vector(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 3: _t->configurationPathRequested((*reinterpret_cast< const rl::plan::VectorList(*)>(_a[1]))); break;
        case 4: _t->edgeResetRequested(); break;
        case 5: _t->lineRequested((*reinterpret_cast< const rl::math::Vector(*)>(_a[1])),(*reinterpret_cast< const rl::math::Vector(*)>(_a[2]))); break;
        case 6: _t->lineResetRequested(); break;
        case 7: _t->messageRequested((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 8: _t->pointRequested((*reinterpret_cast< const rl::math::Vector(*)>(_a[1]))); break;
        case 9: _t->pointResetRequested(); break;
        case 10: _t->resetRequested(); break;
        case 11: _t->sphereRequested((*reinterpret_cast< const rl::math::Vector(*)>(_a[1])),(*reinterpret_cast< const rl::math::Real(*)>(_a[2]))); break;
        case 12: _t->sphereResetRequested(); break;
        case 13: _t->sweptVolumeRequested((*reinterpret_cast< const rl::plan::VectorList(*)>(_a[1]))); break;
        case 14: _t->vertexResetRequested(); break;
        case 15: _t->workRequested((*reinterpret_cast< const rl::math::Transform(*)>(_a[1]))); break;
        case 16: _t->workEdgeRequested((*reinterpret_cast< const rl::math::Vector(*)>(_a[1])),(*reinterpret_cast< const rl::math::Vector(*)>(_a[2]))); break;
        case 17: _t->workPathRequested((*reinterpret_cast< const rl::plan::VectorList(*)>(_a[1]))); break;
        case 18: _t->workVertexRequested((*reinterpret_cast< const rl::math::Vector(*)>(_a[1]))); break;
        case 19: _t->positionChanged((*reinterpret_cast< const rl::math::Vector(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->sendPath((*reinterpret_cast< const rl::plan::VectorList(*)>(_a[1]))); break;
        case 21: _t->sendPathVel((*reinterpret_cast< const rl::plan::VectorList(*)>(_a[1]))); break;
        case 22: _t->sendResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->errorBoxRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 24: _t->errorBoxRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 25: _t->errorBoxRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlannerThread::*)(const rl::math::Vector & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::configurationRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const rl::math::Vector & , const rl::math::Vector & , const bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::configurationEdgeRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const rl::math::Vector & , const bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::configurationVertexRequested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const rl::plan::VectorList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::configurationPathRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::edgeResetRequested)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const rl::math::Vector & , const rl::math::Vector & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::lineRequested)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::lineResetRequested)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::messageRequested)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const rl::math::Vector & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::pointRequested)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::pointResetRequested)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::resetRequested)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const rl::math::Vector & , const rl::math::Real & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::sphereRequested)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::sphereResetRequested)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const rl::plan::VectorList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::sweptVolumeRequested)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::vertexResetRequested)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const rl::math::Transform & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::workRequested)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const rl::math::Vector & , const rl::math::Vector & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::workEdgeRequested)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const rl::plan::VectorList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::workPathRequested)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const rl::math::Vector & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::workVertexRequested)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const rl::math::Vector & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::positionChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const rl::plan::VectorList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::sendPath)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const rl::plan::VectorList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::sendPathVel)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::sendResult)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (PlannerThread::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlannerThread::errorBoxRequested)) {
                *result = 23;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlannerThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_PlannerThread.data,
      qt_meta_data_PlannerThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlannerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlannerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlannerThread.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "rl::plan::Viewer"))
        return static_cast< rl::plan::Viewer*>(this);
    return QThread::qt_metacast(_clname);
}

int PlannerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void PlannerThread::configurationRequested(const rl::math::Vector & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlannerThread::configurationEdgeRequested(const rl::math::Vector & _t1, const rl::math::Vector & _t2, const bool & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlannerThread::configurationVertexRequested(const rl::math::Vector & _t1, const bool & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlannerThread::configurationPathRequested(const rl::plan::VectorList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlannerThread::edgeResetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlannerThread::lineRequested(const rl::math::Vector & _t1, const rl::math::Vector & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlannerThread::lineResetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PlannerThread::messageRequested(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PlannerThread::pointRequested(const rl::math::Vector & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PlannerThread::pointResetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void PlannerThread::resetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void PlannerThread::sphereRequested(const rl::math::Vector & _t1, const rl::math::Real & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PlannerThread::sphereResetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void PlannerThread::sweptVolumeRequested(const rl::plan::VectorList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void PlannerThread::vertexResetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void PlannerThread::workRequested(const rl::math::Transform & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void PlannerThread::workEdgeRequested(const rl::math::Vector & _t1, const rl::math::Vector & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void PlannerThread::workPathRequested(const rl::plan::VectorList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void PlannerThread::workVertexRequested(const rl::math::Vector & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void PlannerThread::positionChanged(const rl::math::Vector & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void PlannerThread::sendPath(const rl::plan::VectorList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void PlannerThread::sendPathVel(const rl::plan::VectorList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void PlannerThread::sendResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void PlannerThread::errorBoxRequested(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'SimulateThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "commonHeader.h"
#include "../../SimulateThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimulateThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SimulateThread_t {
    QByteArrayData data[19];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimulateThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimulateThread_t qt_meta_stringdata_SimulateThread = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SimulateThread"
QT_MOC_LITERAL(1, 15, 6), // "finish"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "showMessage"
QT_MOC_LITERAL(4, 35, 3), // "msg"
QT_MOC_LITERAL(5, 39, 17), // "errorBoxRequested"
QT_MOC_LITERAL(6, 57, 4), // "text"
QT_MOC_LITERAL(7, 62, 4), // "info"
QT_MOC_LITERAL(8, 67, 5), // "title"
QT_MOC_LITERAL(9, 73, 16), // "infoBoxRequested"
QT_MOC_LITERAL(10, 90, 19), // "warningBoxRequested"
QT_MOC_LITERAL(11, 110, 22), // "configurationRequested"
QT_MOC_LITERAL(12, 133, 16), // "rl::math::Vector"
QT_MOC_LITERAL(13, 150, 1), // "q"
QT_MOC_LITERAL(14, 152, 14), // "pointRequested"
QT_MOC_LITERAL(15, 167, 3), // "xyz"
QT_MOC_LITERAL(16, 171, 26), // "configurationPathRequested"
QT_MOC_LITERAL(17, 198, 20), // "rl::plan::VectorList"
QT_MOC_LITERAL(18, 219, 4) // "path"

    },
    "SimulateThread\0finish\0\0showMessage\0"
    "msg\0errorBoxRequested\0text\0info\0title\0"
    "infoBoxRequested\0warningBoxRequested\0"
    "configurationRequested\0rl::math::Vector\0"
    "q\0pointRequested\0xyz\0configurationPathRequested\0"
    "rl::plan::VectorList\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimulateThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,
       5,    3,   88,    2, 0x06 /* Public */,
       5,    2,   95,    2, 0x26 /* Public | MethodCloned */,
       5,    1,  100,    2, 0x26 /* Public | MethodCloned */,
       9,    3,  103,    2, 0x06 /* Public */,
       9,    2,  110,    2, 0x26 /* Public | MethodCloned */,
       9,    1,  115,    2, 0x26 /* Public | MethodCloned */,
      10,    3,  118,    2, 0x06 /* Public */,
      10,    2,  125,    2, 0x26 /* Public | MethodCloned */,
      10,    1,  130,    2, 0x26 /* Public | MethodCloned */,
      11,    1,  133,    2, 0x06 /* Public */,
      14,    1,  136,    2, 0x06 /* Public */,
      16,    1,  139,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   15,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void SimulateThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SimulateThread *_t = static_cast<SimulateThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finish(); break;
        case 1: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->errorBoxRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->errorBoxRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->errorBoxRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->infoBoxRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->infoBoxRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->infoBoxRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->warningBoxRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 9: _t->warningBoxRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->warningBoxRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->configurationRequested((*reinterpret_cast< const rl::math::Vector(*)>(_a[1]))); break;
        case 12: _t->pointRequested((*reinterpret_cast< const rl::math::Vector(*)>(_a[1]))); break;
        case 13: _t->configurationPathRequested((*reinterpret_cast< const rl::plan::VectorList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SimulateThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimulateThread::finish)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SimulateThread::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimulateThread::showMessage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SimulateThread::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimulateThread::errorBoxRequested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SimulateThread::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimulateThread::infoBoxRequested)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SimulateThread::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimulateThread::warningBoxRequested)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SimulateThread::*)(const rl::math::Vector & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimulateThread::configurationRequested)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (SimulateThread::*)(const rl::math::Vector & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimulateThread::pointRequested)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (SimulateThread::*)(const rl::plan::VectorList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimulateThread::configurationPathRequested)) {
                *result = 13;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SimulateThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SimulateThread.data,
      qt_meta_data_SimulateThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SimulateThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimulateThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimulateThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int SimulateThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SimulateThread::finish()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SimulateThread::showMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SimulateThread::errorBoxRequested(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 5
void SimulateThread::infoBoxRequested(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 8
void SimulateThread::warningBoxRequested(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 11
void SimulateThread::configurationRequested(const rl::math::Vector & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void SimulateThread::pointRequested(const rl::math::Vector & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void SimulateThread::configurationPathRequested(const rl::plan::VectorList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

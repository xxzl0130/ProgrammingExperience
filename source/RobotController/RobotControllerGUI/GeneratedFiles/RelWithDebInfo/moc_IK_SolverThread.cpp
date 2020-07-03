/****************************************************************************
** Meta object code from reading C++ file 'IK_SolverThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "commonHeader.h"
#include "../../IK_SolverThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IK_SolverThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IK_SolverThread_t {
    QByteArrayData data[8];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IK_SolverThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IK_SolverThread_t qt_meta_stringdata_IK_SolverThread = {
    {
QT_MOC_LITERAL(0, 0, 15), // "IK_SolverThread"
QT_MOC_LITERAL(1, 16, 13), // "ikSolveFinish"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "res"
QT_MOC_LITERAL(4, 35, 17), // "errorBoxRequested"
QT_MOC_LITERAL(5, 53, 4), // "text"
QT_MOC_LITERAL(6, 58, 4), // "info"
QT_MOC_LITERAL(7, 63, 5) // "title"

    },
    "IK_SolverThread\0ikSolveFinish\0\0res\0"
    "errorBoxRequested\0text\0info\0title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IK_SolverThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    3,   37,    2, 0x06 /* Public */,
       4,    2,   44,    2, 0x26 /* Public | MethodCloned */,
       4,    1,   49,    2, 0x26 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void IK_SolverThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IK_SolverThread *_t = static_cast<IK_SolverThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ikSolveFinish((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->errorBoxRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->errorBoxRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->errorBoxRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IK_SolverThread::*)(const bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IK_SolverThread::ikSolveFinish)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IK_SolverThread::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IK_SolverThread::errorBoxRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IK_SolverThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_IK_SolverThread.data,
      qt_meta_data_IK_SolverThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *IK_SolverThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IK_SolverThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IK_SolverThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int IK_SolverThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void IK_SolverThread::ikSolveFinish(const bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IK_SolverThread::errorBoxRequested(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

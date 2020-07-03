/****************************************************************************
** Meta object code from reading C++ file 'CommunicationThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "commonHeader.h"
#include "../../CommunicationThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommunicationThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommunicationThread_t {
    QByteArrayData data[24];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommunicationThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommunicationThread_t qt_meta_stringdata_CommunicationThread = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CommunicationThread"
QT_MOC_LITERAL(1, 20, 16), // "messageRequested"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "std::string"
QT_MOC_LITERAL(4, 50, 7), // "message"
QT_MOC_LITERAL(5, 58, 19), // "setOfflineRequested"
QT_MOC_LITERAL(6, 78, 22), // "configurationRequested"
QT_MOC_LITERAL(7, 101, 16), // "rl::math::Vector"
QT_MOC_LITERAL(8, 118, 1), // "q"
QT_MOC_LITERAL(9, 120, 17), // "errorBoxRequested"
QT_MOC_LITERAL(10, 138, 4), // "text"
QT_MOC_LITERAL(11, 143, 4), // "info"
QT_MOC_LITERAL(12, 148, 5), // "title"
QT_MOC_LITERAL(13, 154, 17), // "receiveRemoteAddr"
QT_MOC_LITERAL(14, 172, 7), // "AmsAddr"
QT_MOC_LITERAL(15, 180, 4), // "addr"
QT_MOC_LITERAL(16, 185, 15), // "flashRemoteData"
QT_MOC_LITERAL(17, 201, 11), // "send2Remote"
QT_MOC_LITERAL(18, 213, 10), // "groupIndex"
QT_MOC_LITERAL(19, 224, 11), // "groupOffset"
QT_MOC_LITERAL(20, 236, 5), // "pData"
QT_MOC_LITERAL(21, 242, 6), // "size_t"
QT_MOC_LITERAL(22, 249, 4), // "size"
QT_MOC_LITERAL(23, 254, 11) // "startThread"

    },
    "CommunicationThread\0messageRequested\0"
    "\0std::string\0message\0setOfflineRequested\0"
    "configurationRequested\0rl::math::Vector\0"
    "q\0errorBoxRequested\0text\0info\0title\0"
    "receiveRemoteAddr\0AmsAddr\0addr\0"
    "flashRemoteData\0send2Remote\0groupIndex\0"
    "groupOffset\0pData\0size_t\0size\0startThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommunicationThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    1,   68,    2, 0x06 /* Public */,
       9,    3,   71,    2, 0x06 /* Public */,
       9,    2,   78,    2, 0x26 /* Public | MethodCloned */,
       9,    1,   83,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   86,    2, 0x0a /* Public */,
      16,    0,   89,    2, 0x0a /* Public */,
      17,    4,   90,    2, 0x0a /* Public */,
      23,    0,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   10,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULong, QMetaType::ULong, QMetaType::VoidStar, 0x80000000 | 21,   18,   19,   20,   22,
    QMetaType::Void,

       0        // eod
};

void CommunicationThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CommunicationThread *_t = static_cast<CommunicationThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageRequested((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->setOfflineRequested(); break;
        case 2: _t->configurationRequested((*reinterpret_cast< const rl::math::Vector(*)>(_a[1]))); break;
        case 3: _t->errorBoxRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->errorBoxRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->errorBoxRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->receiveRemoteAddr((*reinterpret_cast< const AmsAddr(*)>(_a[1]))); break;
        case 7: _t->flashRemoteData(); break;
        case 8: _t->send2Remote((*reinterpret_cast< ulong(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< size_t(*)>(_a[4]))); break;
        case 9: _t->startThread(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CommunicationThread::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommunicationThread::messageRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CommunicationThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommunicationThread::setOfflineRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CommunicationThread::*)(const rl::math::Vector & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommunicationThread::configurationRequested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CommunicationThread::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommunicationThread::errorBoxRequested)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CommunicationThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CommunicationThread.data,
      qt_meta_data_CommunicationThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CommunicationThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommunicationThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommunicationThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int CommunicationThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void CommunicationThread::messageRequested(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CommunicationThread::setOfflineRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CommunicationThread::configurationRequested(const rl::math::Vector & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CommunicationThread::errorBoxRequested(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

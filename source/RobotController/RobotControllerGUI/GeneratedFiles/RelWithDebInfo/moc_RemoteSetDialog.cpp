/****************************************************************************
** Meta object code from reading C++ file 'RemoteSetDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "commonHeader.h"
#include "../../RemoteSetDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RemoteSetDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RemoteSetDialog_t {
    QByteArrayData data[12];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoteSetDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoteSetDialog_t qt_meta_stringdata_RemoteSetDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RemoteSetDialog"
QT_MOC_LITERAL(1, 16, 11), // "sendAmsAddr"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "AmsAddr"
QT_MOC_LITERAL(4, 37, 13), // "sendFlashTime"
QT_MOC_LITERAL(5, 51, 6), // "accept"
QT_MOC_LITERAL(6, 58, 6), // "reject"
QT_MOC_LITERAL(7, 65, 7), // "setAddr"
QT_MOC_LITERAL(8, 73, 17), // "receiveRemoteAddr"
QT_MOC_LITERAL(9, 91, 4), // "addr"
QT_MOC_LITERAL(10, 96, 16), // "receiveFlashTime"
QT_MOC_LITERAL(11, 113, 4) // "time"

    },
    "RemoteSetDialog\0sendAmsAddr\0\0AmsAddr\0"
    "sendFlashTime\0accept\0reject\0setAddr\0"
    "receiveRemoteAddr\0addr\0receiveFlashTime\0"
    "time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoteSetDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   55,    2, 0x0a /* Public */,
       6,    0,   56,    2, 0x0a /* Public */,
       7,    0,   57,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x0a /* Public */,
      10,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void RemoteSetDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RemoteSetDialog *_t = static_cast<RemoteSetDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendAmsAddr((*reinterpret_cast< const AmsAddr(*)>(_a[1]))); break;
        case 1: _t->sendFlashTime((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->accept(); break;
        case 3: _t->reject(); break;
        case 4: _t->setAddr(); break;
        case 5: _t->receiveRemoteAddr((*reinterpret_cast< const AmsAddr(*)>(_a[1]))); break;
        case 6: _t->receiveFlashTime((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RemoteSetDialog::*)(const AmsAddr & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteSetDialog::sendAmsAddr)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RemoteSetDialog::*)(const int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteSetDialog::sendFlashTime)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RemoteSetDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RemoteSetDialog.data,
      qt_meta_data_RemoteSetDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RemoteSetDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteSetDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteSetDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RemoteSetDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void RemoteSetDialog::sendAmsAddr(const AmsAddr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RemoteSetDialog::sendFlashTime(const int & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

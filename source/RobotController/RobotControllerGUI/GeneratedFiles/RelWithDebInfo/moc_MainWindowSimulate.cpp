/****************************************************************************
** Meta object code from reading C++ file 'MainWindowSimulate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "commonHeader.h"
#include "../../MainWindowSimulate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindowSimulate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindowSimulate_t {
    QByteArrayData data[8];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindowSimulate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindowSimulate_t qt_meta_stringdata_MainWindowSimulate = {
    {
QT_MOC_LITERAL(0, 0, 18), // "MainWindowSimulate"
QT_MOC_LITERAL(1, 19, 10), // "programRun"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "programPause"
QT_MOC_LITERAL(4, 44, 11), // "programStop"
QT_MOC_LITERAL(5, 56, 13), // "compileFinish"
QT_MOC_LITERAL(6, 70, 2), // "ok"
QT_MOC_LITERAL(7, 73, 4) // "test"

    },
    "MainWindowSimulate\0programRun\0\0"
    "programPause\0programStop\0compileFinish\0"
    "ok\0test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindowSimulate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    1,   42,    2, 0x09 /* Protected */,
       7,    0,   45,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

       0        // eod
};

void MainWindowSimulate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindowSimulate *_t = static_cast<MainWindowSimulate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->programRun(); break;
        case 1: _t->programPause(); break;
        case 2: _t->programStop(); break;
        case 3: _t->compileFinish((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->test(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindowSimulate::staticMetaObject = {
    { &MainWindowProgram::staticMetaObject, qt_meta_stringdata_MainWindowSimulate.data,
      qt_meta_data_MainWindowSimulate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindowSimulate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindowSimulate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowSimulate.stringdata0))
        return static_cast<void*>(this);
    return MainWindowProgram::qt_metacast(_clname);
}

int MainWindowSimulate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindowProgram::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'projectcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TrekStar/projectcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_projectcontroller_t {
    QByteArrayData data[12];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_projectcontroller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_projectcontroller_t qt_meta_stringdata_projectcontroller = {
    {
QT_MOC_LITERAL(0, 0, 17), // "projectcontroller"
QT_MOC_LITERAL(1, 18, 13), // "createProject"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "clearForm"
QT_MOC_LITERAL(4, 43, 10), // "saveToFile"
QT_MOC_LITERAL(5, 54, 11), // "openProject"
QT_MOC_LITERAL(6, 66, 13), // "projectWindow"
QT_MOC_LITERAL(7, 80, 14), // "openProjWindow"
QT_MOC_LITERAL(8, 95, 16), // "projDetailWindow"
QT_MOC_LITERAL(9, 112, 6), // "npBack"
QT_MOC_LITERAL(10, 119, 6), // "opBack"
QT_MOC_LITERAL(11, 126, 6) // "pdBack"

    },
    "projectcontroller\0createProject\0\0"
    "clearForm\0saveToFile\0openProject\0"
    "projectWindow\0openProjWindow\0"
    "projDetailWindow\0npBack\0opBack\0pdBack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_projectcontroller[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
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

       0        // eod
};

void projectcontroller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        projectcontroller *_t = static_cast<projectcontroller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createProject(); break;
        case 1: _t->clearForm(); break;
        case 2: _t->saveToFile(); break;
        case 3: _t->openProject(); break;
        case 4: _t->projectWindow(); break;
        case 5: _t->openProjWindow(); break;
        case 6: _t->projDetailWindow(); break;
        case 7: _t->npBack(); break;
        case 8: _t->opBack(); break;
        case 9: _t->pdBack(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject projectcontroller::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_projectcontroller.data,
    qt_meta_data_projectcontroller,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *projectcontroller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *projectcontroller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_projectcontroller.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int projectcontroller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

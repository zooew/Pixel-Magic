/****************************************************************************
** Meta object code from reading C++ file 'pixel_magic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pixel_magic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pixel_magic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_pixel_magic_t {
    QByteArrayData data[9];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pixel_magic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pixel_magic_t qt_meta_stringdata_pixel_magic = {
    {
QT_MOC_LITERAL(0, 0, 11), // "pixel_magic"
QT_MOC_LITERAL(1, 12, 12), // "load_picture"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "save_picture"
QT_MOC_LITERAL(4, 39, 14), // "rotate_picture"
QT_MOC_LITERAL(5, 54, 17), // "h_reverse_picture"
QT_MOC_LITERAL(6, 72, 17), // "v_reverse_picture"
QT_MOC_LITERAL(7, 90, 17), // "rect_clip_picture"
QT_MOC_LITERAL(8, 108, 18) // "round_clip_picture"

    },
    "pixel_magic\0load_picture\0\0save_picture\0"
    "rotate_picture\0h_reverse_picture\0"
    "v_reverse_picture\0rect_clip_picture\0"
    "round_clip_picture"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pixel_magic[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pixel_magic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pixel_magic *_t = static_cast<pixel_magic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->load_picture(); break;
        case 1: _t->save_picture(); break;
        case 2: _t->rotate_picture(); break;
        case 3: _t->h_reverse_picture(); break;
        case 4: _t->v_reverse_picture(); break;
        case 5: _t->rect_clip_picture(); break;
        case 6: _t->round_clip_picture(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject pixel_magic::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_pixel_magic.data,
      qt_meta_data_pixel_magic,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *pixel_magic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pixel_magic::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_pixel_magic.stringdata0))
        return static_cast<void*>(const_cast< pixel_magic*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int pixel_magic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE

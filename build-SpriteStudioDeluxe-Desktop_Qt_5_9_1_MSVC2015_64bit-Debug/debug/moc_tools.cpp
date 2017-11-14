/****************************************************************************
** Meta object code from reading C++ file 'tools.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SpriteStudioDeluxe/tools.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tools.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tools_t {
    QByteArrayData data[14];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tools_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tools_t qt_meta_stringdata_Tools = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Tools"
QT_MOC_LITERAL(1, 6, 10), // "update_can"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "QImage*"
QT_MOC_LITERAL(4, 26, 13), // "tool_selected"
QT_MOC_LITERAL(5, 40, 18), // "brush_size_changed"
QT_MOC_LITERAL(6, 59, 13), // "frame_changed"
QT_MOC_LITERAL(7, 73, 6), // "Frame*"
QT_MOC_LITERAL(8, 80, 13), // "on_mouse_down"
QT_MOC_LITERAL(9, 94, 13), // "on_mouse_drag"
QT_MOC_LITERAL(10, 108, 11), // "on_mouse_up"
QT_MOC_LITERAL(11, 120, 12), // "change_color"
QT_MOC_LITERAL(12, 133, 12), // "clear_canvas"
QT_MOC_LITERAL(13, 146, 11) // "fill_canvas"

    },
    "Tools\0update_can\0\0QImage*\0tool_selected\0"
    "brush_size_changed\0frame_changed\0"
    "Frame*\0on_mouse_down\0on_mouse_drag\0"
    "on_mouse_up\0change_color\0clear_canvas\0"
    "fill_canvas"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tools[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   67,    2, 0x0a /* Public */,
       5,    1,   70,    2, 0x0a /* Public */,
       6,    1,   73,    2, 0x0a /* Public */,
       8,    2,   76,    2, 0x0a /* Public */,
       9,    2,   81,    2, 0x0a /* Public */,
      10,    2,   86,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Tools::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tools *_t = static_cast<Tools *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update_can((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 1: _t->tool_selected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->brush_size_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->frame_changed((*reinterpret_cast< Frame*(*)>(_a[1]))); break;
        case 4: _t->on_mouse_down((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_mouse_drag((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->on_mouse_up((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->change_color((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 8: _t->clear_canvas(); break;
        case 9: _t->fill_canvas(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Tools::*_t)(QImage * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tools::update_can)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Tools::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tools.data,
      qt_meta_data_Tools,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Tools::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tools::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tools.stringdata0))
        return static_cast<void*>(const_cast< Tools*>(this));
    return QObject::qt_metacast(_clname);
}

int Tools::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Tools::update_can(QImage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'previewobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../previewobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PreviewObject_t {
    QByteArrayData data[8];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreviewObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreviewObject_t qt_meta_stringdata_PreviewObject = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PreviewObject"
QT_MOC_LITERAL(1, 14, 10), // "thread_end"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "QImage*"
QT_MOC_LITERAL(4, 34, 5), // "image"
QT_MOC_LITERAL(5, 40, 12), // "thread_start"
QT_MOC_LITERAL(6, 53, 9), // "set_speed"
QT_MOC_LITERAL(7, 63, 3) // "fps"

    },
    "PreviewObject\0thread_end\0\0QImage*\0"
    "image\0thread_start\0set_speed\0fps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreviewObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x0a /* Public */,
       6,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void PreviewObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreviewObject *_t = static_cast<PreviewObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->thread_end((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 1: _t->thread_start(); break;
        case 2: _t->set_speed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PreviewObject::*_t)(QImage * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreviewObject::thread_end)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PreviewObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PreviewObject.data,
      qt_meta_data_PreviewObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PreviewObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreviewObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewObject.stringdata0))
        return static_cast<void*>(const_cast< PreviewObject*>(this));
    return QObject::qt_metacast(_clname);
}

int PreviewObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PreviewObject::thread_end(QImage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

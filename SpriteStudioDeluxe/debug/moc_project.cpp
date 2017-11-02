/****************************************************************************
** Meta object code from reading C++ file 'project.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../project.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'project.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Project_t {
    QByteArrayData data[20];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Project_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Project_t qt_meta_stringdata_Project = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Project"
QT_MOC_LITERAL(1, 8, 11), // "send_update"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "image"
QT_MOC_LITERAL(4, 27, 15), // "send_all_frames"
QT_MOC_LITERAL(5, 43, 20), // "std::vector<QPixmap>"
QT_MOC_LITERAL(6, 64, 6), // "images"
QT_MOC_LITERAL(7, 71, 9), // "add_frame"
QT_MOC_LITERAL(8, 81, 1), // "x"
QT_MOC_LITERAL(9, 83, 1), // "y"
QT_MOC_LITERAL(10, 85, 13), // "update_canvas"
QT_MOC_LITERAL(11, 99, 10), // "next_frame"
QT_MOC_LITERAL(12, 110, 14), // "previous_frame"
QT_MOC_LITERAL(13, 125, 11), // "swap_frames"
QT_MOC_LITERAL(14, 137, 6), // "frame1"
QT_MOC_LITERAL(15, 144, 6), // "frame2"
QT_MOC_LITERAL(16, 151, 14), // "get_all_frames"
QT_MOC_LITERAL(17, 166, 12), // "save_project"
QT_MOC_LITERAL(18, 179, 8), // "filename"
QT_MOC_LITERAL(19, 188, 12) // "load_project"

    },
    "Project\0send_update\0\0image\0send_all_frames\0"
    "std::vector<QPixmap>\0images\0add_frame\0"
    "x\0y\0update_canvas\0next_frame\0"
    "previous_frame\0swap_frames\0frame1\0"
    "frame2\0get_all_frames\0save_project\0"
    "filename\0load_project"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Project[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   70,    2, 0x0a /* Public */,
      10,    0,   75,    2, 0x0a /* Public */,
      11,    0,   76,    2, 0x0a /* Public */,
      12,    0,   77,    2, 0x0a /* Public */,
      13,    2,   78,    2, 0x0a /* Public */,
      16,    0,   83,    2, 0x0a /* Public */,
      17,    1,   84,    2, 0x0a /* Public */,
      19,    1,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void Project::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Project *_t = static_cast<Project *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_update((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 1: _t->send_all_frames((*reinterpret_cast< std::vector<QPixmap>(*)>(_a[1]))); break;
        case 2: _t->add_frame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->update_canvas(); break;
        case 4: _t->next_frame(); break;
        case 5: _t->previous_frame(); break;
        case 6: _t->swap_frames((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->get_all_frames(); break;
        case 8: _t->save_project((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->load_project((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Project::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Project::send_update)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Project::*_t)(std::vector<QPixmap> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Project::send_all_frames)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Project::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Project.data,
      qt_meta_data_Project,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Project::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Project::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Project.stringdata0))
        return static_cast<void*>(const_cast< Project*>(this));
    return QObject::qt_metacast(_clname);
}

int Project::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Project::send_update(QPixmap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Project::send_all_frames(std::vector<QPixmap> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

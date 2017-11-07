/****************************************************************************
** Meta object code from reading C++ file 'project.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SpriteStudioDeluxe/project.h"
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
    QByteArrayData data[27];
    char stringdata0[272];
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
QT_MOC_LITERAL(3, 21, 7), // "QImage*"
QT_MOC_LITERAL(4, 29, 5), // "image"
QT_MOC_LITERAL(5, 35, 15), // "send_all_frames"
QT_MOC_LITERAL(6, 51, 20), // "std::vector<QPixmap>"
QT_MOC_LITERAL(7, 72, 6), // "images"
QT_MOC_LITERAL(8, 79, 18), // "update_frame_label"
QT_MOC_LITERAL(9, 98, 7), // "current"
QT_MOC_LITERAL(10, 106, 5), // "total"
QT_MOC_LITERAL(11, 112, 13), // "update_canvas"
QT_MOC_LITERAL(12, 126, 14), // "mouse_down_pos"
QT_MOC_LITERAL(13, 141, 1), // "x"
QT_MOC_LITERAL(14, 143, 1), // "y"
QT_MOC_LITERAL(15, 145, 12), // "change_color"
QT_MOC_LITERAL(16, 158, 1), // "c"
QT_MOC_LITERAL(17, 160, 9), // "add_frame"
QT_MOC_LITERAL(18, 170, 10), // "next_frame"
QT_MOC_LITERAL(19, 181, 14), // "previous_frame"
QT_MOC_LITERAL(20, 196, 11), // "swap_frames"
QT_MOC_LITERAL(21, 208, 6), // "frame1"
QT_MOC_LITERAL(22, 215, 6), // "frame2"
QT_MOC_LITERAL(23, 222, 14), // "get_all_frames"
QT_MOC_LITERAL(24, 237, 12), // "save_project"
QT_MOC_LITERAL(25, 250, 8), // "filename"
QT_MOC_LITERAL(26, 259, 12) // "load_project"

    },
    "Project\0send_update\0\0QImage*\0image\0"
    "send_all_frames\0std::vector<QPixmap>\0"
    "images\0update_frame_label\0current\0"
    "total\0update_canvas\0mouse_down_pos\0x\0"
    "y\0change_color\0c\0add_frame\0next_frame\0"
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
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       8,    2,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   90,    2, 0x0a /* Public */,
      12,    2,   91,    2, 0x0a /* Public */,
      15,    1,   96,    2, 0x0a /* Public */,
      17,    0,   99,    2, 0x0a /* Public */,
      18,    0,  100,    2, 0x0a /* Public */,
      19,    0,  101,    2, 0x0a /* Public */,
      20,    2,  102,    2, 0x0a /* Public */,
      23,    0,  107,    2, 0x0a /* Public */,
      24,    1,  108,    2, 0x0a /* Public */,
      26,    1,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    QMetaType::Void, QMetaType::QColor,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   21,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString,   25,

       0        // eod
};

void Project::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Project *_t = static_cast<Project *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_update((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 1: _t->send_all_frames((*reinterpret_cast< std::vector<QPixmap>(*)>(_a[1]))); break;
        case 2: _t->update_frame_label((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->update_canvas(); break;
        case 4: _t->mouse_down_pos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->change_color((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 6: _t->add_frame(); break;
        case 7: _t->next_frame(); break;
        case 8: _t->previous_frame(); break;
        case 9: _t->swap_frames((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->get_all_frames(); break;
        case 11: _t->save_project((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->load_project((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Project::*_t)(QImage * );
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
        {
            typedef void (Project::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Project::update_frame_label)) {
                *result = 2;
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Project::send_update(QImage * _t1)
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

// SIGNAL 2
void Project::update_frame_label(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

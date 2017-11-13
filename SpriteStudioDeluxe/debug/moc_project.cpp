/****************************************************************************
** Meta object code from reading C++ file 'project.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../project.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'project.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Project_t {
    QByteArrayData data[34];
    char stringdata0[369];
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
QT_MOC_LITERAL(8, 79, 13), // "frame_changed"
QT_MOC_LITERAL(9, 93, 6), // "Frame*"
QT_MOC_LITERAL(10, 100, 18), // "send_preview_frame"
QT_MOC_LITERAL(11, 119, 18), // "update_frame_label"
QT_MOC_LITERAL(12, 138, 7), // "current"
QT_MOC_LITERAL(13, 146, 5), // "total"
QT_MOC_LITERAL(14, 152, 10), // "thread_end"
QT_MOC_LITERAL(15, 163, 13), // "update_canvas"
QT_MOC_LITERAL(16, 177, 14), // "mouse_down_pos"
QT_MOC_LITERAL(17, 192, 1), // "x"
QT_MOC_LITERAL(18, 194, 1), // "y"
QT_MOC_LITERAL(19, 196, 12), // "change_color"
QT_MOC_LITERAL(20, 209, 1), // "c"
QT_MOC_LITERAL(21, 211, 9), // "add_frame"
QT_MOC_LITERAL(22, 221, 9), // "get_frame"
QT_MOC_LITERAL(23, 231, 10), // "next_frame"
QT_MOC_LITERAL(24, 242, 14), // "previous_frame"
QT_MOC_LITERAL(25, 257, 14), // "get_all_frames"
QT_MOC_LITERAL(26, 272, 12), // "save_project"
QT_MOC_LITERAL(27, 285, 8), // "filename"
QT_MOC_LITERAL(28, 294, 12), // "load_project"
QT_MOC_LITERAL(29, 307, 14), // "export_project"
QT_MOC_LITERAL(30, 322, 11), // "export_type"
QT_MOC_LITERAL(31, 334, 17), // "history_step_back"
QT_MOC_LITERAL(32, 352, 7), // "zoom_in"
QT_MOC_LITERAL(33, 360, 8) // "zoom_out"

    },
    "Project\0send_update\0\0QImage*\0image\0"
    "send_all_frames\0std::vector<QPixmap>\0"
    "images\0frame_changed\0Frame*\0"
    "send_preview_frame\0update_frame_label\0"
    "current\0total\0thread_end\0update_canvas\0"
    "mouse_down_pos\0x\0y\0change_color\0c\0"
    "add_frame\0get_frame\0next_frame\0"
    "previous_frame\0get_all_frames\0"
    "save_project\0filename\0load_project\0"
    "export_project\0export_type\0history_step_back\0"
    "zoom_in\0zoom_out"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Project[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       5,    1,  117,    2, 0x06 /* Public */,
       8,    1,  120,    2, 0x06 /* Public */,
      10,    1,  123,    2, 0x06 /* Public */,
      11,    2,  126,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  131,    2, 0x0a /* Public */,
      15,    0,  132,    2, 0x0a /* Public */,
      16,    2,  133,    2, 0x0a /* Public */,
      19,    1,  138,    2, 0x0a /* Public */,
      21,    0,  141,    2, 0x0a /* Public */,
      22,    0,  142,    2, 0x0a /* Public */,
      23,    0,  143,    2, 0x0a /* Public */,
      24,    0,  144,    2, 0x0a /* Public */,
      25,    0,  145,    2, 0x0a /* Public */,
      26,    1,  146,    2, 0x0a /* Public */,
      28,    1,  149,    2, 0x0a /* Public */,
      29,    1,  152,    2, 0x0a /* Public */,
      31,    0,  155,    2, 0x0a /* Public */,
      32,    0,  156,    2, 0x0a /* Public */,
      33,    0,  157,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void, QMetaType::QColor,   20,
    QMetaType::Void,
    0x80000000 | 9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

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
        case 2: _t->frame_changed((*reinterpret_cast< Frame*(*)>(_a[1]))); break;
        case 3: _t->send_preview_frame((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 4: _t->update_frame_label((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->thread_end(); break;
        case 6: _t->update_canvas(); break;
        case 7: _t->mouse_down_pos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->change_color((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 9: _t->add_frame(); break;
        case 10: { Frame* _r = _t->get_frame();
            if (_a[0]) *reinterpret_cast< Frame**>(_a[0]) = std::move(_r); }  break;
        case 11: _t->next_frame(); break;
        case 12: _t->previous_frame(); break;
        case 13: _t->get_all_frames(); break;
        case 14: _t->save_project((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->load_project((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->export_project((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->history_step_back(); break;
        case 18: _t->zoom_in(); break;
        case 19: _t->zoom_out(); break;
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
            typedef void (Project::*_t)(Frame * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Project::frame_changed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Project::*_t)(QImage * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Project::send_preview_frame)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Project::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Project::update_frame_label)) {
                *result = 4;
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
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Project::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
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
void Project::frame_changed(Frame * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Project::send_preview_frame(QImage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Project::update_frame_label(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

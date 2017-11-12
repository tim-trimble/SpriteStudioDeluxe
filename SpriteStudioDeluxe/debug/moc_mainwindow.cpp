/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[51];
    char stringdata0[927];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "tool_changed"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 20), // "pencil_tool_selected"
QT_MOC_LITERAL(4, 46, 19), // "brush_tool_selected"
QT_MOC_LITERAL(5, 66, 18), // "line_tool_selected"
QT_MOC_LITERAL(6, 85, 20), // "eraser_tool_selected"
QT_MOC_LITERAL(7, 106, 18), // "brush_size_changed"
QT_MOC_LITERAL(8, 125, 1), // "d"
QT_MOC_LITERAL(9, 127, 19), // "brush_color_changed"
QT_MOC_LITERAL(10, 147, 1), // "c"
QT_MOC_LITERAL(11, 149, 20), // "next_frame_requested"
QT_MOC_LITERAL(12, 170, 24), // "previous_frame_requested"
QT_MOC_LITERAL(13, 195, 19), // "new_frame_requested"
QT_MOC_LITERAL(14, 215, 27), // "history_reversion_requested"
QT_MOC_LITERAL(15, 243, 19), // "preview_fps_changed"
QT_MOC_LITERAL(16, 263, 3), // "fps"
QT_MOC_LITERAL(17, 267, 17), // "zoom_in_requested"
QT_MOC_LITERAL(18, 285, 18), // "zoom_out_requested"
QT_MOC_LITERAL(19, 304, 14), // "mouse_down_pos"
QT_MOC_LITERAL(20, 319, 1), // "x"
QT_MOC_LITERAL(21, 321, 1), // "y"
QT_MOC_LITERAL(22, 323, 10), // "mouse_down"
QT_MOC_LITERAL(23, 334, 8), // "mouse_up"
QT_MOC_LITERAL(24, 343, 10), // "mouse_left"
QT_MOC_LITERAL(25, 354, 13), // "update_canvas"
QT_MOC_LITERAL(26, 368, 7), // "QImage*"
QT_MOC_LITERAL(27, 376, 1), // "i"
QT_MOC_LITERAL(28, 378, 14), // "update_preview"
QT_MOC_LITERAL(29, 393, 26), // "update_current_frame_label"
QT_MOC_LITERAL(30, 420, 13), // "current_frame"
QT_MOC_LITERAL(31, 434, 12), // "total_frames"
QT_MOC_LITERAL(32, 447, 16), // "c_mouse_down_pos"
QT_MOC_LITERAL(33, 464, 12), // "c_mouse_down"
QT_MOC_LITERAL(34, 477, 10), // "c_mouse_up"
QT_MOC_LITERAL(35, 488, 12), // "c_mouse_left"
QT_MOC_LITERAL(36, 501, 27), // "on_PencilToolButton_clicked"
QT_MOC_LITERAL(37, 529, 26), // "on_BrushToolButton_clicked"
QT_MOC_LITERAL(38, 556, 25), // "on_LineToolButton_clicked"
QT_MOC_LITERAL(39, 582, 27), // "on_EraserToolButton_clicked"
QT_MOC_LITERAL(40, 610, 28), // "on_MirrorXToolButton_clicked"
QT_MOC_LITERAL(41, 639, 28), // "on_MirrorYToolButton_clicked"
QT_MOC_LITERAL(42, 668, 34), // "on_DiameterSpinBox_editingFin..."
QT_MOC_LITERAL(43, 703, 28), // "on_ColorSelectButton_clicked"
QT_MOC_LITERAL(44, 732, 30), // "on_PreviousFrameButton_clicked"
QT_MOC_LITERAL(45, 763, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(46, 787, 25), // "on_AddFrameButton_clicked"
QT_MOC_LITERAL(47, 813, 38), // "on_PreviewSpeedSpinBox_editin..."
QT_MOC_LITERAL(48, 852, 23), // "on_ZoomInButton_clicked"
QT_MOC_LITERAL(49, 876, 24), // "on_ZoomOutButton_clicked"
QT_MOC_LITERAL(50, 901, 25) // "on_StepBackButton_clicked"

    },
    "MainWindow\0tool_changed\0\0pencil_tool_selected\0"
    "brush_tool_selected\0line_tool_selected\0"
    "eraser_tool_selected\0brush_size_changed\0"
    "d\0brush_color_changed\0c\0next_frame_requested\0"
    "previous_frame_requested\0new_frame_requested\0"
    "history_reversion_requested\0"
    "preview_fps_changed\0fps\0zoom_in_requested\0"
    "zoom_out_requested\0mouse_down_pos\0x\0"
    "y\0mouse_down\0mouse_up\0mouse_left\0"
    "update_canvas\0QImage*\0i\0update_preview\0"
    "update_current_frame_label\0current_frame\0"
    "total_frames\0c_mouse_down_pos\0"
    "c_mouse_down\0c_mouse_up\0c_mouse_left\0"
    "on_PencilToolButton_clicked\0"
    "on_BrushToolButton_clicked\0"
    "on_LineToolButton_clicked\0"
    "on_EraserToolButton_clicked\0"
    "on_MirrorXToolButton_clicked\0"
    "on_MirrorYToolButton_clicked\0"
    "on_DiameterSpinBox_editingFinished\0"
    "on_ColorSelectButton_clicked\0"
    "on_PreviousFrameButton_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_AddFrameButton_clicked\0"
    "on_PreviewSpeedSpinBox_editingFinished\0"
    "on_ZoomInButton_clicked\0"
    "on_ZoomOutButton_clicked\0"
    "on_StepBackButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  214,    2, 0x06 /* Public */,
       3,    0,  217,    2, 0x06 /* Public */,
       4,    0,  218,    2, 0x06 /* Public */,
       5,    0,  219,    2, 0x06 /* Public */,
       6,    0,  220,    2, 0x06 /* Public */,
       7,    1,  221,    2, 0x06 /* Public */,
       9,    1,  224,    2, 0x06 /* Public */,
      11,    0,  227,    2, 0x06 /* Public */,
      12,    0,  228,    2, 0x06 /* Public */,
      13,    0,  229,    2, 0x06 /* Public */,
      14,    0,  230,    2, 0x06 /* Public */,
      15,    1,  231,    2, 0x06 /* Public */,
      17,    0,  234,    2, 0x06 /* Public */,
      18,    0,  235,    2, 0x06 /* Public */,
      19,    2,  236,    2, 0x06 /* Public */,
      22,    2,  241,    2, 0x06 /* Public */,
      23,    2,  246,    2, 0x06 /* Public */,
      24,    0,  251,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    1,  252,    2, 0x0a /* Public */,
      28,    1,  255,    2, 0x0a /* Public */,
      29,    2,  258,    2, 0x0a /* Public */,
      32,    0,  263,    2, 0x0a /* Public */,
      33,    0,  264,    2, 0x0a /* Public */,
      34,    0,  265,    2, 0x0a /* Public */,
      35,    0,  266,    2, 0x0a /* Public */,
      36,    0,  267,    2, 0x08 /* Private */,
      37,    0,  268,    2, 0x08 /* Private */,
      38,    0,  269,    2, 0x08 /* Private */,
      39,    0,  270,    2, 0x08 /* Private */,
      40,    0,  271,    2, 0x08 /* Private */,
      41,    0,  272,    2, 0x08 /* Private */,
      42,    0,  273,    2, 0x08 /* Private */,
      43,    0,  274,    2, 0x08 /* Private */,
      44,    0,  275,    2, 0x08 /* Private */,
      45,    0,  276,    2, 0x08 /* Private */,
      46,    0,  277,    2, 0x08 /* Private */,
      47,    0,  278,    2, 0x08 /* Private */,
      48,    0,  279,    2, 0x08 /* Private */,
      49,    0,  280,    2, 0x08 /* Private */,
      50,    0,  281,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QColor,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   20,   21,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   30,   31,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tool_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pencil_tool_selected(); break;
        case 2: _t->brush_tool_selected(); break;
        case 3: _t->line_tool_selected(); break;
        case 4: _t->eraser_tool_selected(); break;
        case 5: _t->brush_size_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->brush_color_changed((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 7: _t->next_frame_requested(); break;
        case 8: _t->previous_frame_requested(); break;
        case 9: _t->new_frame_requested(); break;
        case 10: _t->history_reversion_requested(); break;
        case 11: _t->preview_fps_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->zoom_in_requested(); break;
        case 13: _t->zoom_out_requested(); break;
        case 14: _t->mouse_down_pos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->mouse_down((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->mouse_up((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->mouse_left(); break;
        case 18: _t->update_canvas((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 19: _t->update_preview((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 20: _t->update_current_frame_label((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->c_mouse_down_pos(); break;
        case 22: _t->c_mouse_down(); break;
        case 23: _t->c_mouse_up(); break;
        case 24: _t->c_mouse_left(); break;
        case 25: _t->on_PencilToolButton_clicked(); break;
        case 26: _t->on_BrushToolButton_clicked(); break;
        case 27: _t->on_LineToolButton_clicked(); break;
        case 28: _t->on_EraserToolButton_clicked(); break;
        case 29: _t->on_MirrorXToolButton_clicked(); break;
        case 30: _t->on_MirrorYToolButton_clicked(); break;
        case 31: _t->on_DiameterSpinBox_editingFinished(); break;
        case 32: _t->on_ColorSelectButton_clicked(); break;
        case 33: _t->on_PreviousFrameButton_clicked(); break;
        case 34: _t->on_pushButton_2_clicked(); break;
        case 35: _t->on_AddFrameButton_clicked(); break;
        case 36: _t->on_PreviewSpeedSpinBox_editingFinished(); break;
        case 37: _t->on_ZoomInButton_clicked(); break;
        case 38: _t->on_ZoomOutButton_clicked(); break;
        case 39: _t->on_StepBackButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::tool_changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::pencil_tool_selected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::brush_tool_selected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::line_tool_selected)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::eraser_tool_selected)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::brush_size_changed)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::brush_color_changed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::next_frame_requested)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::previous_frame_requested)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::new_frame_requested)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::history_reversion_requested)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::preview_fps_changed)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::zoom_in_requested)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::zoom_out_requested)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::mouse_down_pos)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::mouse_down)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::mouse_up)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::mouse_left)) {
                *result = 17;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::tool_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::pencil_tool_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::brush_tool_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::line_tool_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::eraser_tool_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MainWindow::brush_size_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::brush_color_changed(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::next_frame_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MainWindow::previous_frame_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MainWindow::new_frame_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MainWindow::history_reversion_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MainWindow::preview_fps_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindow::zoom_in_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MainWindow::zoom_out_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MainWindow::mouse_down_pos(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MainWindow::mouse_down(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MainWindow::mouse_up(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MainWindow::mouse_left()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

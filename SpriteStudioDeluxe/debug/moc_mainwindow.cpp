/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[57];
    char stringdata0[1066];
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
QT_MOC_LITERAL(7, 106, 12), // "clear_canvas"
QT_MOC_LITERAL(8, 119, 11), // "fill_canvas"
QT_MOC_LITERAL(9, 131, 18), // "brush_size_changed"
QT_MOC_LITERAL(10, 150, 1), // "d"
QT_MOC_LITERAL(11, 152, 19), // "brush_color_changed"
QT_MOC_LITERAL(12, 172, 1), // "c"
QT_MOC_LITERAL(13, 174, 20), // "next_frame_requested"
QT_MOC_LITERAL(14, 195, 24), // "previous_frame_requested"
QT_MOC_LITERAL(15, 220, 19), // "new_frame_requested"
QT_MOC_LITERAL(16, 240, 27), // "history_reversion_requested"
QT_MOC_LITERAL(17, 268, 19), // "preview_fps_changed"
QT_MOC_LITERAL(18, 288, 3), // "fps"
QT_MOC_LITERAL(19, 292, 17), // "zoom_in_requested"
QT_MOC_LITERAL(20, 310, 18), // "zoom_out_requested"
QT_MOC_LITERAL(21, 329, 10), // "mouse_drag"
QT_MOC_LITERAL(22, 340, 1), // "x"
QT_MOC_LITERAL(23, 342, 1), // "y"
QT_MOC_LITERAL(24, 344, 10), // "mouse_down"
QT_MOC_LITERAL(25, 355, 8), // "mouse_up"
QT_MOC_LITERAL(26, 364, 10), // "mouse_left"
QT_MOC_LITERAL(27, 375, 13), // "update_canvas"
QT_MOC_LITERAL(28, 389, 7), // "QImage*"
QT_MOC_LITERAL(29, 397, 1), // "i"
QT_MOC_LITERAL(30, 399, 14), // "update_preview"
QT_MOC_LITERAL(31, 414, 26), // "update_current_frame_label"
QT_MOC_LITERAL(32, 441, 13), // "current_frame"
QT_MOC_LITERAL(33, 455, 12), // "total_frames"
QT_MOC_LITERAL(34, 468, 16), // "c_mouse_down_pos"
QT_MOC_LITERAL(35, 485, 12), // "c_mouse_down"
QT_MOC_LITERAL(36, 498, 10), // "c_mouse_up"
QT_MOC_LITERAL(37, 509, 12), // "c_mouse_left"
QT_MOC_LITERAL(38, 522, 27), // "on_PencilToolButton_clicked"
QT_MOC_LITERAL(39, 550, 26), // "on_BrushToolButton_clicked"
QT_MOC_LITERAL(40, 577, 25), // "on_LineToolButton_clicked"
QT_MOC_LITERAL(41, 603, 27), // "on_EraserToolButton_clicked"
QT_MOC_LITERAL(42, 631, 28), // "on_MirrorXToolButton_clicked"
QT_MOC_LITERAL(43, 660, 28), // "on_MirrorYToolButton_clicked"
QT_MOC_LITERAL(44, 689, 34), // "on_DiameterSpinBox_editingFin..."
QT_MOC_LITERAL(45, 724, 28), // "on_ColorSelectButton_clicked"
QT_MOC_LITERAL(46, 753, 30), // "on_PreviousFrameButton_clicked"
QT_MOC_LITERAL(47, 784, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(48, 808, 25), // "on_AddFrameButton_clicked"
QT_MOC_LITERAL(49, 834, 38), // "on_PreviewSpeedSpinBox_editin..."
QT_MOC_LITERAL(50, 873, 23), // "on_ZoomInButton_clicked"
QT_MOC_LITERAL(51, 897, 24), // "on_ZoomOutButton_clicked"
QT_MOC_LITERAL(52, 922, 25), // "on_StepBackButton_clicked"
QT_MOC_LITERAL(53, 948, 30), // "on_RectangleToolButton_clicked"
QT_MOC_LITERAL(54, 979, 32), // "on_FilledRectangleButton_clicked"
QT_MOC_LITERAL(55, 1012, 28), // "on_ClearCanvasButton_clicked"
QT_MOC_LITERAL(56, 1041, 24) // "on_FillAllButton_clicked"

    },
    "MainWindow\0tool_changed\0\0pencil_tool_selected\0"
    "brush_tool_selected\0line_tool_selected\0"
    "eraser_tool_selected\0clear_canvas\0"
    "fill_canvas\0brush_size_changed\0d\0"
    "brush_color_changed\0c\0next_frame_requested\0"
    "previous_frame_requested\0new_frame_requested\0"
    "history_reversion_requested\0"
    "preview_fps_changed\0fps\0zoom_in_requested\0"
    "zoom_out_requested\0mouse_drag\0x\0y\0"
    "mouse_down\0mouse_up\0mouse_left\0"
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
    "on_StepBackButton_clicked\0"
    "on_RectangleToolButton_clicked\0"
    "on_FilledRectangleButton_clicked\0"
    "on_ClearCanvasButton_clicked\0"
    "on_FillAllButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  244,    2, 0x06 /* Public */,
       3,    0,  247,    2, 0x06 /* Public */,
       4,    0,  248,    2, 0x06 /* Public */,
       5,    0,  249,    2, 0x06 /* Public */,
       6,    0,  250,    2, 0x06 /* Public */,
       7,    0,  251,    2, 0x06 /* Public */,
       8,    0,  252,    2, 0x06 /* Public */,
       9,    1,  253,    2, 0x06 /* Public */,
      11,    1,  256,    2, 0x06 /* Public */,
      13,    0,  259,    2, 0x06 /* Public */,
      14,    0,  260,    2, 0x06 /* Public */,
      15,    0,  261,    2, 0x06 /* Public */,
      16,    0,  262,    2, 0x06 /* Public */,
      17,    1,  263,    2, 0x06 /* Public */,
      19,    0,  266,    2, 0x06 /* Public */,
      20,    0,  267,    2, 0x06 /* Public */,
      21,    2,  268,    2, 0x06 /* Public */,
      24,    2,  273,    2, 0x06 /* Public */,
      25,    2,  278,    2, 0x06 /* Public */,
      26,    0,  283,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    1,  284,    2, 0x0a /* Public */,
      30,    1,  287,    2, 0x0a /* Public */,
      31,    2,  290,    2, 0x0a /* Public */,
      34,    0,  295,    2, 0x0a /* Public */,
      35,    0,  296,    2, 0x0a /* Public */,
      36,    0,  297,    2, 0x0a /* Public */,
      37,    0,  298,    2, 0x0a /* Public */,
      38,    0,  299,    2, 0x08 /* Private */,
      39,    0,  300,    2, 0x08 /* Private */,
      40,    0,  301,    2, 0x08 /* Private */,
      41,    0,  302,    2, 0x08 /* Private */,
      42,    0,  303,    2, 0x08 /* Private */,
      43,    0,  304,    2, 0x08 /* Private */,
      44,    0,  305,    2, 0x08 /* Private */,
      45,    0,  306,    2, 0x08 /* Private */,
      46,    0,  307,    2, 0x08 /* Private */,
      47,    0,  308,    2, 0x08 /* Private */,
      48,    0,  309,    2, 0x08 /* Private */,
      49,    0,  310,    2, 0x08 /* Private */,
      50,    0,  311,    2, 0x08 /* Private */,
      51,    0,  312,    2, 0x08 /* Private */,
      52,    0,  313,    2, 0x08 /* Private */,
      53,    0,  314,    2, 0x08 /* Private */,
      54,    0,  315,    2, 0x08 /* Private */,
      55,    0,  316,    2, 0x08 /* Private */,
      56,    0,  317,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QColor,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   32,   33,
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
        case 5: _t->clear_canvas(); break;
        case 6: _t->fill_canvas(); break;
        case 7: _t->brush_size_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->brush_color_changed((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 9: _t->next_frame_requested(); break;
        case 10: _t->previous_frame_requested(); break;
        case 11: _t->new_frame_requested(); break;
        case 12: _t->history_reversion_requested(); break;
        case 13: _t->preview_fps_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->zoom_in_requested(); break;
        case 15: _t->zoom_out_requested(); break;
        case 16: _t->mouse_drag((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->mouse_down((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->mouse_up((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->mouse_left(); break;
        case 20: _t->update_canvas((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 21: _t->update_preview((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 22: _t->update_current_frame_label((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->c_mouse_down_pos(); break;
        case 24: _t->c_mouse_down(); break;
        case 25: _t->c_mouse_up(); break;
        case 26: _t->c_mouse_left(); break;
        case 27: _t->on_PencilToolButton_clicked(); break;
        case 28: _t->on_BrushToolButton_clicked(); break;
        case 29: _t->on_LineToolButton_clicked(); break;
        case 30: _t->on_EraserToolButton_clicked(); break;
        case 31: _t->on_MirrorXToolButton_clicked(); break;
        case 32: _t->on_MirrorYToolButton_clicked(); break;
        case 33: _t->on_DiameterSpinBox_editingFinished(); break;
        case 34: _t->on_ColorSelectButton_clicked(); break;
        case 35: _t->on_PreviousFrameButton_clicked(); break;
        case 36: _t->on_pushButton_2_clicked(); break;
        case 37: _t->on_AddFrameButton_clicked(); break;
        case 38: _t->on_PreviewSpeedSpinBox_editingFinished(); break;
        case 39: _t->on_ZoomInButton_clicked(); break;
        case 40: _t->on_ZoomOutButton_clicked(); break;
        case 41: _t->on_StepBackButton_clicked(); break;
        case 42: _t->on_RectangleToolButton_clicked(); break;
        case 43: _t->on_FilledRectangleButton_clicked(); break;
        case 44: _t->on_ClearCanvasButton_clicked(); break;
        case 45: _t->on_FillAllButton_clicked(); break;
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
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::clear_canvas)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::fill_canvas)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::brush_size_changed)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::brush_color_changed)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::next_frame_requested)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::previous_frame_requested)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::new_frame_requested)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::history_reversion_requested)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::preview_fps_changed)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::zoom_in_requested)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::zoom_out_requested)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::mouse_drag)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::mouse_down)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::mouse_up)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::mouse_left)) {
                *result = 19;
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
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
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
void MainWindow::clear_canvas()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MainWindow::fill_canvas()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MainWindow::brush_size_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::brush_color_changed(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::next_frame_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MainWindow::previous_frame_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MainWindow::new_frame_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MainWindow::history_reversion_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MainWindow::preview_fps_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MainWindow::zoom_in_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MainWindow::zoom_out_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void MainWindow::mouse_drag(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MainWindow::mouse_down(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MainWindow::mouse_up(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MainWindow::mouse_left()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

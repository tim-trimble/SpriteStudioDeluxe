/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SpriteStudioDeluxe/mainwindow.h"
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
    QByteArrayData data[62];
    char stringdata0[1143];
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
QT_MOC_LITERAL(27, 375, 9), // "save_file"
QT_MOC_LITERAL(28, 385, 8), // "filename"
QT_MOC_LITERAL(29, 394, 9), // "load_file"
QT_MOC_LITERAL(30, 404, 13), // "update_canvas"
QT_MOC_LITERAL(31, 418, 7), // "QImage*"
QT_MOC_LITERAL(32, 426, 1), // "i"
QT_MOC_LITERAL(33, 428, 14), // "update_preview"
QT_MOC_LITERAL(34, 443, 26), // "update_current_frame_label"
QT_MOC_LITERAL(35, 470, 13), // "current_frame"
QT_MOC_LITERAL(36, 484, 12), // "total_frames"
QT_MOC_LITERAL(37, 497, 16), // "c_mouse_down_pos"
QT_MOC_LITERAL(38, 514, 12), // "c_mouse_down"
QT_MOC_LITERAL(39, 527, 10), // "c_mouse_up"
QT_MOC_LITERAL(40, 538, 12), // "c_mouse_left"
QT_MOC_LITERAL(41, 551, 27), // "on_PencilToolButton_clicked"
QT_MOC_LITERAL(42, 579, 26), // "on_BrushToolButton_clicked"
QT_MOC_LITERAL(43, 606, 25), // "on_LineToolButton_clicked"
QT_MOC_LITERAL(44, 632, 27), // "on_EraserToolButton_clicked"
QT_MOC_LITERAL(45, 660, 28), // "on_MirrorXToolButton_clicked"
QT_MOC_LITERAL(46, 689, 28), // "on_MirrorYToolButton_clicked"
QT_MOC_LITERAL(47, 718, 34), // "on_DiameterSpinBox_editingFin..."
QT_MOC_LITERAL(48, 753, 28), // "on_ColorSelectButton_clicked"
QT_MOC_LITERAL(49, 782, 30), // "on_PreviousFrameButton_clicked"
QT_MOC_LITERAL(50, 813, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(51, 837, 25), // "on_AddFrameButton_clicked"
QT_MOC_LITERAL(52, 863, 38), // "on_PreviewSpeedSpinBox_editin..."
QT_MOC_LITERAL(53, 902, 23), // "on_ZoomInButton_clicked"
QT_MOC_LITERAL(54, 926, 24), // "on_ZoomOutButton_clicked"
QT_MOC_LITERAL(55, 951, 25), // "on_StepBackButton_clicked"
QT_MOC_LITERAL(56, 977, 30), // "on_RectangleToolButton_clicked"
QT_MOC_LITERAL(57, 1008, 32), // "on_FilledRectangleButton_clicked"
QT_MOC_LITERAL(58, 1041, 28), // "on_ClearCanvasButton_clicked"
QT_MOC_LITERAL(59, 1070, 24), // "on_FillAllButton_clicked"
QT_MOC_LITERAL(60, 1095, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(61, 1119, 23) // "on_actionLoad_triggered"

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
    "mouse_down\0mouse_up\0mouse_left\0save_file\0"
    "filename\0load_file\0update_canvas\0"
    "QImage*\0i\0update_preview\0"
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
    "on_FillAllButton_clicked\0"
    "on_actionSave_triggered\0on_actionLoad_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  264,    2, 0x06 /* Public */,
       3,    0,  267,    2, 0x06 /* Public */,
       4,    0,  268,    2, 0x06 /* Public */,
       5,    0,  269,    2, 0x06 /* Public */,
       6,    0,  270,    2, 0x06 /* Public */,
       7,    0,  271,    2, 0x06 /* Public */,
       8,    0,  272,    2, 0x06 /* Public */,
       9,    1,  273,    2, 0x06 /* Public */,
      11,    1,  276,    2, 0x06 /* Public */,
      13,    0,  279,    2, 0x06 /* Public */,
      14,    0,  280,    2, 0x06 /* Public */,
      15,    0,  281,    2, 0x06 /* Public */,
      16,    0,  282,    2, 0x06 /* Public */,
      17,    1,  283,    2, 0x06 /* Public */,
      19,    0,  286,    2, 0x06 /* Public */,
      20,    0,  287,    2, 0x06 /* Public */,
      21,    2,  288,    2, 0x06 /* Public */,
      24,    2,  293,    2, 0x06 /* Public */,
      25,    2,  298,    2, 0x06 /* Public */,
      26,    0,  303,    2, 0x06 /* Public */,
      27,    1,  304,    2, 0x06 /* Public */,
      29,    1,  307,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      30,    1,  310,    2, 0x0a /* Public */,
      33,    1,  313,    2, 0x0a /* Public */,
      34,    2,  316,    2, 0x0a /* Public */,
      37,    0,  321,    2, 0x0a /* Public */,
      38,    0,  322,    2, 0x0a /* Public */,
      39,    0,  323,    2, 0x0a /* Public */,
      40,    0,  324,    2, 0x0a /* Public */,
      41,    0,  325,    2, 0x08 /* Private */,
      42,    0,  326,    2, 0x08 /* Private */,
      43,    0,  327,    2, 0x08 /* Private */,
      44,    0,  328,    2, 0x08 /* Private */,
      45,    0,  329,    2, 0x08 /* Private */,
      46,    0,  330,    2, 0x08 /* Private */,
      47,    0,  331,    2, 0x08 /* Private */,
      48,    0,  332,    2, 0x08 /* Private */,
      49,    0,  333,    2, 0x08 /* Private */,
      50,    0,  334,    2, 0x08 /* Private */,
      51,    0,  335,    2, 0x08 /* Private */,
      52,    0,  336,    2, 0x08 /* Private */,
      53,    0,  337,    2, 0x08 /* Private */,
      54,    0,  338,    2, 0x08 /* Private */,
      55,    0,  339,    2, 0x08 /* Private */,
      56,    0,  340,    2, 0x08 /* Private */,
      57,    0,  341,    2, 0x08 /* Private */,
      58,    0,  342,    2, 0x08 /* Private */,
      59,    0,  343,    2, 0x08 /* Private */,
      60,    0,  344,    2, 0x08 /* Private */,
      61,    0,  345,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   28,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   35,   36,
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
        case 20: _t->save_file((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->load_file((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->update_canvas((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 23: _t->update_preview((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 24: _t->update_current_frame_label((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->c_mouse_down_pos(); break;
        case 26: _t->c_mouse_down(); break;
        case 27: _t->c_mouse_up(); break;
        case 28: _t->c_mouse_left(); break;
        case 29: _t->on_PencilToolButton_clicked(); break;
        case 30: _t->on_BrushToolButton_clicked(); break;
        case 31: _t->on_LineToolButton_clicked(); break;
        case 32: _t->on_EraserToolButton_clicked(); break;
        case 33: _t->on_MirrorXToolButton_clicked(); break;
        case 34: _t->on_MirrorYToolButton_clicked(); break;
        case 35: _t->on_DiameterSpinBox_editingFinished(); break;
        case 36: _t->on_ColorSelectButton_clicked(); break;
        case 37: _t->on_PreviousFrameButton_clicked(); break;
        case 38: _t->on_pushButton_2_clicked(); break;
        case 39: _t->on_AddFrameButton_clicked(); break;
        case 40: _t->on_PreviewSpeedSpinBox_editingFinished(); break;
        case 41: _t->on_ZoomInButton_clicked(); break;
        case 42: _t->on_ZoomOutButton_clicked(); break;
        case 43: _t->on_StepBackButton_clicked(); break;
        case 44: _t->on_RectangleToolButton_clicked(); break;
        case 45: _t->on_FilledRectangleButton_clicked(); break;
        case 46: _t->on_ClearCanvasButton_clicked(); break;
        case 47: _t->on_FillAllButton_clicked(); break;
        case 48: _t->on_actionSave_triggered(); break;
        case 49: _t->on_actionLoad_triggered(); break;
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
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::save_file)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::load_file)) {
                *result = 21;
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
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 50;
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

// SIGNAL 20
void MainWindow::save_file(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MainWindow::load_file(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

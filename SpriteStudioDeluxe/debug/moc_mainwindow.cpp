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
    QByteArrayData data[49];
    char stringdata0[840];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "PencilToolSelected"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "BrushToolSelected"
QT_MOC_LITERAL(4, 49, 16), // "LineToolSelected"
QT_MOC_LITERAL(5, 66, 18), // "EraserToolSelected"
QT_MOC_LITERAL(6, 85, 16), // "BrushSizeChanged"
QT_MOC_LITERAL(7, 102, 1), // "d"
QT_MOC_LITERAL(8, 104, 17), // "BrushColorChanged"
QT_MOC_LITERAL(9, 122, 1), // "c"
QT_MOC_LITERAL(10, 124, 18), // "NextFrameRequested"
QT_MOC_LITERAL(11, 143, 22), // "PreviousFrameRequested"
QT_MOC_LITERAL(12, 166, 17), // "NewFrameRequested"
QT_MOC_LITERAL(13, 184, 25), // "HistoryReversionRequested"
QT_MOC_LITERAL(14, 210, 17), // "PreviewFPSChanged"
QT_MOC_LITERAL(15, 228, 3), // "fps"
QT_MOC_LITERAL(16, 232, 15), // "ZoomInRequested"
QT_MOC_LITERAL(17, 248, 16), // "ZoomOutRequested"
QT_MOC_LITERAL(18, 265, 20), // "MousePosWhilePressed"
QT_MOC_LITERAL(19, 286, 1), // "x"
QT_MOC_LITERAL(20, 288, 1), // "y"
QT_MOC_LITERAL(21, 290, 9), // "MouseDown"
QT_MOC_LITERAL(22, 300, 7), // "MouseUp"
QT_MOC_LITERAL(23, 308, 9), // "MouseLeft"
QT_MOC_LITERAL(24, 318, 12), // "UpdateCanvas"
QT_MOC_LITERAL(25, 331, 7), // "QImage*"
QT_MOC_LITERAL(26, 339, 1), // "i"
QT_MOC_LITERAL(27, 341, 13), // "UpdatePreview"
QT_MOC_LITERAL(28, 355, 23), // "UpdateCurrentFrameLabel"
QT_MOC_LITERAL(29, 379, 12), // "currentFrame"
QT_MOC_LITERAL(30, 392, 11), // "totalFrames"
QT_MOC_LITERAL(31, 404, 19), // "AddHistoryMenuEntry"
QT_MOC_LITERAL(32, 424, 13), // "Mouse_DownPos"
QT_MOC_LITERAL(33, 438, 10), // "Mouse_Down"
QT_MOC_LITERAL(34, 449, 8), // "Mouse_Up"
QT_MOC_LITERAL(35, 458, 10), // "Mouse_Left"
QT_MOC_LITERAL(36, 469, 27), // "on_PencilToolButton_clicked"
QT_MOC_LITERAL(37, 497, 26), // "on_BrushToolButton_clicked"
QT_MOC_LITERAL(38, 524, 25), // "on_LineToolButton_clicked"
QT_MOC_LITERAL(39, 550, 27), // "on_EraserToolButton_clicked"
QT_MOC_LITERAL(40, 578, 34), // "on_DiameterSpinBox_editingFin..."
QT_MOC_LITERAL(41, 613, 28), // "on_ColorSelectButton_clicked"
QT_MOC_LITERAL(42, 642, 30), // "on_PreviousFrameButton_clicked"
QT_MOC_LITERAL(43, 673, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(44, 697, 25), // "on_AddFrameButton_clicked"
QT_MOC_LITERAL(45, 723, 28), // "on_LoadHistoryButton_clicked"
QT_MOC_LITERAL(46, 752, 38), // "on_PreviewSpeedSpinBox_editin..."
QT_MOC_LITERAL(47, 791, 23), // "on_ZoomInButton_clicked"
QT_MOC_LITERAL(48, 815, 24) // "on_ZoomOutButton_clicked"

    },
    "MainWindow\0PencilToolSelected\0\0"
    "BrushToolSelected\0LineToolSelected\0"
    "EraserToolSelected\0BrushSizeChanged\0"
    "d\0BrushColorChanged\0c\0NextFrameRequested\0"
    "PreviousFrameRequested\0NewFrameRequested\0"
    "HistoryReversionRequested\0PreviewFPSChanged\0"
    "fps\0ZoomInRequested\0ZoomOutRequested\0"
    "MousePosWhilePressed\0x\0y\0MouseDown\0"
    "MouseUp\0MouseLeft\0UpdateCanvas\0QImage*\0"
    "i\0UpdatePreview\0UpdateCurrentFrameLabel\0"
    "currentFrame\0totalFrames\0AddHistoryMenuEntry\0"
    "Mouse_DownPos\0Mouse_Down\0Mouse_Up\0"
    "Mouse_Left\0on_PencilToolButton_clicked\0"
    "on_BrushToolButton_clicked\0"
    "on_LineToolButton_clicked\0"
    "on_EraserToolButton_clicked\0"
    "on_DiameterSpinBox_editingFinished\0"
    "on_ColorSelectButton_clicked\0"
    "on_PreviousFrameButton_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_AddFrameButton_clicked\0"
    "on_LoadHistoryButton_clicked\0"
    "on_PreviewSpeedSpinBox_editingFinished\0"
    "on_ZoomInButton_clicked\0"
    "on_ZoomOutButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  204,    2, 0x06 /* Public */,
       3,    0,  205,    2, 0x06 /* Public */,
       4,    0,  206,    2, 0x06 /* Public */,
       5,    0,  207,    2, 0x06 /* Public */,
       6,    1,  208,    2, 0x06 /* Public */,
       8,    1,  211,    2, 0x06 /* Public */,
      10,    0,  214,    2, 0x06 /* Public */,
      11,    0,  215,    2, 0x06 /* Public */,
      12,    0,  216,    2, 0x06 /* Public */,
      13,    0,  217,    2, 0x06 /* Public */,
      14,    1,  218,    2, 0x06 /* Public */,
      16,    0,  221,    2, 0x06 /* Public */,
      17,    0,  222,    2, 0x06 /* Public */,
      18,    2,  223,    2, 0x06 /* Public */,
      21,    2,  228,    2, 0x06 /* Public */,
      22,    2,  233,    2, 0x06 /* Public */,
      23,    0,  238,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    1,  239,    2, 0x0a /* Public */,
      27,    1,  242,    2, 0x0a /* Public */,
      28,    2,  245,    2, 0x0a /* Public */,
      31,    0,  250,    2, 0x0a /* Public */,
      32,    0,  251,    2, 0x0a /* Public */,
      33,    0,  252,    2, 0x0a /* Public */,
      34,    0,  253,    2, 0x0a /* Public */,
      35,    0,  254,    2, 0x0a /* Public */,
      36,    0,  255,    2, 0x08 /* Private */,
      37,    0,  256,    2, 0x08 /* Private */,
      38,    0,  257,    2, 0x08 /* Private */,
      39,    0,  258,    2, 0x08 /* Private */,
      40,    0,  259,    2, 0x08 /* Private */,
      41,    0,  260,    2, 0x08 /* Private */,
      42,    0,  261,    2, 0x08 /* Private */,
      43,    0,  262,    2, 0x08 /* Private */,
      44,    0,  263,    2, 0x08 /* Private */,
      45,    0,  264,    2, 0x08 /* Private */,
      46,    0,  265,    2, 0x08 /* Private */,
      47,    0,  266,    2, 0x08 /* Private */,
      48,    0,  267,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QColor,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   20,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   29,   30,
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
        case 0: _t->PencilToolSelected(); break;
        case 1: _t->BrushToolSelected(); break;
        case 2: _t->LineToolSelected(); break;
        case 3: _t->EraserToolSelected(); break;
        case 4: _t->BrushSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->BrushColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 6: _t->NextFrameRequested(); break;
        case 7: _t->PreviousFrameRequested(); break;
        case 8: _t->NewFrameRequested(); break;
        case 9: _t->HistoryReversionRequested(); break;
        case 10: _t->PreviewFPSChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->ZoomInRequested(); break;
        case 12: _t->ZoomOutRequested(); break;
        case 13: _t->MousePosWhilePressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->MouseDown((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->MouseUp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->MouseLeft(); break;
        case 21: _t->Mouse_DownPos(); break;
        case 22: _t->Mouse_Down(); break;
        case 23: _t->Mouse_Up(); break;
        case 24: _t->Mouse_Left(); break;
        case 25: _t->on_PencilToolButton_clicked(); break;
        case 26: _t->on_BrushToolButton_clicked(); break;
        case 27: _t->on_LineToolButton_clicked(); break;
        case 28: _t->on_EraserToolButton_clicked(); break;
        case 29: _t->on_DiameterSpinBox_editingFinished(); break;
        case 30: _t->on_ColorSelectButton_clicked(); break;
        case 31: _t->on_PreviousFrameButton_clicked(); break;
        case 32: _t->on_pushButton_2_clicked(); break;
        case 33: _t->on_AddFrameButton_clicked(); break;
        case 34: _t->on_LoadHistoryButton_clicked(); break;
        case 35: _t->on_PreviewSpeedSpinBox_editingFinished(); break;
        case 36: _t->on_ZoomInButton_clicked(); break;
        case 37: _t->on_ZoomOutButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::PencilToolSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::BrushToolSelected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::LineToolSelected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::EraserToolSelected)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::BrushSizeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::BrushColorChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::NextFrameRequested)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::PreviousFrameRequested)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::NewFrameRequested)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::HistoryReversionRequested)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::PreviewFPSChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::ZoomInRequested)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::ZoomOutRequested)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::MousePosWhilePressed)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::MouseDown)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::MouseUp)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::MouseLeft)) {
                *result = 16;
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
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 38;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::PencilToolSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::BrushToolSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::LineToolSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::EraserToolSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::BrushSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::BrushColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::NextFrameRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MainWindow::PreviousFrameRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MainWindow::NewFrameRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MainWindow::HistoryReversionRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MainWindow::PreviewFPSChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWindow::ZoomInRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MainWindow::ZoomOutRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MainWindow::MousePosWhilePressed(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MainWindow::MouseDown(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MainWindow::MouseUp(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MainWindow::MouseLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

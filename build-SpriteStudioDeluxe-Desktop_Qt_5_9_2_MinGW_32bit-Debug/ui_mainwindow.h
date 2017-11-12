/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <canvas.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionExport;
    QAction *actionRotate_90;
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    Canvas *canvas;
    QPushButton *PreviousFrameButton;
    QPushButton *pushButton_2;
    QLabel *CurrentFrameLabel;
    QLabel *label_2;
    QGroupBox *groupBox;
    QToolButton *PencilToolButton;
    QToolButton *EraserToolButton;
    QToolButton *LineToolButton;
    QToolButton *BrushToolButton;
    QToolButton *MirrorXToolButton;
    QToolButton *MirrorYToolButton;
    QToolButton *RectangleToolButton;
    QToolButton *FillAllButton;
    QToolButton *ClearCanvasButton;
    QToolButton *FilledRectangleButton;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QSpinBox *DiameterSpinBox;
    QPushButton *ColorSelectButton;
    QLabel *label_4;
    QLabel *CurrentColorLabel;
    QFrame *line;
    QGroupBox *groupBox_3;
    QLabel *PreviewLabel;
    QSpinBox *PreviewSpeedSpinBox;
    QLabel *label_5;
    QPushButton *AddFrameButton;
    QPushButton *ZoomInButton;
    QPushButton *ZoomOutButton;
    QLabel *label_6;
    QPushButton *StepBackButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(941, 627);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        actionRotate_90 = new QAction(MainWindow);
        actionRotate_90->setObjectName(QStringLiteral("actionRotate_90"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(150, 80, 611, 411));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 609, 409));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        canvas = new Canvas(scrollAreaWidgetContents);
        canvas->setObjectName(QStringLiteral("canvas"));
        canvas->setFrameShape(QFrame::Box);
        canvas->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(canvas, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        PreviousFrameButton = new QPushButton(centralWidget);
        PreviousFrameButton->setObjectName(QStringLiteral("PreviousFrameButton"));
        PreviousFrameButton->setGeometry(QRect(148, 500, 111, 51));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(650, 500, 111, 51));
        CurrentFrameLabel = new QLabel(centralWidget);
        CurrentFrameLabel->setObjectName(QStringLiteral("CurrentFrameLabel"));
        CurrentFrameLabel->setGeometry(QRect(410, 500, 121, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(780, 20, 55, 16));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 70, 131, 281));
        QFont font;
        font.setPointSize(8);
        groupBox->setFont(font);
        PencilToolButton = new QToolButton(groupBox);
        PencilToolButton->setObjectName(QStringLiteral("PencilToolButton"));
        PencilToolButton->setGeometry(QRect(10, 30, 51, 41));
        EraserToolButton = new QToolButton(groupBox);
        EraserToolButton->setObjectName(QStringLiteral("EraserToolButton"));
        EraserToolButton->setGeometry(QRect(70, 80, 51, 41));
        LineToolButton = new QToolButton(groupBox);
        LineToolButton->setObjectName(QStringLiteral("LineToolButton"));
        LineToolButton->setGeometry(QRect(10, 80, 51, 41));
        BrushToolButton = new QToolButton(groupBox);
        BrushToolButton->setObjectName(QStringLiteral("BrushToolButton"));
        BrushToolButton->setGeometry(QRect(70, 30, 51, 41));
        MirrorXToolButton = new QToolButton(groupBox);
        MirrorXToolButton->setObjectName(QStringLiteral("MirrorXToolButton"));
        MirrorXToolButton->setGeometry(QRect(10, 130, 51, 41));
        MirrorYToolButton = new QToolButton(groupBox);
        MirrorYToolButton->setObjectName(QStringLiteral("MirrorYToolButton"));
        MirrorYToolButton->setGeometry(QRect(70, 130, 51, 41));
        RectangleToolButton = new QToolButton(groupBox);
        RectangleToolButton->setObjectName(QStringLiteral("RectangleToolButton"));
        RectangleToolButton->setGeometry(QRect(10, 180, 51, 41));
        QFont font1;
        font1.setPointSize(7);
        RectangleToolButton->setFont(font1);
        FillAllButton = new QToolButton(groupBox);
        FillAllButton->setObjectName(QStringLiteral("FillAllButton"));
        FillAllButton->setGeometry(QRect(70, 230, 51, 41));
        FillAllButton->setFont(font);
        ClearCanvasButton = new QToolButton(groupBox);
        ClearCanvasButton->setObjectName(QStringLiteral("ClearCanvasButton"));
        ClearCanvasButton->setGeometry(QRect(10, 230, 51, 41));
        FilledRectangleButton = new QToolButton(groupBox);
        FilledRectangleButton->setObjectName(QStringLiteral("FilledRectangleButton"));
        FilledRectangleButton->setGeometry(QRect(70, 180, 51, 41));
        FilledRectangleButton->setFont(font1);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 370, 131, 121));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 30, 55, 16));
        DiameterSpinBox = new QSpinBox(groupBox_2);
        DiameterSpinBox->setObjectName(QStringLiteral("DiameterSpinBox"));
        DiameterSpinBox->setGeometry(QRect(70, 30, 42, 22));
        ColorSelectButton = new QPushButton(groupBox_2);
        ColorSelectButton->setObjectName(QStringLiteral("ColorSelectButton"));
        ColorSelectButton->setGeometry(QRect(10, 90, 111, 28));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 70, 81, 16));
        CurrentColorLabel = new QLabel(groupBox_2);
        CurrentColorLabel->setObjectName(QStringLiteral("CurrentColorLabel"));
        CurrentColorLabel->setGeometry(QRect(90, 70, 31, 16));
        CurrentColorLabel->setFrameShape(QFrame::Box);
        CurrentColorLabel->setAlignment(Qt::AlignCenter);
        line = new QFrame(groupBox_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 50, 111, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(790, 280, 131, 211));
        PreviewLabel = new QLabel(groupBox_3);
        PreviewLabel->setObjectName(QStringLiteral("PreviewLabel"));
        PreviewLabel->setGeometry(QRect(14, 25, 101, 141));
        PreviewLabel->setFrameShape(QFrame::Box);
        PreviewLabel->setAlignment(Qt::AlignCenter);
        PreviewSpeedSpinBox = new QSpinBox(groupBox_3);
        PreviewSpeedSpinBox->setObjectName(QStringLiteral("PreviewSpeedSpinBox"));
        PreviewSpeedSpinBox->setGeometry(QRect(60, 180, 42, 22));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 31, 21));
        AddFrameButton = new QPushButton(centralWidget);
        AddFrameButton->setObjectName(QStringLiteral("AddFrameButton"));
        AddFrameButton->setGeometry(QRect(650, 20, 111, 51));
        ZoomInButton = new QPushButton(centralWidget);
        ZoomInButton->setObjectName(QStringLiteral("ZoomInButton"));
        ZoomInButton->setGeometry(QRect(150, 40, 31, 28));
        ZoomOutButton = new QPushButton(centralWidget);
        ZoomOutButton->setObjectName(QStringLiteral("ZoomOutButton"));
        ZoomOutButton->setGeometry(QRect(190, 40, 31, 28));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 20, 31, 16));
        StepBackButton = new QPushButton(centralWidget);
        StepBackButton->setObjectName(QStringLiteral("StepBackButton"));
        StepBackButton->setGeometry(QRect(780, 70, 93, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 941, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionExport);
        menuEdit->addAction(actionRotate_90);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", Q_NULLPTR));
        actionExport->setText(QApplication::translate("MainWindow", "Export", Q_NULLPTR));
        actionRotate_90->setText(QApplication::translate("MainWindow", "Rotate 90", Q_NULLPTR));
        canvas->setText(QString());
        PreviousFrameButton->setText(QApplication::translate("MainWindow", "Previous Frame", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Next Frame", Q_NULLPTR));
        CurrentFrameLabel->setText(QApplication::translate("MainWindow", "Current Frame Label", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "History", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Tools", Q_NULLPTR));
        PencilToolButton->setText(QApplication::translate("MainWindow", "Pencil", Q_NULLPTR));
        EraserToolButton->setText(QApplication::translate("MainWindow", "Eraser", Q_NULLPTR));
        LineToolButton->setText(QApplication::translate("MainWindow", "Line", Q_NULLPTR));
        BrushToolButton->setText(QApplication::translate("MainWindow", "Brush", Q_NULLPTR));
        MirrorXToolButton->setText(QApplication::translate("MainWindow", "Mirror X", Q_NULLPTR));
        MirrorYToolButton->setText(QApplication::translate("MainWindow", "Mirror Y", Q_NULLPTR));
        RectangleToolButton->setText(QApplication::translate("MainWindow", "Rectangle", Q_NULLPTR));
        FillAllButton->setText(QApplication::translate("MainWindow", "Fill All", Q_NULLPTR));
        ClearCanvasButton->setText(QApplication::translate("MainWindow", "Clear All", Q_NULLPTR));
        FilledRectangleButton->setText(QApplication::translate("MainWindow", "Filled\n"
" Rectangle", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Brush Settings", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Diameter", Q_NULLPTR));
        ColorSelectButton->setText(QApplication::translate("MainWindow", "Color Select", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Current Color", Q_NULLPTR));
        CurrentColorLabel->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Animation", Q_NULLPTR));
        PreviewLabel->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "FPS", Q_NULLPTR));
        AddFrameButton->setText(QApplication::translate("MainWindow", "Add Frame", Q_NULLPTR));
        ZoomInButton->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        ZoomOutButton->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Zoom", Q_NULLPTR));
        StepBackButton->setText(QApplication::translate("MainWindow", "Step Back", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

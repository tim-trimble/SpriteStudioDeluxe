/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
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
    QGridLayout *gridLayout_4;
    QPushButton *AddFrameButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QToolButton *LineToolButton;
    QToolButton *EraserToolButton;
    QToolButton *FilledRectangleButton;
    QToolButton *RectangleToolButton;
    QToolButton *FillAllButton;
    QToolButton *PencilToolButton;
    QToolButton *BrushToolButton;
    QToolButton *MirrorXToolButton;
    QToolButton *MirrorYToolButton;
    QToolButton *ClearCanvasButton;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QPushButton *PreviousFrameButton;
    QLabel *CurrentFrameLabel;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    Canvas *canvas;
    QPushButton *ZoomInButton;
    QPushButton *StepBackButton;
    QPushButton *ZoomOutButton;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QSpinBox *DiameterSpinBox;
    QPushButton *ColorSelectButton;
    QLabel *label_4;
    QLabel *CurrentColorLabel;
    QFrame *line;
    QGroupBox *groupBox_3;
    QLabel *PreviewLabel;
    QGroupBox *groupBox_5;
    QLabel *label_5;
    QSpinBox *PreviewSpeedSpinBox;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(941, 627);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(61, 61, 61);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(33, 33, 33);\n"
""));
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
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        AddFrameButton = new QPushButton(centralWidget);
        AddFrameButton->setObjectName(QStringLiteral("AddFrameButton"));

        gridLayout_4->addWidget(AddFrameButton, 1, 2, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setMinimumSize(QSize(0, 520));
        groupBox->setMaximumSize(QSize(60, 520));
        QFont font;
        font.setPointSize(8);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QStringLiteral("border:0;"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        LineToolButton = new QToolButton(groupBox);
        LineToolButton->setObjectName(QStringLiteral("LineToolButton"));
        LineToolButton->setMinimumSize(QSize(40, 40));
        LineToolButton->setMaximumSize(QSize(40, 40));

        gridLayout_2->addWidget(LineToolButton, 4, 1, 1, 1);

        EraserToolButton = new QToolButton(groupBox);
        EraserToolButton->setObjectName(QStringLiteral("EraserToolButton"));
        EraserToolButton->setMinimumSize(QSize(40, 40));
        EraserToolButton->setMaximumSize(QSize(40, 40));

        gridLayout_2->addWidget(EraserToolButton, 7, 1, 1, 1);

        FilledRectangleButton = new QToolButton(groupBox);
        FilledRectangleButton->setObjectName(QStringLiteral("FilledRectangleButton"));
        FilledRectangleButton->setMinimumSize(QSize(40, 40));
        FilledRectangleButton->setMaximumSize(QSize(40, 40));
        QFont font1;
        font1.setPointSize(7);
        FilledRectangleButton->setFont(font1);

        gridLayout_2->addWidget(FilledRectangleButton, 9, 1, 1, 1);

        RectangleToolButton = new QToolButton(groupBox);
        RectangleToolButton->setObjectName(QStringLiteral("RectangleToolButton"));
        RectangleToolButton->setMinimumSize(QSize(40, 40));
        RectangleToolButton->setMaximumSize(QSize(40, 40));
        RectangleToolButton->setFont(font1);

        gridLayout_2->addWidget(RectangleToolButton, 8, 1, 1, 1);

        FillAllButton = new QToolButton(groupBox);
        FillAllButton->setObjectName(QStringLiteral("FillAllButton"));
        FillAllButton->setMinimumSize(QSize(40, 40));
        FillAllButton->setMaximumSize(QSize(40, 40));
        FillAllButton->setFont(font);

        gridLayout_2->addWidget(FillAllButton, 11, 1, 1, 1);

        PencilToolButton = new QToolButton(groupBox);
        PencilToolButton->setObjectName(QStringLiteral("PencilToolButton"));
        PencilToolButton->setMinimumSize(QSize(40, 40));
        PencilToolButton->setMaximumSize(QSize(40, 40));

        gridLayout_2->addWidget(PencilToolButton, 0, 1, 1, 1);

        BrushToolButton = new QToolButton(groupBox);
        BrushToolButton->setObjectName(QStringLiteral("BrushToolButton"));
        BrushToolButton->setMinimumSize(QSize(40, 40));
        BrushToolButton->setMaximumSize(QSize(40, 40));
        BrushToolButton->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(BrushToolButton, 3, 1, 1, 1);

        MirrorXToolButton = new QToolButton(groupBox);
        MirrorXToolButton->setObjectName(QStringLiteral("MirrorXToolButton"));
        MirrorXToolButton->setMinimumSize(QSize(40, 40));
        MirrorXToolButton->setMaximumSize(QSize(40, 40));

        gridLayout_2->addWidget(MirrorXToolButton, 1, 1, 1, 1);

        MirrorYToolButton = new QToolButton(groupBox);
        MirrorYToolButton->setObjectName(QStringLiteral("MirrorYToolButton"));
        MirrorYToolButton->setMinimumSize(QSize(40, 40));
        MirrorYToolButton->setMaximumSize(QSize(40, 40));

        gridLayout_2->addWidget(MirrorYToolButton, 2, 1, 1, 1);

        ClearCanvasButton = new QToolButton(groupBox);
        ClearCanvasButton->setObjectName(QStringLiteral("ClearCanvasButton"));
        ClearCanvasButton->setMinimumSize(QSize(40, 40));
        ClearCanvasButton->setMaximumSize(QSize(40, 40));

        gridLayout_2->addWidget(ClearCanvasButton, 10, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 4, 0, 8, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setMaximumSize(QSize(16777215, 70));
        groupBox_4->setToolTipDuration(2);
        groupBox_4->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        PreviousFrameButton = new QPushButton(groupBox_4);
        PreviousFrameButton->setObjectName(QStringLiteral("PreviousFrameButton"));
        PreviousFrameButton->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(PreviousFrameButton, 0, 0, 1, 1);

        CurrentFrameLabel = new QLabel(groupBox_4);
        CurrentFrameLabel->setObjectName(QStringLiteral("CurrentFrameLabel"));
        CurrentFrameLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(CurrentFrameLabel, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 0, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_4, 0, 1, 4, 1);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setSizeIncrement(QSize(1, 1));
        scrollArea->setStyleSheet(QStringLiteral("border-color: rgb(95, 95, 95);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 689, 497));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        canvas = new Canvas(scrollAreaWidgetContents);
        canvas->setObjectName(QStringLiteral("canvas"));
        canvas->setCursor(QCursor(Qt::ArrowCursor));
        canvas->setStyleSheet(QLatin1String("alternate-background-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        canvas->setFrameShape(QFrame::Box);
        canvas->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(canvas, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 4, 1, 8, 1);

        ZoomInButton = new QPushButton(centralWidget);
        ZoomInButton->setObjectName(QStringLiteral("ZoomInButton"));

        gridLayout_4->addWidget(ZoomInButton, 1, 0, 1, 1);

        StepBackButton = new QPushButton(centralWidget);
        StepBackButton->setObjectName(QStringLiteral("StepBackButton"));

        gridLayout_4->addWidget(StepBackButton, 2, 2, 1, 1);

        ZoomOutButton = new QPushButton(centralWidget);
        ZoomOutButton->setObjectName(QStringLiteral("ZoomOutButton"));

        gridLayout_4->addWidget(ZoomOutButton, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(140, 140));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(25, 30, 51, 21));
        DiameterSpinBox = new QSpinBox(groupBox_2);
        DiameterSpinBox->setObjectName(QStringLiteral("DiameterSpinBox"));
        DiameterSpinBox->setGeometry(QRect(75, 29, 42, 22));
        DiameterSpinBox->setMinimum(1);
        ColorSelectButton = new QPushButton(groupBox_2);
        ColorSelectButton->setObjectName(QStringLiteral("ColorSelectButton"));
        ColorSelectButton->setGeometry(QRect(15, 90, 111, 28));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 70, 81, 16));
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

        gridLayout_4->addWidget(groupBox_2, 4, 2, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(140, 161));
        groupBox_3->setMaximumSize(QSize(121, 161));
        groupBox_3->setStyleSheet(QStringLiteral("border:0;"));
        PreviewLabel = new QLabel(groupBox_3);
        PreviewLabel->setObjectName(QStringLiteral("PreviewLabel"));
        PreviewLabel->setGeometry(QRect(10, 40, 120, 120));
        PreviewLabel->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        PreviewLabel->setFrameShape(QFrame::Box);
        PreviewLabel->setAlignment(Qt::AlignCenter);
        groupBox_5 = new QGroupBox(groupBox_3);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 0, 71, 31));
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 21, 21));
        PreviewSpeedSpinBox = new QSpinBox(groupBox_5);
        PreviewSpeedSpinBox->setObjectName(QStringLiteral("PreviewSpeedSpinBox"));
        PreviewSpeedSpinBox->setGeometry(QRect(30, 10, 33, 21));

        gridLayout_4->addWidget(groupBox_3, 5, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 941, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        MainWindow->setMenuBar(menuBar);
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
        AddFrameButton->setText(QApplication::translate("MainWindow", "Add Frame", Q_NULLPTR));
        groupBox->setTitle(QString());
        LineToolButton->setText(QApplication::translate("MainWindow", "Line", Q_NULLPTR));
        EraserToolButton->setText(QApplication::translate("MainWindow", "Eraser", Q_NULLPTR));
        FilledRectangleButton->setText(QApplication::translate("MainWindow", "Filled\n"
" Rectangle", Q_NULLPTR));
        RectangleToolButton->setText(QApplication::translate("MainWindow", "Rectangle", Q_NULLPTR));
        FillAllButton->setText(QApplication::translate("MainWindow", "Fill All", Q_NULLPTR));
        PencilToolButton->setText(QApplication::translate("MainWindow", "Pencil", Q_NULLPTR));
        BrushToolButton->setText(QApplication::translate("MainWindow", "Brush", Q_NULLPTR));
        MirrorXToolButton->setText(QApplication::translate("MainWindow", "Mirror X", Q_NULLPTR));
        MirrorYToolButton->setText(QApplication::translate("MainWindow", "Mirror Y", Q_NULLPTR));
        ClearCanvasButton->setText(QApplication::translate("MainWindow", "Clear All", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        PreviousFrameButton->setText(QApplication::translate("MainWindow", "Previous Frame", Q_NULLPTR));
        CurrentFrameLabel->setText(QApplication::translate("MainWindow", "Current Frame Label", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Next Frame", Q_NULLPTR));
        canvas->setText(QString());
        ZoomInButton->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        StepBackButton->setText(QApplication::translate("MainWindow", "Step Back", Q_NULLPTR));
        ZoomOutButton->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_3->setText(QApplication::translate("MainWindow", "Diameter", Q_NULLPTR));
        ColorSelectButton->setText(QApplication::translate("MainWindow", "Color Select", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Current Color", Q_NULLPTR));
        CurrentColorLabel->setText(QString());
        groupBox_3->setTitle(QString());
        PreviewLabel->setText(QString());
        groupBox_5->setTitle(QString());
        label_5->setText(QApplication::translate("MainWindow", "FPS", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

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
    QAction *actionOpen;
    QAction *actionNew;
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QPushButton *ColorSelectButton;
    QGroupBox *groupBox_3;
    QLabel *PreviewLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QToolButton *LineToolButton;
    QToolButton *FilledRectangleButton;
    QToolButton *RectangleToolButton;
    QToolButton *EraserToolButton;
    QToolButton *BrushToolButton;
    QToolButton *PencilToolButton;
    QToolButton *MirrorXToolButton;
    QToolButton *MirrorYToolButton;
    QToolButton *ClearCanvasButton;
    QToolButton *FillAllButton;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QSpinBox *DiameterSpinBox;
    QLabel *label_4;
    QLabel *CurrentColorLabel;
    QPushButton *pushButton_2;
    QPushButton *StepBackButton;
    QLabel *CurrentFrameLabel;
    QPushButton *PreviousFrameButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    Canvas *canvas;
    QPushButton *AddFrameButton;
    QPushButton *ZoomOutButton;
    QPushButton *ZoomInButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(941, 648);
        QIcon icon;
        icon.addFile(QStringLiteral("resources/icons/SSD_Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(61, 61, 61);\n"
"alternate-background-color: rgb(85, 85, 85);\n"
"border-color: rgb(33, 33, 33);\n"
"\n"
""));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        actionRotate_90 = new QAction(MainWindow);
        actionRotate_90->setObjectName(QStringLiteral("actionRotate_90"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        ColorSelectButton = new QPushButton(centralWidget);
        ColorSelectButton->setObjectName(QStringLiteral("ColorSelectButton"));

        gridLayout_4->addWidget(ColorSelectButton, 6, 4, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(140, 161));
        groupBox_3->setMaximumSize(QSize(121, 161));
        groupBox_3->setStyleSheet(QStringLiteral("border:0;"));
        PreviewLabel = new QLabel(groupBox_3);
        PreviewLabel->setObjectName(QStringLiteral("PreviewLabel"));
        PreviewLabel->setGeometry(QRect(0, 10, 141, 141));
        PreviewLabel->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        PreviewLabel->setFrameShape(QFrame::Box);
        PreviewLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(groupBox_3, 7, 4, 1, 1);

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

        EraserToolButton = new QToolButton(groupBox);
        EraserToolButton->setObjectName(QStringLiteral("EraserToolButton"));
        EraserToolButton->setMinimumSize(QSize(40, 40));
        EraserToolButton->setMaximumSize(QSize(40, 40));

        gridLayout_2->addWidget(EraserToolButton, 7, 1, 1, 1);

        BrushToolButton = new QToolButton(groupBox);
        BrushToolButton->setObjectName(QStringLiteral("BrushToolButton"));
        BrushToolButton->setMinimumSize(QSize(40, 40));
        BrushToolButton->setMaximumSize(QSize(40, 40));
        BrushToolButton->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(BrushToolButton, 3, 1, 1, 1);

        PencilToolButton = new QToolButton(groupBox);
        PencilToolButton->setObjectName(QStringLiteral("PencilToolButton"));
        PencilToolButton->setMinimumSize(QSize(40, 40));
        PencilToolButton->setMaximumSize(QSize(40, 40));
        PencilToolButton->setToolTipDuration(-1);

        gridLayout_2->addWidget(PencilToolButton, 0, 1, 1, 1);

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

        gridLayout_2->addWidget(ClearCanvasButton, 11, 1, 1, 1);

        FillAllButton = new QToolButton(groupBox);
        FillAllButton->setObjectName(QStringLiteral("FillAllButton"));
        FillAllButton->setMinimumSize(QSize(40, 40));
        FillAllButton->setMaximumSize(QSize(40, 40));
        FillAllButton->setFont(font);

        gridLayout_2->addWidget(FillAllButton, 10, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 5, 0, 9, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(140, 60));
        groupBox_2->setMaximumSize(QSize(140, 100));
        groupBox_2->setStyleSheet(QStringLiteral("border: 0;"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 81, 21));
        DiameterSpinBox = new QSpinBox(groupBox_2);
        DiameterSpinBox->setObjectName(QStringLiteral("DiameterSpinBox"));
        DiameterSpinBox->setGeometry(QRect(100, 9, 31, 22));
        DiameterSpinBox->setMinimum(1);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 35, 81, 16));
        CurrentColorLabel = new QLabel(groupBox_2);
        CurrentColorLabel->setObjectName(QStringLiteral("CurrentColorLabel"));
        CurrentColorLabel->setGeometry(QRect(90, 37, 31, 16));
        CurrentColorLabel->setFrameShape(QFrame::Box);
        CurrentColorLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(groupBox_2, 5, 4, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(150, 16777215));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(79, 79, 79);"));

        gridLayout_4->addWidget(pushButton_2, 3, 3, 2, 1);

        StepBackButton = new QPushButton(centralWidget);
        StepBackButton->setObjectName(QStringLiteral("StepBackButton"));
        StepBackButton->setStyleSheet(QStringLiteral("background-color: rgb(79, 79, 79);"));

        gridLayout_4->addWidget(StepBackButton, 4, 4, 1, 1);

        CurrentFrameLabel = new QLabel(centralWidget);
        CurrentFrameLabel->setObjectName(QStringLiteral("CurrentFrameLabel"));
        CurrentFrameLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(CurrentFrameLabel, 3, 2, 2, 1);

        PreviousFrameButton = new QPushButton(centralWidget);
        PreviousFrameButton->setObjectName(QStringLiteral("PreviousFrameButton"));
        PreviousFrameButton->setMaximumSize(QSize(150, 16777215));
        PreviousFrameButton->setStyleSheet(QStringLiteral("background-color: rgb(79, 79, 79);"));

        gridLayout_4->addWidget(PreviousFrameButton, 3, 1, 2, 1);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setSizeIncrement(QSize(1, 1));
        scrollArea->setStyleSheet(QStringLiteral("border-color: rgb(95, 95, 95);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 694, 529));
        scrollAreaWidgetContents->setStyleSheet(QStringLiteral("border-color: rgb(65, 65, 65);"));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        canvas = new Canvas(scrollAreaWidgetContents);
        canvas->setObjectName(QStringLiteral("canvas"));
        canvas->setCursor(QCursor(Qt::ArrowCursor));
        canvas->setStyleSheet(QLatin1String("alternate-background-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"border:0;"));
        canvas->setFrameShape(QFrame::Box);
        canvas->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(canvas, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 5, 1, 9, 3);

        AddFrameButton = new QPushButton(centralWidget);
        AddFrameButton->setObjectName(QStringLiteral("AddFrameButton"));
        AddFrameButton->setStyleSheet(QStringLiteral("background-color: rgb(79, 79, 79);"));

        gridLayout_4->addWidget(AddFrameButton, 3, 4, 1, 1);

        ZoomOutButton = new QPushButton(centralWidget);
        ZoomOutButton->setObjectName(QStringLiteral("ZoomOutButton"));
        ZoomOutButton->setStyleSheet(QStringLiteral("background-color: rgb(79, 79, 79);"));

        gridLayout_4->addWidget(ZoomOutButton, 4, 0, 1, 1);

        ZoomInButton = new QPushButton(centralWidget);
        ZoomInButton->setObjectName(QStringLiteral("ZoomInButton"));
        ZoomInButton->setStyleSheet(QStringLiteral("background-color: rgb(79, 79, 79);"));

        gridLayout_4->addWidget(ZoomInButton, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 941, 21));
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
        menuFile->addAction(actionNew);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionExport);
        menuFile->addAction(actionOpen);
        menuEdit->addAction(actionRotate_90);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sprite Studio Deluxe", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", Q_NULLPTR));
        actionExport->setText(QApplication::translate("MainWindow", "Export", Q_NULLPTR));
        actionRotate_90->setText(QApplication::translate("MainWindow", "Rotate 90", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ColorSelectButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ColorSelectButton->setText(QApplication::translate("MainWindow", "Color Select", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        PreviewLabel->setText(QString());
        groupBox->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        LineToolButton->setToolTip(QApplication::translate("MainWindow", "Line tool", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LineToolButton->setText(QApplication::translate("MainWindow", "Line", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FilledRectangleButton->setToolTip(QApplication::translate("MainWindow", "Filled rectangle tool", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        FilledRectangleButton->setText(QApplication::translate("MainWindow", "Filled\n"
" Rectangle", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RectangleToolButton->setToolTip(QApplication::translate("MainWindow", "Rectangle tool", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RectangleToolButton->setText(QApplication::translate("MainWindow", "Rectangle", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        EraserToolButton->setToolTip(QApplication::translate("MainWindow", "Eraser tool", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        EraserToolButton->setText(QApplication::translate("MainWindow", "Eraser", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BrushToolButton->setToolTip(QApplication::translate("MainWindow", "Brush tool", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BrushToolButton->setText(QApplication::translate("MainWindow", "Brush", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PencilToolButton->setToolTip(QApplication::translate("MainWindow", "Pencil tool", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        PencilToolButton->setText(QApplication::translate("MainWindow", "Pencil", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MirrorXToolButton->setToolTip(QApplication::translate("MainWindow", "Pencil tool mirrored accross y-axis", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MirrorXToolButton->setText(QApplication::translate("MainWindow", "Mirror X", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MirrorYToolButton->setToolTip(QApplication::translate("MainWindow", "Pencil tool mirrored accross x-axis", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MirrorYToolButton->setText(QApplication::translate("MainWindow", "Mirror Y", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ClearCanvasButton->setToolTip(QApplication::translate("MainWindow", "Clear frame", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ClearCanvasButton->setText(QApplication::translate("MainWindow", "Clear All", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FillAllButton->setToolTip(QApplication::translate("MainWindow", "Fill frame", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        FillAllButton->setText(QApplication::translate("MainWindow", "Fill All", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_3->setText(QApplication::translate("MainWindow", "Stroke Diameter", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Current Color", Q_NULLPTR));
        CurrentColorLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("MainWindow", "Next Frame", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        StepBackButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        StepBackButton->setText(QApplication::translate("MainWindow", "Step Back", Q_NULLPTR));
        CurrentFrameLabel->setText(QApplication::translate("MainWindow", "Current Frame: 1/1", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PreviousFrameButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PreviousFrameButton->setText(QApplication::translate("MainWindow", "Previous Frame", Q_NULLPTR));
        canvas->setText(QString());
#ifndef QT_NO_TOOLTIP
        AddFrameButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        AddFrameButton->setText(QApplication::translate("MainWindow", "Add Frame", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ZoomOutButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ZoomOutButton->setText(QApplication::translate("MainWindow", "Zoom Out", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ZoomInButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ZoomInButton->setText(QApplication::translate("MainWindow", "Zoom In", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

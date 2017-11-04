#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>
#include <QPixmap>
#include <iostream>

MainWindow::MainWindow(Project& project, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //CANVAS CONNECTIONS
    connect(ui->canvas, SIGNAL(Mouse_Down()), this, SLOT(Mouse_Down()));
    connect(ui->canvas, SIGNAL(Mouse_Up()), this, SLOT(Mouse_Up()));
    connect(ui->canvas, SIGNAL(Mouse_DownPos()), this, SLOT(Mouse_DownPos()));
    connect(ui->canvas, SIGNAL(Mouse_Left()), this, SLOT(Mouse_Left()));

    std::cout << "HERE IS THE CONSOLE MOTHER FUCKER" << std::endl;
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::Mouse_DownPos()
{
    int x = ui->canvas->x;
    int y = ui->canvas->y;
    std::cout << x << y << std::endl;
    emit MousePosWhilePressed(x, y);
}

void MainWindow::Mouse_Down()
{
    int x = ui->canvas->x;
    int y = ui->canvas->y;
    std::cout << x << y << std::endl;
    emit MouseDown(x, y);
}

void MainWindow::Mouse_Up()
{
    int x = ui->canvas->x;
    int y = ui->canvas->y;
    std::cout << x << y << std::endl;
    emit MouseUp(x, y);
}

void MainWindow::Mouse_Left()
{
    emit MouseLeft();
}


// QT AUTO IMPLEMENTED EVENT HANDLERS

void MainWindow::on_PencilToolButton_clicked()
{
    emit PencilToolSelected();
}

void MainWindow::on_BrushToolButton_clicked()
{
    emit BrushToolSelected();
}

void MainWindow::on_LineToolButton_clicked()
{
    emit LineToolSelected();
}

void MainWindow::on_EraserToolButton_clicked()
{
    emit EraserToolSelected();
}

void MainWindow::on_DiameterSpinBox_editingFinished()
{
    int x = ui->DiameterSpinBox->value();
    emit BrushSizeChanged(x);
}

void MainWindow::on_ColorSelectButton_clicked()
{
    // Get the color from a color dialog
    QColor color = QColorDialog::getColor(Qt::white, this);

    // assign the current color label that selected color
    QImage newColorSwatch(40, 40, QImage::Format_ARGB32);
    newColorSwatch.fill(color);
    ui->CurrentColorLabel->setPixmap(QPixmap::fromImage(newColorSwatch));
    ui->CurrentColorLabel->show();

    // emit Brush color change event so the model knows
    emit BrushColorChanged(color);
}

void MainWindow::on_PreviousFrameButton_clicked()
{
    emit PreviousFrameRequested();
}

void MainWindow::on_pushButton_2_clicked()
{
    emit NextFrameRequested();
}

void MainWindow::on_AddFrameButton_clicked()
{
    emit NewFrameRequested();
}

void MainWindow::on_LoadHistoryButton_clicked()
{
    emit HistoryReversionRequested();
}

void MainWindow::on_PreviewSpeedSpinBox_editingFinished()
{
    int x = ui->PreviewSpeedSpinBox->value();
    emit PreviewFPSChanged(x);
}

void MainWindow::on_ZoomInButton_clicked()
{
    emit ZoomInRequested();
}

void MainWindow::on_ZoomOutButton_clicked()
{
    emit ZoomOutRequested();
}

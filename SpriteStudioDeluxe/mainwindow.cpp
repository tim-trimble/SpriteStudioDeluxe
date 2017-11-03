#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(Project& project, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_PencilToolButton_clicked()
{

}

void MainWindow::on_BrushToolButton_clicked()
{

}

void MainWindow::on_LineToolButton_clicked()
{

}

void MainWindow::on_EraserToolButton_clicked()
{

}

void MainWindow::on_DiameterSpinBox_editingFinished()
{

}

void MainWindow::on_ColorSelectButton_clicked()
{

}

void MainWindow::on_PreviousFrameButton_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_AddFrameButton_clicked()
{

}

void MainWindow::on_LoadHistoryButton_clicked()
{

}

void MainWindow::on_PreviewSpeedSpinBox_editingFinished()
{

}

void MainWindow::on_ZoomInButton_clicked()
{

}

void MainWindow::on_ZoomOutButton_clicked()
{

}

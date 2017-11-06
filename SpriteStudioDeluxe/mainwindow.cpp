#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>
#include <QPixmap>
#include <iostream>
#include <QListWidgetItem>
#include <string>

MainWindow::MainWindow(Project& project, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->canvas->setAlignment(Qt::AlignTop);
    ui->canvas->setAlignment(Qt::AlignLeft);

    //CANVAS CONNECTIONS
    connect(ui->canvas, SIGNAL(c_mouse_down()), this, SLOT(c_mouse_down()));
    connect(ui->canvas, SIGNAL(c_mouse_up()), this, SLOT(c_mouse_up()));
    connect(ui->canvas, SIGNAL(c_mouse_down_pos(int, int)), this, SLOT(c_mouse_down_pos()));
    connect(ui->canvas, SIGNAL(c_mouse_left()), this, SLOT(c_mouse_left()));
    connect(ui->canvas, SIGNAL(c_mouse_down_pos(int, int)), &project, SLOT(mouse_down_pos(int, int)));

    connect(this, SIGNAL(brush_color_changed(QColor)), &project, SLOT(change_color(QColor)));

    connect(this, SIGNAL(new_frame_requested()), &project, SLOT(add_frame()));

    //PROJECT SIGNALS
    connect(&project, SIGNAL(update_frame_label(int,int)), this, SLOT(update_current_frame_label(int,int)));
    connect(&project, SIGNAL(send_update(QImage*)), this, SLOT(update_canvas(QImage*)));

    project.update_canvas();
}

MainWindow::~MainWindow(){
    delete ui;
}

// PROJECT SIGNAL HANDLERS

void MainWindow::update_canvas(QImage *i)
{
    ui->canvas->setPixmap(QPixmap::fromImage(*i));
    ui->canvas->show();
}

void MainWindow::update_preview(QImage *i)
{
    ui->PreviewLabel->setPixmap(QPixmap::fromImage(*i));
    ui->PreviewLabel->show();
}

void MainWindow::update_current_frame_label(int current_frame, int total_frames)
{
    QString s(("Current Frame: " + std::to_string(current_frame) + "/" + std::to_string(total_frames)).c_str());
    ui->CurrentFrameLabel->setText(s);
}

void MainWindow::add_history_menu_entry(std::string name, std::string hash)
{
    QListWidgetItem i;
    i.setText(name.c_str());
    i.setToolTip(hash.c_str());
    ui->HistoryList->addItem(&i);
}


// CANVAS SIGNAL HANDLERS

void MainWindow::c_mouse_down_pos()
{
    int x = ui->canvas->x;
    int y = ui->canvas->y;
    std::cout << x << y << std::endl;
    emit mouse_down_pos(x, y);
}

void MainWindow::c_mouse_down()
{
    int x = ui->canvas->x;
    int y = ui->canvas->y;
    std::cout << x << y << std::endl;
    emit mouse_down(x, y);
}

void MainWindow::c_mouse_up()
{
    int x = ui->canvas->x;
    int y = ui->canvas->y;
    std::cout << x << y << std::endl;
    emit mouse_up(x, y);
}

void MainWindow::c_mouse_left()
{
    emit mouse_left();
}


// QT AUTO IMPLEMENTED SIGNAL HANDLERS

void MainWindow::on_PencilToolButton_clicked()
{
    emit pencil_tool_selected();
}

void MainWindow::on_BrushToolButton_clicked()
{
    emit brush_tool_selected();
}

void MainWindow::on_LineToolButton_clicked()
{
    emit line_tool_selected();
}

void MainWindow::on_EraserToolButton_clicked()
{
    emit eraser_tool_selected();
}

void MainWindow::on_DiameterSpinBox_editingFinished()
{
    int x = ui->DiameterSpinBox->value();
    emit brush_size_changed(x);
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
    emit brush_color_changed(color);
}

void MainWindow::on_PreviousFrameButton_clicked()
{
    emit previous_frame_requested();
}

void MainWindow::on_pushButton_2_clicked()
{
    emit next_frame_requested();
}

void MainWindow::on_AddFrameButton_clicked()
{
    std::cout << "add frame" << std::endl;
    emit new_frame_requested();
}

void MainWindow::on_LoadHistoryButton_clicked()
{
    emit history_reversion_requested();
}

void MainWindow::on_PreviewSpeedSpinBox_editingFinished()
{
    int x = ui->PreviewSpeedSpinBox->value();
    emit preview_fps_changed(x);
}

void MainWindow::on_ZoomInButton_clicked()
{
    emit zoom_in_requested();
}

void MainWindow::on_ZoomOutButton_clicked()
{
    emit zoom_out_requested();
}

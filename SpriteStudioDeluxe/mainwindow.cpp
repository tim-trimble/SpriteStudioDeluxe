#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>
#include <QPixmap>
#include <iostream>
#include <QListWidgetItem>
#include <string>
#include "tools.h"

MainWindow::MainWindow(Project& project, Tools& tools, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // STARTING CONDITIONS
    ui->setupUi(this);
    ui->canvas->setAlignment(Qt::AlignTop);
    ui->canvas->setAlignment(Qt::AlignLeft);
    project.update_canvas();
    project.update_frame_label(1,1);
    ui->CurrentColorLabel->setStyleSheet("QLabel { background-color : black; color : black; }");
    ui->PreviewSpeedSpinBox->setValue(1);
    ui->PreviewSpeedSpinBox->setMinimum(1);
    ui->PreviewSpeedSpinBox->setMaximum(5);

    // QIMAGE UPDATE CONNECTIONS
    connect(&tools, SIGNAL(update_can(QImage*)), this, SLOT(update_canvas(QImage*)));
    connect(&project, SIGNAL(send_update(QImage*)), this, SLOT(update_canvas(QImage*)));
    connect(project.preview, SIGNAL(thread_end(QImage*)), this, SLOT(update_preview(QImage*)));

    //MOUSE ACTION CONNECTIONS
    connect(ui->canvas, SIGNAL(c_mouse_down()), this, SLOT(c_mouse_down()));
    connect(ui->canvas, SIGNAL(c_mouse_up()), this, SLOT(c_mouse_up()));
    connect(ui->canvas, SIGNAL(c_mouse_down_pos(int, int)), this, SLOT(c_mouse_down_pos()));
    connect(ui->canvas, SIGNAL(c_mouse_left()), this, SLOT(c_mouse_left()));
    connect(this, SIGNAL(mouse_drag(int, int)), &tools, SLOT(on_mouse_drag(int,int)));
    connect(this, SIGNAL(mouse_down(int, int)), &tools, SLOT(on_mouse_down(int,int)));
    connect(this, SIGNAL(mouse_up(int, int)), &tools, SLOT(on_mouse_up(int,int)));

    //FRAME CONNECTIONS
    connect(this, SIGNAL(new_frame_requested()), &project, SLOT(add_frame()));
    connect(this, SIGNAL(next_frame_requested()), &project, SLOT(next_frame()));
    connect(this, SIGNAL(previous_frame_requested()), &project, SLOT(previous_frame()));
    connect(&project, SIGNAL(frame_changed(Frame*)), &tools, SLOT(frame_changed(Frame*)));
    connect(&project, SIGNAL(update_frame_label(int,int)), this, SLOT(update_current_frame_label(int,int)));

    //PREVIEW CONNECTIONS
    connect(ui->PreviewSpeedSpinBox, SIGNAL(valueChanged(int)), project.preview, SLOT(set_speed(int)));

    // TOOL CHANGE CONNECTIONS
    connect(this, SIGNAL(tool_changed(int)), &tools, SLOT(tool_selected(int)));
    connect(this, SIGNAL(brush_size_changed(int)), &tools, SLOT(brush_size_changed(int)));
    connect(this, SIGNAL(brush_color_changed(QColor)), &tools, SLOT(change_color(QColor)));
    connect(this, SIGNAL(clear_canvas()), &tools, SLOT(clear_canvas()));
    connect(this, SIGNAL(fill_canvas()), &tools, SLOT(fill_canvas()));
    connect (this, SIGNAL(history_reversion_requested()), &project, SLOT(history_step_back()));
    connect(this, SIGNAL(clear_canvas()), &tools, SLOT(clear_canvas()));
    connect(this, SIGNAL(fill_canvas()), &tools, SLOT(fill_canvas()));

}

MainWindow::~MainWindow(){
    delete ui;
}


// PROJECT SIGNAL HANDLERS

void MainWindow::update_canvas(QImage *i)
{
    ui->canvas->setPixmap(QPixmap::fromImage(*i));
    ui->canvas->setMaximumSize(i->size());
    ui->canvas->setMinimumSize(i->size());
    ui->canvas->show();
}

void MainWindow::update_preview(QImage *i)
{
    ui->PreviewLabel->setPixmap(QPixmap::fromImage(*i));
    ui->PreviewLabel->setScaledContents(true);
    ui->PreviewLabel->show();
}

void MainWindow::update_current_frame_label(int current_frame, int total_frames)
{
    QString s(("Current Frame: " + std::to_string(current_frame) + "/" + std::to_string(total_frames)).c_str());
    ui->CurrentFrameLabel->setText(s);
}


// CANVAS SIGNAL HANDLERS

void MainWindow::c_mouse_down_pos()
{
    int x = ui->canvas->x;
    int y = ui->canvas->y;
    emit mouse_drag(x, y);
}

void MainWindow::c_mouse_down()
{
    int x = ui->canvas->x;
    int y = ui->canvas->y;
    emit mouse_down(x, y);
}

void MainWindow::c_mouse_up()
{
    int x = ui->canvas->x;
    int y = ui->canvas->y;
    emit mouse_up(x, y);
}

void MainWindow::c_mouse_left()
{
    emit mouse_left();
}


// QT AUTO IMPLEMENTED SIGNAL HANDLERS

void MainWindow::on_PencilToolButton_clicked()
{
    std::cout << "pencil" << std::endl;
    emit tool_changed(1);
}

void MainWindow::on_BrushToolButton_clicked()
{
    std::cout << "brush" << std::endl;
    emit tool_changed(2);
}

void MainWindow::on_LineToolButton_clicked()
{
    std::cout << "line" << std::endl;
    emit tool_changed(3);
}

void MainWindow::on_EraserToolButton_clicked()
{
    std::cout << "eraser" << std::endl;
    emit tool_changed(4);
}

void MainWindow::on_MirrorXToolButton_clicked()
{
    std::cout << "mirrorx" << std::endl;
    emit tool_changed(5);
}
void MainWindow::on_MirrorYToolButton_clicked()
{
    std::cout << "mirrory" << std::endl;
    emit tool_changed(6);
}

void MainWindow::on_DiameterSpinBox_editingFinished()
{
    std::cout << "spinbox" << std::endl;
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

void MainWindow::on_StepBackButton_clicked()
{
    emit history_reversion_requested();
}

void MainWindow::on_RectangleToolButton_clicked()
{
    emit tool_changed(7);
}

void MainWindow::on_FilledRectangleButton_clicked()
{
    emit tool_changed(8);
}

void MainWindow::on_ClearCanvasButton_clicked()
{
    emit clear_canvas();
}

void MainWindow::on_FillAllButton_clicked()
{
    emit fill_canvas();
}

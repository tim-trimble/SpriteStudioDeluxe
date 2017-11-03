#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "project.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(Project& project, QWidget *parent = 0);
    ~MainWindow();

signals:
    // TOOL SIGNALS
    // Intended Reciever: Tool Class
    void PencilToolSelected();
    void BrushToolSelected();
    void LineToolSelected();
    void EraserToolSelected();

    // BRUSH SIGNALS
    // Intended Reciever: Tool Class
    void BrushSizeChanged(int d);
    void BrushColorChanged(QColor c);

    // FRAME SIGNALS
    // Intended Reciever: Project Class
    void NextFrameRequested();
    void PreviousFrameRequested();
    void NewFrameRequested();

    // HISTORY MENU
    // Intended Reciever: Project Class
    // unsure if Hash is the type we will be using to identify history frames, open to changing this.
    void HistoryReversionRequested(Hash h);

    // PREVIEW MENU
    // Intended Reciever: (???)
    void PriviewFPSChanged(int fps);

    // ZOOM BUTTONS
    // Not Concern of Model
    void ZoomInRequested();
    void ZoomOutRequested();

    // CANVAS
    void MouseDown(int x, int y);
    void MouseMoveWhilePressed(int x, int y);
    void MouseUp(int x, int y);

private slots:
    // CUSTOM SLOTS
    // CANVAS
    void UpdateCanvas(QImage * i);
    // PREVIEW
    void UpdatePreview(QImage * i);
    // FRAME LABEL
    void UpdateCurrentFrameLabel(int currentFrame, int totalFrames);
    // HISTORY MENU
    // What argument will this take?
    void AddHistoryMenuEntry();

    // QT GENERATED SLOTS FOR UI ACTIONS
    void on_PencilToolButton_clicked();
    void on_BrushToolButton_clicked();
    void on_LineToolButton_clicked();
    void on_EraserToolButton_clicked();
    void on_DiameterSpinBox_editingFinished();
    void on_ColorSelectButton_clicked();
    void on_PreviousFrameButton_clicked();
    void on_pushButton_2_clicked();
    void on_AddFrameButton_clicked();
    void on_LoadHistoryButton_clicked();
    void on_PreviewSpeedSpinBox_editingFinished();
    void on_ZoomInButton_clicked();
    void on_ZoomOutButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

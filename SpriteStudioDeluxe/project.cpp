#include "project.h"
#include "qgifimage.h"

Project::Project(int x, int y)
{
    //INIT PROJECT
    current_index = 0;
    zoom_level = .125;
    frames = new QVector<Frame*>();
    frames->append(new Frame(x, y, zoom_level));
    current_frame = frames->at(0);

    //INIT PREVIEW ANIMATION
    preview_thread = new QThread();
    preview = new PreviewObject(current_frame->get_image());
    preview_index = 0;
    preview->moveToThread(preview_thread);
    connect(this, SIGNAL(send_preview_frame(QImage*)), preview, SLOT(thread_start()));
    connect(preview, SIGNAL(thread_end(QImage*)), this, SLOT(thread_end()));
    preview_thread->start();
    emit send_preview_frame(current_frame->get_image());

    // HISTORY
    history = * new QVector<std::stack<QImage*>>(100);
    history[0] = * new std::stack<QImage*>;
}

Project::~Project()
{
    preview_thread->terminate();
    preview_thread->wait();
    delete preview_thread;
    delete preview;

    for(int i = 0; i < frames->size(); i++){
        delete frames->at(i);
    }
    delete frames;
}

void Project::thread_end()
{
    if(preview_index >= frames->size() - 1){
        preview_index = 0;
    } else{
        preview_index += 1;
    }

    preview->image = frames->at(preview_index)->get_image();

    emit send_preview_frame(current_frame->get_image());
}

void Project::update_canvas()
{
    emit send_update(current_frame->get_image());
}

void Project::mouse_down_pos(int x, int y)
{
    current_frame->edit_pixel(x, y, current_color);
    update_canvas();
}

void Project::change_color(QColor c)
{
    current_color = c;
}

void Project::add_frame()
{
    emit update_frame_label(current_index + 1, frames->size() + 1);
    frames->append(new Frame(*current_frame->get_image()));
    history.append(* new std::stack<QImage*>);

    QThread::sleep(0.5);
}

Frame* Project::get_frame()
{
    return current_frame;
}

void Project::next_frame()
{
    if(frames->size() == current_index + 1){
        current_index = 0;
        current_frame = frames->at(current_index);
    } else {
        current_index += 1;
        current_frame = frames->at(current_index);
    }
    emit frame_changed(current_frame);
    emit update_frame_label(current_index + 1, frames->size());
    update_canvas();
}

void Project::previous_frame()
{
    if(current_index == 0){
        current_index = frames->size() - 1;
        current_frame = frames->at(current_index);
    } else {
        current_index -= 1;
        current_frame = frames->at(current_index);
    }
    emit frame_changed(current_frame);
    emit update_frame_label(current_index + 1, frames->size());
    update_canvas();
}

void Project::rotate_frame(){
    Frame* new_frame = frames->at(current_index);
    new_frame->rotate_image(90);
    frames->replace(current_index, new_frame);
    current_frame = new_frame;

    emit frame_changed(current_frame);
    update_canvas();
}

void Project::save_project(QString filename)
{
    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly))
    {
        return;
    }
    else
    {
        QTextStream out(&file);
        int x = frames->at(0)->get_x();
        int y = frames->at(0)->get_y();
        out << QString::number(x) << QString(" ") << QString::number(y) << QString("\n");
        out << QString::number(frames->size()) << QString("\n");
        for(int i = 0; i < frames->size(); i++)
        {
            QImage img = *frames->at(i)->get_image();
            img.setDevicePixelRatio(1);
            for(int j = 0; j < y; j++)
            {
                for (int k = 0; k < x; k++)
                {
                    QColor color= img.pixelColor(k, j);
                    out << color.red() << " " << color.green() << " " << color.blue() << " " << color.alpha() << " ";
                }
                out << QString("\n");
            }
        }
        file.close();
    }
}

void Project::load_project(QString filename)
{
    zoom_level = .5;

    //clear frame history stacks from project we are loading over
    history.clear();

    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly))
    {
        return;
    }
    else
    {
        // QTextStream >> reads in 1 string at a time stopping at white space or end of line
        // thus it must be read multiple times to get the correct data
        QTextStream in(&file);
        frames->clear();
        QString str;
        in >> str;
        int x = str.toInt();
        str.clear();
        in >> str;
        int y = str.toInt();
        str.clear();
        in >> str;
        int frame_count = str.toInt();
        for(int i = 0; i< frame_count; i++)
        {
            //for each new frame added, add a history stack for it in our history vector
            history.append(* new std::stack<QImage*>);

            Frame * f = new Frame(x, y, zoom_level);
            for(int j = 0; j < y - 1; j++)
            {
                for(int k = 0; k < x; k++)
                {
                    QColor color;
                    str.clear();
                    in >> str;
                    color.setRed(str.toInt());
                    str.clear();
                    in >> str;
                    color.setGreen(str.toInt());
                    str.clear();
                    in >> str;
                    color.setBlue(str.toInt());
                    str.clear();
                    in >> str;
                    color.setAlpha(str.toInt());
                    f->edit_pixel(k, j, color);
                }
            }
            frames->append(f);
        }
        file.close();
        current_frame = frames->at(0);
        current_index = 0;
        update_canvas();
        emit frame_changed(current_frame);
        emit update_frame_label(current_index + 1, frames->length());
    }
}

void Project::export_project(QString filename)
{
    if(filename.isEmpty())
    {
        return;
    }
    if(filename.split(".").at(1) == "gif")
    {
        // gif can only hold 256 colors in its pallete, this section here adds basic colors
        // and also an equal spread of colors between different values of rgb
        // 6^3 gives the number of colors in the triple loop which is 216. An additional 9 colors
        // give our gifs a total of 225 colors in their pallette
        QGifImage gif(QSize(frames->at(0)->get_x(), frames->at(0)->get_y()));
        QVector<QRgb> ctable;
        ctable << qRgb(255, 255, 255)
               << qRgb(0, 0, 0)
               << qRgb(255, 0, 0)
               << qRgb(0, 255, 0)
               << qRgb(0, 0, 255)
               << qRgb(255, 255, 0)
               << qRgb(0, 255, 255)
               << qRgb(255, 0, 255)
               << qRgb (16, 16, 16);
        for(int r = 42; r < 256; r+= 42)
        {
            for(int g = 42; g < 256; g+= 42)
            {
                for(int b = 42; b < 256; b+= 42)
                {
                    ctable << qRgb(r, g, b);
                }
            }
        }

        gif.setGlobalColorTable(ctable, Qt::white);
        gif.setDefaultTransparentColor(QColor(16, 16, 16));
        gif.setDefaultDelay(100);
        for(int i=0; i < frames->size(); i++)
        {
            QImage img(*frames->at(i)->get_image());
            img.setDevicePixelRatio(1);
            gif.addFrame(img);
        }
        gif.save(filename);
    }
    else if (filename.split(".").at(1) == "png")
    {
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice:: Truncate))
        {
            QImage img(*frames->at(0)->get_image());
            img.setDevicePixelRatio(1);

            // creates a new image to add each frame to from left to right
            QImage export_image(img.width() * frames->size(), img.height(), QImage::Format_ARGB32);
            for(int i = 0; i < frames->size(); i++)
            {
                img = QImage(*frames->at(i)->get_image());
                img.setDevicePixelRatio(1);
                for(int x = 0; x < img.width(); x++)
                {
                    for(int y = 0; y < img.height(); y++)
                    {
                        QColor color = img.pixelColor(x, y);
                        export_image.setPixelColor(x + (i*img.width()), y, color);
                    }
                }
            }
            export_image.save(&file, "PNG");
        }
    }
}

// called when the UI requests to go back one frame of history
void Project::history_step_back()
{
    if (history[current_index].size() == 0)
    {
        return;
    }

    current_frame->set_image(history[current_index].top());
    history[current_index].top()->setDevicePixelRatio(zoom_level);
    history[current_index].pop();
    update_canvas();
    emit frame_changed(current_frame);
}

void Project::zoom_in()
{
    if (zoom_level == .0625)
    {
        return;
    }

    zoom_level /= 2;

    for(int i = 0; i < frames->count() ; i++)
    {
        frames->at(i)->set_device_pixel_ratio(zoom_level);
    }

    update_canvas();
}

void Project::zoom_out()
{
    if (zoom_level == 1)
    {
        return;
    }

    zoom_level *= 2;

    for(int i = 0; i < frames->count() ; i++)
    {
        frames->at(i)->set_device_pixel_ratio(zoom_level);
    }

    update_canvas();
}

void Project::new_project()
{
    emit hide_window();

    //INIT PROJECT
    current_index = 0;
    zoom_level = .125;
    frames->clear();
    frames->append(new Frame(64, 64, zoom_level));
    current_frame = frames->at(0);
    update_canvas();
    emit frame_changed(frames->at(0));
    emit update_frame_label(1, 1);

    QThread::sleep(0.5);
    emit show_window();
}


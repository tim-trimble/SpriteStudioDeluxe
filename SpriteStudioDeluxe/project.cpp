#include "project.h"

Project::Project(int x, int y)
{
    frames = new Frame[];
    Frame f(x, y);
    frames->addFrame(f);
}

Project::~Project()
{
    for(unsigned i = 0; i < f
}

#include "project.h"

Project::Project(int x, int y, int startframes)
{
    for(unsigned i = 0; i < startframes; i++)
    {
        frames.push_back(Frame(x, y));
    }
    currentFrame = frames[0];
}

Project::~Project(){}

#include"resizablearray.h"

ResizableArray::ResizableArray(int startSize)
{
    length = startSize;
    data = new T[length];
    count = 0;
}
ResizableArray::~ResizableArray()
{
    delete [] data;
}

ResizableArray::ResizableArray(const ResizableArray &other)
{
    length = other.length;
    data = new T[length];
    for(unsigned i = 0; i < other.count; i++)
    {
        data[i] = other[i];
    }
}

T ResizableArray::operator [](int index) const
{
    return data[index];
}

T& ResizableArray::operator [](int index)
{
    return data[index];
}

ResizableArray& ResizableArray::operator =(ResizableArray other)
{
    swap(length, other.length);
    swap(count, other.count);
    swap(data, other.data);
    return *this;
}

int ResizableArray::count()
{
    return count;
}

int ResizableArray::length()
{
    return length;
}

void ResizableArray::resize(int newsize)
{
    T *newdata = T[newsize];
    for(unsigned i = 0; i < count; i++)
    {
        newdata[i] = data[i];
    }
    delete [] data;
    data = newdata;
    length = length;
}

void ResizableArray::additem(T item)
{
    if(count == length)
    {
        resize(length * 2);
    }
    data[count] = item;
}

void ResizableArray::removeitem(T item)
{
    int index;
    for(unsigned i = 0; i < count; i++)
    {
        if(data[i] == item)
        {
            index = i;
            break;
        }
    }
    for(unsigned i = index; i < count; i++)
    {
        data[i] = data[i+1];
    }
    delete data[count];
    count--;
}

#ifndef RESIZABLEARRAY_H
#define RESIZABLEARRAY_H

/* The Resizable Array class takes a template of items T
 * and stores them in an array which resizes itself if
 * using the additem method.
 *
 * This implementation is based on the DArray presented by
 * David Johnson in the Fall 2017 semester of CS 3505 at
 * the University of Utah.
 */
template<T>
class ResizableArray
{
    T * data[];
    int count;
    int length;

public:
    ResizableArray(int startSize);
    ~ResizableArray();
    ResizableArray(const ResizableArray & other);

    T operator[](int index) const;
    ResizableArray& operator=(ResizableArray other);

    int count();
    int length();
    void resize(int newsize);
    void additem(T item);
    void removeitem(T item);
};
#endif // RESIZABLEARRAY_H

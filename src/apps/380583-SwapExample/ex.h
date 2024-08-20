#ifndef EXERCISE_H
#define EXERCISE_H

template <class T>
void swap_data(T& x, T& y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

#endif // _EXERCISE_H



#include "exercise.h"
#include <iostream>

//YOUR IMPLEMENTATIONS WILL GO IN THIS FILE. DON'T TOUCH THE HEADER FILE

//Implementation of the default constructor and destructor

//Implementation for the copy and move constructors


//Implemetations for the copy and move assignment operators


void MovableStack::push(int value) {
    if (size == capacity) {
        int* newData = new int[capacity * 2];
        std::copy(data, data + size, newData);
        delete[] data;
        data = newData;
        capacity *= 2;
    }
    data[size++] = value;
}

// Implemetations of top(), pop(), empty() and getSize()




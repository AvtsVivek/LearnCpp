
#include "exercise.h"
#include <iostream>

//YOUR IMPLEMENTATIONS WILL GO IN THIS FILE. DON'T TOUCH THE HEADER FILE

//Implementation of the default constructor and destructor


MovableStack::MovableStack() : size(0), capacity(10), data(new int[capacity]) {}
 
MovableStack::~MovableStack() {
    delete[] data;
}


//Implementation for the copy and move constructors

MovableStack::MovableStack(const MovableStack& other) : size(other.size), capacity(other.capacity), data(new int[capacity]) {
    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}
 
MovableStack::MovableStack(MovableStack&& other) noexcept : size(other.size), capacity(other.capacity), data(other.data) {
    other.size = 0;
    other.capacity = 0;
    other.data = nullptr;
}

//Implemetations for the copy and move assignment operators

MovableStack& MovableStack::operator=(const MovableStack& other) {
    if (this != &other) {
        delete[] data;
        size = other.size;
        capacity = other.capacity;
        data = new int[capacity];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }
    return *this;
}
 
MovableStack& MovableStack::operator=(MovableStack&& other) noexcept {
    if (this != &other) {
        delete[] data;
        size = other.size;
        capacity = other.capacity;
        data = other.data;
        other.size = 0;
        other.capacity = 0;
        other.data = nullptr;
    }
    return *this;
}

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

int MovableStack::pop() {
    if (size == 0) {
        throw std::out_of_range("Stack is empty");
    }
    return data[--size];
}
 
int MovableStack::top() const {
    if (size == 0) {
        throw std::out_of_range("Stack is empty");
    }
    return data[size - 1];
}
 
bool MovableStack::empty() const {
    return size == 0;
}
 
int MovableStack::getSize() const {
    return size;
}




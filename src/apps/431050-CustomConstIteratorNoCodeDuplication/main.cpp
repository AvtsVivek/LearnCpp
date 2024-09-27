#include <algorithm>
#include <array>
#include <iostream>
#include <list>
#include <vector>

// Custom data structure with iterators
// For some additional implementations for Vector
// /blog/CPP-Const-Overloading/
template <typename T>
class DummyVector
{
public:
    // Default constructors
    DummyVector();
    // Constructors which take more than zero arguments
    explicit DummyVector(size_t size);
    explicit DummyVector(std::initializer_list<T> lst);

    // Iterator basics
    template <bool Const>
    class Iterator;
    Iterator<false> begin();
    Iterator<false> end();
    Iterator<true> cbegin();
    Iterator<true> cend();

private:
    size_t mSize;
    T *mBuffer;
};

// However, the best practice for template classes and functions is to put the
// definition and the declaration together. Mainly, there are two reasons
// 1. Compiler needs to know all the definition for any templates during compile
// time
// 2. Namescope is trivial to write and confusing
template <typename T>
DummyVector<T>::DummyVector() : mSize{0}, mBuffer{nullptr}
{
}

template <typename T>
DummyVector<T>::DummyVector(size_t size) : mSize{size}, mBuffer{new T[size]}
{
    for (int i = 0; i < mSize; i++)
    {
        mBuffer[i] = 0;
    }
}

template <typename T>
DummyVector<T>::DummyVector(std::initializer_list<T> lst)
    : mSize{lst.size()}, mBuffer{new T[lst.size()]}
{
    std::copy(lst.begin(), lst.end(), this->mBuffer);
}

// Iterator is an abstract notion
template <typename T>
template <bool Const>
class DummyVector<T>::Iterator
{
public:
    // Constructor
    Iterator(T *ptr);
    // Compulsory methods
    // Prefix
    Iterator &operator++();
    Iterator &operator--();
    // Postfix
    // Returns the value before update
    // Impossible to return by reference
    // Return by value instead
    Iterator operator++(int);
    Iterator operator--(int);
    template <bool Q = Const>
    typename std::enable_if<Q, const T &>::type operator*();
    template <bool Q = Const>
    typename std::enable_if<!Q, T &>::type operator*();
    bool operator==(const Iterator &iter);
    bool operator!=(const Iterator &iter);

private:
    T *mPtr;
};

template <typename T>
template <bool Const>
DummyVector<T>::Iterator<Const>::Iterator(T *ptr) : mPtr{ptr}
{
}

// Prefix overloading
// If T::X is a dependent typename, then we need to prefix it by typename to
// tell the compiler to parse it in a certain way.
template <typename T>
template <bool Const>
typename DummyVector<T>::template Iterator<Const> &
DummyVector<T>::Iterator<Const>::operator++()
{
    this->mPtr++;
    return *this;
}
// Prefix overloading
template <typename T>
template <bool Const>
typename DummyVector<T>::template Iterator<Const> &
DummyVector<T>::Iterator<Const>::operator--()
{
    this->mPtr--;
    return *this;
}

// Postfix overloading
template <typename T>
template <bool Const>
typename DummyVector<T>::template Iterator<Const>
DummyVector<T>::Iterator<Const>::operator++(int)
{
    DummyVector<T>::Iterator<Const> temp = *this;
    this->mPtr++;
    return temp;
}
// Postfix overloading
template <typename T>
template <bool Const>
typename DummyVector<T>::template Iterator<Const>
DummyVector<T>::Iterator<Const>::operator--(int)
{
    DummyVector<T>::Iterator<Const> temp = *this;
    this->mPtr--;
    return temp;
}

template <typename T>
template <bool Const>
template <bool Q>
typename std::enable_if<!Q, T &>::type
DummyVector<T>::Iterator<Const>::operator*()
{
    return *this->mPtr;
}

template <typename T>
template <bool Const>
template <bool Q>
typename std::enable_if<Q, const T &>::type
DummyVector<T>::Iterator<Const>::operator*()
{
    return *this->mPtr;
}

template <typename T>
template <bool Const>
bool DummyVector<T>::Iterator<Const>::operator==(const Iterator &iter)
{
    return this->mPtr == iter.mPtr;
}

template <typename T>
template <bool Const>
bool DummyVector<T>::Iterator<Const>::operator!=(const Iterator &iter)
{
    return this->mPtr != iter.mPtr;
}

template <typename T>
typename DummyVector<T>::template Iterator<false> DummyVector<T>::begin()
{
    return DummyVector<T>::Iterator<false>{this->mBuffer};
}

template <typename T>
typename DummyVector<T>::template Iterator<false> DummyVector<T>::end()
{
    return DummyVector<T>::Iterator<false>{this->mBuffer + this->mSize};
}

template <typename T>
typename DummyVector<T>::template Iterator<true> DummyVector<T>::cbegin()
{
    return DummyVector<T>::Iterator<true>{this->mBuffer};
}

template <typename T>
typename DummyVector<T>::template Iterator<true> DummyVector<T>::cend()
{
    return DummyVector<T>::Iterator<true>{this->mBuffer + this->mSize};
}

// Template function for iterators
template <typename Iter>
Iter maximum(Iter first, Iter last)
{
    Iter max = first;
    for (Iter iter = first; iter != last; iter++)
    {
        if (*max < *iter)
        {
            max = iter;
        }
    }
    return max;
}

int main()
{
    // STL containers
    std::list<int> lst{1, 2, 3, 4, 5};
    std::array<float, 5> arr{1, 2, 3, 4, 5};
    std::vector<float> vec{1, 2, 3, 4, 5};
    // Custom container
    DummyVector<double> dummyVec{1, 2, 3, 4, 5};

    // Ordinary iterator from custom container
    auto lstIter = lst.begin();
    int i = 6;
    while (lstIter != lst.end())
    {
        i++;
        *lstIter = i;
        lstIter++;
    }
    auto lstMaxIter = maximum(lst.begin(), lst.end());
    std::cout << *lstMaxIter << std::endl;

    // Const iterator from STL container
    auto lstConstIter = lst.cbegin();
    while (lstConstIter != lst.cend())
    {
        // Cannot assign
        // *lstConstIter = 5;
        lstConstIter++;
    }
    auto lstMaxConstIter = maximum(lst.cbegin(), lst.cend());
    std::cout << *lstMaxConstIter << std::endl;

    // Ordinary iterator from custom container
    auto dummyVecIter = dummyVec.begin();
    double d = 10;
    while (dummyVecIter != dummyVec.end())
    {
        d++;
        *dummyVecIter = d;
        dummyVecIter++;
    }
    auto dummyVecMaxIter = maximum(dummyVec.begin(), dummyVec.end());
    std::cout << *dummyVecMaxIter << std::endl;

    // Const iterator from custom container
    auto dummyVecConstIter = dummyVec.cbegin();
    while (dummyVecConstIter != dummyVec.cend())
    {
        // Cannot assign
        // *dummyVecConstIter = 5;
        dummyVecConstIter++;
    }
    auto dummyVecMaxConstIter = maximum(dummyVec.cbegin(), dummyVec.cend());
    std::cout << *dummyVecMaxConstIter << std::endl;
}

# Auto

## Notes
1. An iterator is an object that points to an element inside a container. Like a pointer, an iterator can be used to access the element it points to and can be moved through the content of the container. Each container in the C++ Standard Library provides its own iterator, as well as some methods to retrieve it. Using iterators is quite easy: obtain an instance from a container, move it around where needed and then get the pointed element.

2. Concretely, an iterator is a simple class that provides a bunch of operators: increment ++, dereference * and few others which make it very similar to a pointer and the arithmetic operations you can perform on it. In fact, iterators are a generalization of pointers, which are often used as a foundation when writing the iterator itself.

3. Iterators are one of the building blocks of the Standard Library containers, but they are also useful when you want to provide the ability to iterate over elements of a custom container that you wrote yourself. Adding iterators to your containers will make them compatible with the range-based for loops and the C++ Algorithms library: a collection of functions for searching, sorting, counting and manipulating containers, based on iterators.

4. 

|   #   | Name                   |                                                                                                      Description |
| :---: | :--------------------- | ---------------------------------------------------------------------------------------------------------------: |
|   1   | Input Iterator         |                       Can scan the container forward only once, can't change the value it points to (read-only); |
|   2   | Output Iterator        |                        Can scan the container forward only once, can't read the value it points to (write-only); |
|   3   | Forward Iterator       |                        Can scan the container forward multiple times, can read and write the value it points to; |
|   4   | Bidirectional Iterator |                                                  Same as previous one but can scan the container back and forth; |
|   5   | Random Access Iterator |                Same as previous one but can access the container also non-sequentially (i.e. by jumping around); |
|   6   | Contiguous Iterator    | Same as previous one, with the addition that logically adjacent elements are also physically adjacent in memory. |

5. The six categories are hierarchical: a Bidirectional Iterator is also a Forward Iterator and a Random Access Iterator is both a Bidirectional and a Forward Iterator and so on. 

![Iterators types are hierarchical](51_50_Iterators_Hierarchy.png) 


6. Normally, all iterators are Input Iterators (1) which makes them read-only, also known as constant iterators. 

7. Iterators that both support read and write operations are also Output Iterators (2) and are called mutable iterators.

8. Input and Output iterators are often used for low-level components such as input and output streams (the so-called single-pass algorithms) and thus have limitations. We want to do more with our custom container, so we will skip those two and jump straight to the mutable Forward Iterator.

9. An iterator is usually declared inside the class it belongs to, for example:

```cpp
class Integers
{
public:
    struct Iterator { /* ... */ };

    // ...
};
```

10. The first thing to do is to assign the iterator some properties. Until C++17 this is done by tagging it with the [tag dispatch mechanism](https://www.fluentcpp.com/2018/04/27/tag-dispatching/), while C++20 uses concepts. Here we will follow the traditional approach. C++ expects some properties from an iterator:
    1.  `iterator_category` — one of the six iterator categories we have seen above table. The [full list is available here](https://en.cppreference.com/w/cpp/iterator/iterator_tags). The `std::forward_iterator_tag` tag is what we need;
    2.  `difference_type` — a signed integer type that can be used to identify distance between iterator steps. Our iterator is basically a wrapper around a pointer and leverages pointer arithmetic, so the default `std::ptrdiff_t` is a good choice;
    3.  `value_type` — the type the iterator iterates over. `int` in our case;
    4.  `pointer` — defines a pointer to the type iterated over. `int*` in our case;
    5.  `reference` — defines a reference to the type iterated over. `int&` in our case;

```cpp
#include <iterator> // For std::forward_iterator_tag
#include <cstddef>  // For std::ptrdiff_t

struct Iterator 
{
    using iterator_category = std::forward_iterator_tag;
    using difference_type   = std::ptrdiff_t;
    using value_type        = int;
    using pointer           = int*;  // or also value_type*
    using reference         = int&;  // or also value_type&
};

```

11. Why tags? Some of the tags above might seem useless at first. In fact, you will notice how they will never get mentioned during the definition of our iterator. Tags are used to select the most efficient algorithm if your container is passed to one of the Standard Library functions from the <algorithm> library. Wrong tags mean sub-optimal performance! The iterator category is also used to set algorithm requirements, for example: std::fill wants a Forward Iterator, while std::reverse wants a Bidirectional Iterator. Passing the wrong iterator will result in a compilation error.

12. All iterators must be `constructible`, `copy-constructible`, `copy-assignable`, `destructible` and `swappable`. Let's translate those requirements into code for our iterator. We just need a custom constructor to initialize the private member variable `m_ptr`, which points to an element of the Integers container. The custom constructor satisfies the constructible requirement, while all others are covered by the implicitly-declared constructors and operators kindly provided by the compiler.

```cpp
struct Iterator 
{
    // Iterator tags here...

    Iterator(pointer ptr) : m_ptr(ptr) {}

private:

    pointer m_ptr;
};
```

13. Implementing operators. We are building a `mutable Forward Iterator`, which inherits properties from both Input and Output Iterators. The resulting iterator must support the following operations:
    1.  *iterator and iterator->x — dereferenceable, to get the value it points to;
    2.  ++iterator and iterator++ — incrementable, to move it one step forward, both prefix and postfix versions. The latter must return something dereferenceable;
    3.  iterator_a == iterator_b and iterator_a != iterator_b — comparable with another iterator;
This is done by implementing some custom operators in the Iterator class, like this:

```cpp
struct Iterator 
{
    // Iterator tags here...

    // Iterator constructors here...

    reference operator*() const { return *m_ptr; }
    pointer operator->() { return m_ptr; }

    // Prefix increment
    Iterator& operator++() { m_ptr++; return *this; }  

    // Postfix increment
    Iterator operator++(int) { Iterator tmp = *this; ++(*this); return tmp; }

    friend bool operator== (const Iterator& a, const Iterator& b) { return a.m_ptr == b.m_ptr; };
    friend bool operator!= (const Iterator& a, const Iterator& b) { return a.m_ptr != b.m_ptr; };     

private:

    pointer m_ptr;
};
```

14. As you can see every operator involves the usage of the private pointer `m_ptr`. Also, notice the friend declaration for the two comparison operators: this is handy way to define the operators as non-member functions, yet being able to access private parts of the Iterator class (rationale here).

15. Prepareing the container. Our iterator is good to go. The last step is to give our custom container the ability to create Iterator objects. This is done by adding two public methods begin() and end() that return instances of the Iterator class, representing the first and the last element respectively:

```cpp
class Integers
{
public:

    // Iterator definition here ...

    Iterator begin() { return Iterator(&m_data[0]); }
    Iterator end()   { return Iterator(&m_data[200]); } // 200 is out of bounds
};
```

16. The end() method returns an iterator that refers to an invalid memory address, past the end of our raw array. Such iterator is just a placeholder used to determine when the boundary has been reached: it should never be accessed directly.

17. Time to test our iterator. Both the custom container and its iterator are now ready. Let's test them with the range-based for loop:



## References

1. https://internalpointers.com/post/writing-custom-iterators-modern-cpp



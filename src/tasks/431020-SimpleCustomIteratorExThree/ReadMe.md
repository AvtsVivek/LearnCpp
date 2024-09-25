# Auto

## Notes

1. Implementing operators. We are building a `mutable Forward Iterator`, which inherits properties from both Input and Output Iterators. The resulting iterator must support the following operations:
    1.  iterator_a == iterator_b and iterator_a != iterator_b — comparable with another iterator;
    2.  For now, we will just impliment, != operator. 
    3.  We will be testing range based for loop, where we need the != operator. == operator is not needed at this point. 
This is done by implementing some custom operators in the Iterator class, like this:

```cpp
struct Iterator 
{
    // Iterator tags here...
    // Iterator constructors here...
    // Prefix and postfix increment

    friend bool operator!= (const Iterator& a, const Iterator& b) { return a.m_ptr != b.m_ptr; };     

private:

    pointer m_ptr;
};
```

2. As you can see every operator involves the usage of the private pointer `m_ptr`. Also, notice the friend declaration for the two comparison operators: this is handy way to define the operators as non-member functions, yet being able to access private member parts of the Iterator class (rationale here).

3. Added the next public methods `end()` that return instances of the Iterator class, representing the last element:

```cpp
class Integers
{
public:

    // Iterator definition here ...
    Iterator end()   { return Iterator(&m_data[20]); } // 20 is out of bounds
};
```

4.  The end() method returns an iterator that refers to an invalid memory address, past the end of our raw array. Such iterator is just a placeholder used to determine when the boundary has been reached: it should never be accessed directly.

5.  Time to test our iterator. Both the custom container and its iterator are now ready. Let's test them with the range-based for loop:

```cpp
for (auto i : integers)
    std::cout << i << " ";
```

6. The following is same as above. The following is just a syntactic sugar. So as you can see, != operator is needed, and we have defined it earlier.

```cpp
for (auto it = integers.begin(), end = integers.end(); it != end; ++it)
{
    const auto i = *it;
    std::cout << i << " ";
}
```

7. Also try the fill algorithm. This also work.Note, we have not yet defined the == operator at this point. 

```cpp
std::fill(it, integers.end(), 3);
```

8. Note, without != operator, fill will not work. The range based for loop also will not work without the != operator.

## References

1. https://internalpointers.com/post/writing-custom-iterators-modern-cpp



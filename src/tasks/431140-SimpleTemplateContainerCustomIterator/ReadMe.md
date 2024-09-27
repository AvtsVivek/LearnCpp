# Auto

## Notes

1. Earlier we defined a simple Integer class which wraps up an integer array and also has an Iterator in it.
2. It looks something like the following.

```cpp
class Integers
{
public:
    struct Iterator
    {
        using iterator_category = std::forward_iterator_tag;
        ...

    private:
        pointer m_ptr;
    };
    ...
    Iterator begin()
    {
        ...
    }
    ...
private:
    int m_data[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
};
```

3. In this example we will try converting that to an template. Take the following steps.
4. Step 1. Add `template <typename T>` at the top.

```cpp
template <typename T>
class Integers
{
    ...
}
```

5. Step 2. Change the type aliasis as follows. Instead of `int`, use `T`. Change `pointer` to `pointer_type` and `refernce` to `reference_type`.

```cpp
using value_type = int;
using pointer = int *;   // or also value_type*
using reference = int &; // or also value_type&
```

```cpp
using value_type = T;
using pointer_type = T *;
using reference_type = T &;
```

6. Change the ctor as follows. Use pointer_type instead of pointer. 

```cpp
Iterator(pointer ptr) : m_ptr(ptr) {}
```

```cpp
Iterator(pointer_type ptr) : m_ptr(ptr) {}
```

7. Change the operators as follows. Again change `pointer` to `pointer_type`, and `refernce` to `reference_type`

```cpp
reference operator*() const { return *m_ptr; }
pointer operator->() { return m_ptr; }
```

```cpp
reference_type operator*() const { return *m_ptr; }
pointer_type operator->() { return m_ptr; }
```

8. Change the declaration as follows. `pointer` to `pointer_type`.

```cpp
pointer m_ptr;
```

```cpp
pointer_type m_ptr;
```

9. Again the wrapping container. Change `int` to `T`

```cpp
private:
    int m_data[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
```

```cpp
private:
    T m_data[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
```

10. 

## References

1. 
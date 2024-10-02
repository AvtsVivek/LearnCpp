# Auto

## Notes
1. We can avoid the hard work we did setting up the iterators by using the raw pointers as iterators.
2. Just return the pointers with the begin and end methods.

```cpp
T *begin() { return m_items; }
T *end() { return m_items + m_size; }

// Const overloads
const T *begin() const { return m_items; }
const T *end() const { return m_items + m_size; }

const T *cbegin() { return m_items; }
const T *cend() { return m_items + m_size; }
```

3. In cpp, a pointer is an iterator. It is compariable to a random access iterator. 

## References

1. 


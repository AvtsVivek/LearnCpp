# Constant Iterators

## Notes
1. In this example we ill make the box container provide a const iterator as well. 

2. First the pointers and reference are made const. 

```cpp
using pointer_type           = const T*;
using reference_type         = const T&;
```

3. Then the operators are also made const. 

4. Next we provide `cbegin` and `cend`.

```cpp
//Const iterators picked up for const containers
ConstIterator begin() const { return ConstIterator(&m_items[0]); }
ConstIterator end() const   { return ConstIterator(&m_items[m_size]); }

ConstIterator cbegin() { return ConstIterator(&m_items[0]); }
ConstIterator cend()   { return ConstIterator(&m_items[m_size]); }
```

5. 



## References

1. 


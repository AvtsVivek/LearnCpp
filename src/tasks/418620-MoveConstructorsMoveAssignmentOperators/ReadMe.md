# Auto

## Notes
1. In this example, we are adding move assignment operator, and move ctor to the box container class. Note the parameters are r values references here(&&source). 
   
```cpp
BoxContainer(const BoxContainer<T> &source); // Copy constructor
BoxContainer(BoxContainer<T> &&source);		 // Move constructor
...
void operator=(const BoxContainer<T> &source); // Copy assignment operator
void operator=(BoxContainer<T> &&source);	   // Move assignment operator
```

2. Now these ctor or the operator, will simply steal the pointers from the source boject. 

3. Also note that move ctor and operators do not have `const`. 
4. Throught he following invalidate special method, we are restting the pointers to null in the source object. 

```cpp
void invalidate()
{
    m_items = nullptr;
    m_size = 0;
    m_capacity = 0;
}
```

4. Note the difference between the copy and move ctor. In the copy, we have copy as follows.

```cpp
// Copy the items over from source
for (size_t i{}; i < source.size(); ++i)
{
    m_items[i] = source.m_items[i];
}
```

5. In move ctro, we have the following, we simply move, just steal the reference. 

```cpp
m_items = source.m_items;
```

6. 

7. 

## References

1. 


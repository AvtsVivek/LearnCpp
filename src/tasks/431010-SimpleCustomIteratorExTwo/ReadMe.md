# Auto

## Notes
1. Continuing with earlier example.
2. A plus operator with int is added as follows.

```cpp
Iterator operator+(const int &right_operand)
{
    for (int i = 0; i < right_operand; i++)
    {
        m_ptr++;
    }
    return *this;
}
```

## References

1. https://internalpointers.com/post/writing-custom-iterators-modern-cpp



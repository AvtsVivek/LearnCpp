# Auto

## Notes

1. Reverse alogos need bidirectional iterators. `++operator` along with `--operator`.

2. Here we try the Ranges Reverse alog.

3. For the reverse to work, we need a decrement operator, the `--operator`

```cpp
// Prefix decrement
Iterator &operator--()
{
    m_ptr--;
    return *this;
}

// Postfix decrement
Iterator operator--(int)
{
    Iterator tmp = *this;
    --(*this);
    return tmp;
}
```

4. If you comment out the above, we get the compiler errors, because the reverse needs `--operator`

5. And ofcourse, once we have `--operator`, we can define the following subraction as well.

```cpp
Iterator operator-(const int &right_operand)
{
    std::cout << "right oprand: -" << right_operand << std::endl;
    for (int i = 0; i < right_operand; i++)
    {
        m_ptr--;
    }
    return *this;
}
```

6. 

## References

1. asdf
2. 
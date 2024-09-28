# Auto

## Notes

1. Here we try the std Reverse alog.

2. For the reverse to work, we need a decrement operator, the `--operator`. 

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

3. For std::reverse to work, we need the `< operator`.

```cpp
friend bool operator<(const Iterator &a, const Iterator &b) { return a.m_ptr < b.m_ptr; };
```

4. 

## References

1. 
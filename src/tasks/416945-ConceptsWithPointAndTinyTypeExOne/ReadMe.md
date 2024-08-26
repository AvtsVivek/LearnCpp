# Auto

## Notes
1. Will works with only numbers, and not with others. 

2. Notice that you can directly combine with a requires clause with a syntax like
```cpp
requires (std::convertible_to<T,double>)&&requires(std::ostream& out, T value)
{
    out << value;
}

3. The code here is uggly and I left it in on purpose. One thing we could do to improve on this is extract the

requires(std::ostream& out, T value)
{
    out << value;
}
```

## References

1. 


# Auto

## Notes
1. When a `binary operator`(which takes 2 operands) is implemented as a member function, the left operand is never implicitly converted. 

2. So when we have the following,

```cpp
std::cout << "n1 + 2  : " << (n1 + 2) << std::endl;
```

The above will work. The reason is we have an operator as follows. This will enable the number to be converted to the double type. So here the left side of the operator is being implicitly converted to the right side type.

```cpp
explicit operator double()const{
    return (static_cast <double> (m_wrapped_int));
}
```



```cpp
std::cout << "2 + n1 : " << (2 + n1) << std::endl;
```


## References

1. 


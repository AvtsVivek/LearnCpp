# Auto

## Notes
1. decltype auto will deduce the return type from return object.

```cpp
decltype(auto) maximum(T a, P b)
{
    return (a > b) ? a : b;
}
```

2. The above is same as the below.

```cpp
auto maximum(T a, P b) -> decltype((a > b) ? a : b)
{
    return (a > b) ? a : b;
}
```

3. Note here we cannot split that into function declaratioin and definition. 


## References

1. 


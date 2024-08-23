# Auto

## Notes
1. Parts discarded by `constexpr if` are not included in the template instance. 

2. Lets say we have the following,

```cpp
int main()
{
    func(12);
    return 0;
}
```

then the compiler generates only the `func_integral` and not the compiler will **NOT** include the `func_floating_point`

3. Try the same with cppinsights.io as well.

## References
1. 


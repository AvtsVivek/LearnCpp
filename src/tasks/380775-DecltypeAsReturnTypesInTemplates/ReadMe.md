# Decl type

## Notes
1. The compiler processes from left to right. 

```cpp
template <typename T, typename P>
decltype((a > b) ? a : b) maximum(T a, P b); 
```

2. So when the compiler hits a, b in decltype, they are undefined at that point. They are define in the end inside of the parameter list of maximum(T a, P b);

3. So we need trailing return types. 

## References

1. https://en.cppreference.com/w/cpp/language/decltype
2. https://learn.microsoft.com/en-us/cpp/cpp/decltype-cpp
3. https://stackoverflow.com/a/18815367/1977871
4. https://stackoverflow.com/a/18815367/1977871
5. 

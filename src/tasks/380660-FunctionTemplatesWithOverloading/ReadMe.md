# Auto

## Notes
1. This shows how the compiler chooses an overload. The following shows preference.

   1. A raw overload will take precedence over any template instance, if const char* is passed to maximum
```cpp
const char *maximum(const char *a, const char *b)
```

   2. Overload through templates. Will take precedence over raw T, if a pointer is passed to maximum
```cpp
template <typename T> T *maximum(T *a, T *b)
```

   3. Function template
```cpp
template <typename T> T maximum(T a, T b)
```

## References

1. 


# Auto

## Notes
1. The following gives compiler error.

```cpp
// Point<std::string> point_string("Hello", "World");
// std::cout << "point_string : " << point_string << std::endl;
```

```txt
.\main.cpp: In instantiation of 'class Point<std::__cxx11::basic_string<char> >':
.\main.cpp:34:33:   required from here
.\main.cpp:7:32: error: static assertion failed: Coordinates of Point can only be numbers.
    7 |             static_assert(std::is_arithmetic_v<T>,
      |                           ~~~~~^~~~~~~~~~~~~~~~~~
.\main.cpp:7:32: note: 'std::is_arithmetic_v<std::__cxx11::basic_string<char> >' evaluates to false
```

## References

1. 


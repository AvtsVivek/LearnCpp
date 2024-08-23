# Decl type

## Notes
1. We get the following error

```cpp
.\main.cpp: In function 'int main()':
.\main.cpp:6:22: error: use of 'auto add(T, P) [with T = int; P = long unsigned int]' before deduction of 'auto'
    6 |     auto result = add(11,22ul);
      |                   ~~~^~~~~~~~~
```

2. The declaration of the function template will be included in the main.cpp file as part of the pre-processing phase. But the compiler will fail to deduce the return type of the function template. Remember! For bare auto return type deduction to work, the compiler has to see the return expression before the point of the function call. Hence the compiler error we see if we try to compile the code here.


## References

1. https://en.cppreference.com/w/cpp/language/decltype
2. https://learn.microsoft.com/en-us/cpp/cpp/decltype-cpp
3. https://stackoverflow.com/a/18815367/1977871
4. 

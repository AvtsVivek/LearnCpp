# Concepts

## Notes
1. This are constraints on your template type parameters.
2. Concepts allow us to specify that we use our functions with integers or doubles.
3. Concepts make function templates much safer to work with.
4. In C#, we have generic type parameter constraints.
5. Concepts are one of the four big new features in CPP 20
6. Concepts are two types.
   1. Standard Built in 
   2. Custom

7. The following gives compile error because its called with `double`. But this works with `int` and `char`.

```cpp
double c_0{11.1};
double c_1{1.9};
auto result_c = add(c_0, c_1);
std::cout << "result_c : " << result_c << std::endl;
```

8. 

## References

1. https://learn.microsoft.com/en-us/dotnet/csharp/programming-guide/generics/constraints-on-type-parameters
2. https://en.cppreference.com/w/cpp/language/constraints
3. https://stackoverflow.com/a/69796825/1977871
4. https://stackoverflow.com/q/78908274/1977871
5. 



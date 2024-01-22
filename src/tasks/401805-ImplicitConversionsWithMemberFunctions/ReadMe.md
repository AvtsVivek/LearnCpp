# Auto

## Notes
1. When the binary operator like the addition operator, subraction operator or any operator that takes two operands, if it is implimented as a member function, the left operator is never implicitly converted.
2. Say we have the following. This will work.
```cpp
Number n1(22);
std::cout << "n1 : " << n1 << std::endl;
std::cout << "n1 + 2  : " << (n1 + 2) << std::endl;
```

1. But if you do the following, it will not work. This is because the compiler will try to implicitly convert the left operand. So in this case, the compiler will try to conver 2 to the type of Number using the ctor of the Number class. This will be a complier error. The compiler does not know how to convert 2 to number type. 

```cpp
std::cout << "2 + n1 : " << (2 + n1) << std::endl;
```

4. Implicit conversions won't work for the first operand. Implicit conversions are not supported for the left operand. 

5. 

## References

1. 


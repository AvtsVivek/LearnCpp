# Literals

## Notes
1. No Video found.
2. Literals represent constant values directly in code.
3. Literals are constant values assigned to variables that remain fixed and unmodifiable throughout the program’s execution.
4. Unlike variables, literals are not associated with references and directly hold their values in memory.
5. In common usage, the terms `constants` and `literals` are often used interchangeably.
6. These constants can include integers, floating-point numbers, characters, and more. 

```cpp
const int x = 5;
```

Here, value 5 is a constant integer literal.

7. Integer Literal: Used to represent whole numbers, such as 42.
8. Float Literal: Represents decimal numbers with a fractional part, like 3.14.
9. Character Literal: Represents a single character enclosed in single quotes, such as 'A'.
10. String Literal: Represents a sequence of characters enclosed in double quotes, like "Hello, World!".
11. Boolean Literal (C++): Represents either true or false, indicating logical values in C++.
12. Literals are essential for initializing variables, specifying values in expressions, and conveying data directly within the source code. They provide a means to express concrete values without requiring variables or complex computations.
13. Literals play a pivotal role in coding by providing a concise way to embed fixed values directly into the source code.
14. In C++14, we can use binary literals by using the 0b prefix

```cpp
#include <iostream>

int main()
{
    int bin{};        // assume 16-bit ints
    bin = 0b1;        // assign binary 0000 0000 0000 0001 to the variable
    bin = 0b11;       // assign binary 0000 0000 0000 0011 to the variable
    bin = 0b1010;     // assign binary 0000 0000 0000 1010 to the variable
    bin = 0b11110000; // assign binary 0000 0000 1111 0000 to the variable

    return 0;
}
```

16. 0x before the number means this is hexadecimal

```cpp
#include <iostream>

int main()
{
    int x{ 0xF }; // 0x before the number means this is hexadecimal
    std::cout << x << '\n';
    return 0;
}
```

17. Octal. 0 before the number means this is octal

```cpp
#include <iostream>

int main()
{
    int x{ 012 }; 
    std::cout << x << '\n';
    return 0;
}
```

18. 

## References

1. https://www.skillvertex.com/blog/literals-in-c-c-with-examples/
2. https://www.mygreatlearning.com/c/tutorials/c-constants-and-literals
3. https://www.programiz.com/cpp-programming/variables-literals


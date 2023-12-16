# Output Formatting

## Notes
```cpp
std::endl
```

1. Places a new line character on the output stream. This is identical to placing '\n' on the output stream. This is similar to Environment.NewLine in C# 

```cpp
std::flush
```

2. Flushes the output buffer to its final destination. After this `std::flush`, we're sure that at this line, the message has been sent to the stream. This may be important in some applications.

```c++
std::setw() : 
```

3. Adjusts the field with for the item about to be printed. The setw() manipulator only affects the next value to be printed.

```cpp
std::right;
std::left;
std::internal;
```

4. Right and left Justify: Values can be justified in their fields. There are three manipulators for adjusting the justification: left, right, and internal.

```cpp
std::setfill('*');
```

5. The fill char.

```cpp
std::boolalpha
```

6. boolalpha and noboolapha : control bool output format : 1/0 or true/false

```cpp
std::showpos 
std::noshowpos
```

7.  : show or hide the +  sign for positive numbers

```cpp
std::showpoint 
std::noshowpoint
```

8. show trailing zeros if necessary. Force output of the decimal point

```cpp
#include <iostream>
#include <iomanip>
```

9. Namespaces to include

```cpp
std::cout << std::setfill('*'); // The fill character
```

10. Set fill

```cpp
std::hex
```

11. Set hex

```cpp
std::showpoint
```

12. Showpoint. Enables or disables the unconditional inclusion of the decimal point character in floating-point output. Has no effect on input.

## References

1. https://youtu.be/8jLOx1hD3_o?t=21370
2. https://en.cppreference.com/w/cpp/io/manip
3. https://en.cppreference.com/w/cpp/io/manip/boolalpha
4. https://en.cppreference.com/w/cpp/io/manip/hex
5. 


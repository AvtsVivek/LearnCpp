# Declarations and Definitions

## Notes
1. A Declartion introduces the name in a file, usually a header file.
2. The definition says what that name is and what it does.
3. If a name is never used(function called, or a variable read from/written to) in main, it's definition wont be needed. Code will compile just fine.
4. If you compile without a declaration, and the name is used, you get a compiler error. Unknown name.
5. If you compile with declaratioin without definition and the name is not used, code compiles.
6. If you compile with declaration, without definition and the name is used, you get a linker error.

7. For variables, the declaration and definitions are combined. They are not seperated usually.

```cpp
double distance{} 
```



## References

1. 


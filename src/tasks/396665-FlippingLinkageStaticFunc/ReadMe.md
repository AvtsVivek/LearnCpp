# Function linkage Chages

## Notes
1. Functions have by default external linkage. Meaning they can be accessed from other files or translation units different from where they are defined.

```cpp
void some_other_function()
{
    std::cout << "Hello there" << std::endl;
}
```

2. So a function like the above defined in a file(Translation Unit), can be accessed from a different file(TU). 

```cpp
static void some_other_function()
{
    std::cout << "Hello there" << std::endl;
}
```

3. If you want to change the linkage to internal, mark it with static. Then this function cannot be accessed from a different translation unit.

```txt
C:/Program Files/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/13.2.0/../../../../x86_64-w64-mingw32/bin/ld.exe: C:\Users\koppviv\AppData\Local\Temp\ccCu84E0.o:main.cpp:(.text+0x52): undefined reference to `some_other_function()'
collect2.exe: error: ld returned 1 exit status
```

4. Build and run, you get error as above. 

5. You can also put the function in an anonymous namespace as follows to make the linkage internal

```cpp
namespace{
     void some_other_function(){
        std::cout << "Hello there" << std::endl;
    }
}
```

6. 

## References

1. 


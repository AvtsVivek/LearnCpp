# Auto

## Notes
1. `noexcep` is a specifier to mark a function to tell it that no exception should propagate outside of the function. 

```cpp
void do_something_in_class() const noexcept
{
    std::cout << "Doing something from class" << std::endl;
    try
    {
        throw 1;
    }
    catch (int ex)
    {
        std::cout << "Handling exception in Item::do_something_in_class" << std::endl;
        // throw; // Rethrowing in noexcept function/method will terminate program
    }    
}
```

2. You throw exceptions, but it be caught and handled in the function itself. So in the above function, `throw` in the `catch` block will terminate the program. 

3. Uncommenting the `throw` will result in the following warning from the compiler. 

```txt
.\main.cpp: In member function 'void Item::do_something_in_class() const':
.\main.cpp:18:13: warning: 'throw' will always call 'terminate' [-Wterminate]
   18 |             throw; // Rethrowing in noexcept function/method will terminate program
```



## References

1. 


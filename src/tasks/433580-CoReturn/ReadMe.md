# Auto

## Notes
1. In the corotype, if you have the following `return_void` defined, then you can return void. 
```cpp
void return_void()
{
    std::cout << "Returning void..." << std::endl;
}
```

```cpp
CoroType do_work()
{
    std::cout << "Starting the coroutine..." << std::endl;
    co_yield 1;
    co_yield 2;
    co_yield 3;
    co_return; // Note this, we are returning void here.
}
```

2. But instead, if in the corotype, if you have the following `return_value` defined, then you can return an int as follows. 
```cpp
void return_value(int val)
{
    std::cout << "Returning value " << std::endl;
    m_value = val;
}
```

```cpp
CoroType do_work()
{
    co_return 4;
}
```


## References

1. 


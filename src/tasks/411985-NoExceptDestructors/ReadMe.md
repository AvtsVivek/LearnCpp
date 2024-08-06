# Auto

## Notes
1. Demos `~Item() noexcept(false)`

```cpp
class Item
{
public:
    Item()
    {
        std::cout << "From Item ctro..." << std::endl;
    }
    ~Item() noexcept(false)
    {
        std::cout << "From Item destructor ... about to throw .. " << std::endl;
        throw 0;
    }
};
```

4. But if you want to alter it do the following.

```cpp
class Item{
public : 
    Item(){}
    ~Item() noexcep(false)  {
        throw 0;
    }
};
```

5. Run the example, note, the catch block in the main is never reached. 


## References

1. 


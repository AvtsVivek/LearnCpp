# Auto

## Notes
1. Class destructors have `noexcept` attached to them by default. 
2. All destructors are `noexcept` by default. 
3. If you try to propagate an exception out of the destructor, it will terminate or crash the program. 

```cpp
class Item{
public : 
    Item(){}
    ~Item()  {
        throw 0;
    }
}
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


# Auto

## Notes

1. Consider the following within brackets `{}`

```cpp
{
    Dog dog1("Dog1");
    // Calling functions on stack objects
    dog1.print_dog();
}
```

2. Build and run, you should see the following ouput.

```txt
Constructor for dog Dog1 called.
Printing dog : Dog1
Destructor for dog Dog1 called  
Hitting outside scope
Done!
```


4. Now remove the `{}`. Build and then run.

```cpp
Dog dog1("Dog1");
dog1.print_dog();
```

You should see somehthing like the following.

```txt
Constructor for dog Dog1 called.
Printing dog : Dog1
Hitting outside scope
Done!
Destructor for dog Dog1 called  
```

5. So understand the role of stack. When the object gets out of scope and then destructor is called.


## References

1. 


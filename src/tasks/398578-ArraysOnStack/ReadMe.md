# Auto

## Notes
1. Remove the `{}` in the following and try it. You should observe 

```cpp
{
    std::cout << "Working with dog array on the stack" << std::endl;

    Dog dog_array[3]{Dog("Dog1"), Dog("Dog2"), Dog("Dog3")};

    for (size_t i{0}; i < std::size(dog_array); ++i)
        dog_array[i].print_info();
}
```

You will see the output like the following.

```txt
....
Destructor for dog Dog3 called
Destructor for dog Dog2 called
Destructor for dog Dog1 called
Done!
```

in contrast with the following.

```txt
....
Done!
Destructor for dog Dog3 called
Destructor for dog Dog2 called
Destructor for dog Dog1 called
```



## References

1. 


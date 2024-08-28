# Auto

## Notes
1. Move only type: A type whose copy ctor and coly assignment operator have been deleted. Its object cant be copied. The move ctor and move assignment operator are however left in. Its objects can only be moved. 

2. The following will give compilation error. Use of deleted function.

```cpp
std::unique_ptr<int> ptr_int_copy = ptr_int;
```

3. But the following will work.

```cpp
std::unique_ptr<int> ptr_int_copy = std::move(ptr_int);
```



## References

1. 


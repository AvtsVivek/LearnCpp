# Auto

## Notes
1. Iterator Types

![Iterator Types](50_50IteratorTypes.jpg)

2. The following give compiler error.

```cpp
int vi[]{1, 2, 3, 4, 5, 6, 7, 8, 9};

std::cout << " Collection : " ;
for(auto it = vi.begin(); it!= vi.end(); ++it){
    std::cout << *it  << " ";
}
```

The error message will be as follows.

```txt
error: request for member 'begin' in 'vi', which is of non-class type 'int [9]'
   12 |     for(auto it = vi.begin(); it!= vi.end(); ++it){
```

3. The reason is `vi` is a native array, not std array. Native arrays do not have begin and end methods.

4. For this reason we have std::begin and std::end methods.



## References

1. https://cplusplus.com/reference/iterator/


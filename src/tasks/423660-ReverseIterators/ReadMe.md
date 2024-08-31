# Auto

## Notes
1. The following gives compiler error.

```cpp
std::vector<int>::iterator it= numbers.rbegin();
```

The error looks like the following.

```txt
error: conversion from 'std::vector<int>::reverse_iterator' {aka 'std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int> > >'} to non-scalar type 'std::vector<int>::iterator' requested
   11 |     std::vector<int>::iterator it= numbers.rbegin();
```

The reason is `std::reverse_iterator` and `std::iterator` are of differnet types. 

So for the same reason, following also gives compiler error.

```cpp
auto it_rev = numbers.rbegin();

if( it_rev != numbers.end()){ // Compiler error.
    std::cout << "Do something..." << std::endl;
}
```

## References

1. 


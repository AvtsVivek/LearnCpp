# Auto

## Notes
1. For const iterators, we can change the collection

2. The following will give compiler error.

```cpp
// You can use either of the following.
// std::vector<int>::const_iterator c_it = numbers.cbegin();
// above OR below
auto c_it = numbers.cbegin();
while (c_it != numbers.end())
{
    *c_it = 100; // This will give compiler error.
    ++c_it;
}
```

The error will look like the following.

```txt
.\main.cpp:45:15: error: assignment of read-only location 'c_it.__gnu_cxx::__normal_iterator<const int*, std::vector<int> >::operator*()'
   45 |         *c_it = 100; 
```

3. The following can also be used.

```cpp
auto c_it = numbers.cbegin();
while (c_it != numbers.end()) {...}

```

4. And finally const reverse iteraor.

```cpp
// Constant reverse iterators
auto it1 = numbers.crbegin();
// std::vector<int>::const_reverse_iterator it1= numbers.crbegin();

while (it1 != numbers.crend())
{
    //*it1 = 600; // Compiler error, it1 is a const iterator, we can't modify
    // container data through it.
    ++it1;
}
```

5. And finally there are const reverse iterators.

```cpp
auto crit = numbers_second_set.crbegin();
std::vector<int>::const_reverse_iterator it1= numbers.crbegin();
```

## References

1. 


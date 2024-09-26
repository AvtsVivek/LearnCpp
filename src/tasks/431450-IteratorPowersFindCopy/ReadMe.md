# Auto

## Notes
1. Iterators returned by begin() are input iterators. The requirement is that we are able to read through them. That's all std::ranges::find needs. Show possible implementations at cppreference.

2. Output iterator : std::ranges::copy. Iterator through which we can write

3. The Find algorithm. The requirement for the Find alog is that we are able to read through the container. Iterators returned by begin() are input iterators. . That's al std::ranges::find needs. 

4. `dest.begin()` has to be an output iterator, have to be able to write though it. If we make it a const iterator like  `dest.cbegin()` is not an output iterator, so a compiler error will result.

```cpp
std::ranges::copy(numbers.cbegin(), numbers.cend(), dest.begin()); 
```

## References

1. https://en.cppreference.com/w/cpp/algorithm/ranges/find
2. https://en.cppreference.com/w/cpp/algorithm/ranges/copy
3. 
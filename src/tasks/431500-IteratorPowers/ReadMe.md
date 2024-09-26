# Auto

## Notes
1. Iterators returned by begin() are input iterators. The requirement is that we are able to read through them. That's all std::ranges::find needs. Show possible implementations at cppreference.

2. Forward iteator : std::ranges::replace , std::ranges::fill
3. replacing every instance of 7 with 345. The iterator needs an, `operator++, a plus plus operator`, to move forward. See possible implementation

4. The reverse needs a negative increment operator, --

## References

1. https://en.cppreference.com/w/cpp/algorithm/ranges/find
2. https://en.cppreference.com/w/cpp/algorithm/ranges/copy
3. 
4. 



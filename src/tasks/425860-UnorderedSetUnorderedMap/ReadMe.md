# Auto

## Notes
1. UnOrdered associative containers
2. std::unordered_st and std::unordered_map are yet other variants of the std::set and std::map containers we have seen before. 
3. Their speciality is that they dont order their elements in any way that is useful to us as users of the container.
4. Internally, they use what is called a hash map to order their elements, which makes operations on them even faster that their std::set and std::map counterparts.
5. It is possible to provide your own hash maps to control how elements are ordered, but thats well beyhond the scope of this course.
6. To know which is faster for your paricular case between std::set/std::map and std::unordered_st/std::unordered_map, it is best advised to un real performance tests on your real data and make your choice from that.
7. In most cases however, it wont matter that much which one you choose. They are both mazingly fast and cool. 


## References

1. https://en.cppreference.com/w/cpp/container


# Auto

## Notes
1. In the ranges namespace, we have this all_off. this is from the `std::ranges` namespace

```cpp
// Ranges, iterator pair
auto result = std::ranges::all_of(numbers.begin(), numbers.end(), odd);
```

2. And we also have the following, we hvae seen earlier, which looks very similar. This is from the std namespace

```cpp
std::all_of(std::begin(collection_not_all_even), std::end(collection_not_all_even), [](int i)
                    { return i % 2 == 0; })
```

3. So the question is why are there two methods in different namespaces which do almost the same thing? So the answer is, the range set of methods are constrained with concepts. They give better error messages, so they are now recommended over the earlier versions.  

4. The following will give compiler error. And its difficult to understand what the errors are saying.

```cpp
std::list<int> numbers_list{11, 2, 6, 4, 8, 3, 17, 9};
std::cout << "numbers_list : ";
print_collection(numbers_list);
// The following sort method is from std::ranges namespace. 
std::ranges::sort(numbers_list.begin(), numbers_list.end());
// The error messages that following gives is even worse. 
// The following sort method is from std namespace.

std::sort(numbers_list.begin(), numbers_list.end());
```

5. The problem is, the sort method expects a container that has random access iterator. 
6. Ranges use concepts. 

## References

1. 


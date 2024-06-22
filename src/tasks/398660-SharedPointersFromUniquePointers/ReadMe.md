# Auto

## Notes
1. This demos how to transform a unique pointer to a shared pointer. We move the memory ownership from unique pointer to the shared pointer using the move method.

```cpp
std::shared_ptr<int> shared_ptr_int_1 = std::move(unique_ptr_int_1);
```

2. On the other hand, we can't transform from std::shared_ptr to std::unique_ptr. At any given moment, there may be any number of shared pointers spread through your entire application working on the same object, If you were to instantly make one of those a unique ptr, what do you do with the remaining copies?? Unique ptr can't have copies anyway. So the compiler prevents you from doing this. Un comment the following and see.

3. At any given moment, there may be any number of shared pointers spread through your entire application working on the same object, If you were to instantly make one of those a unique ptr, what do you do with the remaining copies?? Unique ptr can't have copies anyway. So the compiler prevents you from doing this.

```cpp
// std::unique_ptr<int> unique_ptr_illegal_1 {shared_ptr_int_3}; // Compiler error
// std::unique_ptr<int> unique_ptr_illegal_2 =shared_ptr_int_3; // Compiler error
// std::unique_ptr<int> unique_ptr_illegal_3 =std::move(shared_ptr_int_3); // Compiler error
```

3. 

## References

1. 


# Arrays on heap

## Notes
1. Demos Array allocated on the heap with unique_ptr and make_unique
2. Release space for array automatically 
3. There are some limitations with make_unique.
4. The following works.
5. But can't initialize individual elements

```cpp
auto arr_ptr = std::make_unique<Dog[]>(3);
```

The following would not work.
```cpp
auto arr_ptr = std::make_unique<Dog[]>(3) {Dog("Dog7"), Dog("Dog8") , Dog("Dog9")};//Compiler error
auto arr_ptr = std::make_unique<Dog[]>{Dog("Dog7"), Dog("Dog8") , Dog("Dog9")};//Compiler error
```

## References
1. 


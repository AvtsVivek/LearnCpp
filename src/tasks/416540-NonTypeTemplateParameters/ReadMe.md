# Auto

## Notes
1. 
```cpp
template <typename T, size_t maximum>
class BoxContainer
{

}
```
2. Consider the `size_t maximum`. This is not a type that is dynamically swapped in by the compiler, but instead this type is had wired.  
```txt
BoxContainer<int, 10>; // Generates a template instance with int and 10.
BoxContainer<int, 11>; // Generates another tempalte instance. 
```

3. Observe the same in cppinsights.io. There will be multiple types generated. 

4. Traditionally Non type template parameters could be of int like primitive types like int, size_t, basicallly types you could use to model sizes and ranges. In Cpp20, this limitation is removed. 

5. It is not adviced to use non type template parameters. 

6. C++ 20 has relaxed the requirements for a type to be usable as a NTTP. It is now possible to use floating is still shaky across compiler so you can consider it non existent for now. 

7. These NTTP make code hard to read and puruse and comprehend. 

8. This gives error in the current versions. But in future versions, this could work. 

```cpp
Point<double,33.1> point2(11.22,22.33);// Compiler error : double not a valid
```

## References

1. 


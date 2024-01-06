# Linkage

## Notes
1. Introduces the idea of linkage.
2. A property associated with a name(symbol) that dictates how wide or narrow is the visibility of the name across translation units.
3. The name could be of variable, function or a class.

```cpp
//No linkage
void some_function(){
    int age {34}; // No linkage
    std::cout << "age : " << age << " &age : " << &age << std::endl;
}
```

4. The age variable there is only accessible only within the function. It is not acceble from global scope or other functions or other files(translation units).

5. Internal linkage. const variables have internal linkage. They are visible within the Translation unit but not from other TUs.
```cpp
const double distance{45.8}; // Internal linkage
```

6. Next we have external linkage. A global variable which is not const. Access and use this from other TUs and files.

```cpp
int itemCount{}; // extern linkage
void getdistance(); // external linkage
```


5. linkage is assigned to the names by the compiler.


## References

1. https://learn.microsoft.com/en-us/cpp/cpp/program-and-linkage-cpp


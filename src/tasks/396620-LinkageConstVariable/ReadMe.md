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


7. linkage is assigned to the names by the compiler.

8. Build and run the app. You will see something like this. Note the addresses of the distance are different. 

9. The linkage of const distance is just that pirticular Translation Unit. So the addresses are different
10. It can only be used from the TU where it is delcared.

```txt
distance(main) : 45.8  &distance : 0x7ff694c04050   
-----
distance (other_file) : 0 &distance  :0x7ff694c04090
```

## References

1. https://learn.microsoft.com/en-us/cpp/cpp/program-and-linkage-cpp


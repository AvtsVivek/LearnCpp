# Auto

## Notes
1. Returning shared pointer by reference. 
2. Compilier is going to give warnings. 
```txt
warning: reference to local variable 'dog_ptr' returned [-Wreturn-local-addr]
   12 |         return dog_ptr;
      |                ^~~~~~~
.\main.cpp:11:30: note: declared here
   11 |         std::shared_ptr<Dog> dog_ptr = std::make_shared<Dog>("Internal Dog_v2");
      |                              ^~~~~~~
```
3. When you run the program will crash.
4. So this is not recommended.
5. The same thing will happen with both of the following cases.

```cpp
std::shared_ptr<Dog> shared_ptr_dog_5 = get_shared_ptr_v2();
```

```cpp
std::shared_ptr<Dog> &shared_ptr_dog_5 = get_shared_ptr_v2();
```


## References

1. https://stackoverflow.com/q/15648844/1977871


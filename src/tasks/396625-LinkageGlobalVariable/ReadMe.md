# External Linkage

## Notes
1. Introduces external linkage. extern keyword
2. Note in the earlier example const is used and the linkage is internal
3. When we have something like the following with extern keyworkd, what we are saying is, this variable is 
   declared in someother Translation Unit. Note extern in the following.

```cs
extern int item_count; // Declaration of some variable defined in some
                       // other translation unit
```

3. Build and run, you will see something like this.
```txt
item_count(main) : 6 &item_count : 0x7ff7d5d40010      
-----
item_count(other_file) : 6 &item_count : 0x7ff7d5d40010
```

4. Note here the address is same. Thats because the variable is same.
5. Finally note external by default. The following is not needed. extern keyword is redundent here.

```cpp
extern void print_item_count();
```

## References
1. https://learn.microsoft.com/en-us/cpp/cpp/program-and-linkage-cpp


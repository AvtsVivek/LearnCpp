# External Linkage to const var

## Notes
1. const vars have internal linkage, meaning they are only accessible from within a translation unit.

```cpp
const double distance{45.7};
```

2. But we can change the linkage to external linkage by uisng the keyword extern

```cpp
extern const double distance{45.7};
```

3. Build and run. You will see someting like the following, which indicates that the const var has external linkge. The address is same as you can see.

```txt
distance(main) : 45.7
&distance(main) : 0x7ff7df0f4050

distance(some_other_file) : 45.7
&distance(some_other_file) : 0x7ff7df0f4050
```

## References

1. 


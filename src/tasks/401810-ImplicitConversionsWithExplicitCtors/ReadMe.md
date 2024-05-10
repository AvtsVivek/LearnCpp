# Auto

## Notes
1. If you add an explicit ctor like below, then it will lead to complie error as follows.

```cpp
explicit Number(int value);
```

2. The compiler error is because of the following line.

```cpp
std::cout << "n1 + 2  : " << (n1 + 2) << std::endl;
```

## References

1. 


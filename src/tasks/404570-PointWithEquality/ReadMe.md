# Auto

## Notes
1. If you are using cpp 20 compiler, then the following is not needed. 

```cpp
bool operator!=(const Item &right_operand) const
{
    return !(*this == right_operand);
}
```

2. c++ 20 should be used as follows. Note -std=c++20 in the end.

```txt
g++ "-static" -o main.exe .\*.cpp -std=c++20
```

1. The following != operator is commented out.

```cpp
bool operator!=(const Item &right_operand) const
{
    return !(*this == right_operand);
}
```

If the above is uncommented, then we get the following error.

```txt
.\main.cpp: In function 'int main()':
.\main.cpp:34:39: error: no match for 'operator==' (operand types are 'int' and 'Item')
   34 |     std::cout << "36 == i2 : " << (36 == i2) << std::endl; // Watch out : i2==36
      |                                    ~~ ^~ ~~
      |                                    |     |
      |                                    int   Item
.\main.cpp:36:39: error: no match for 'operator!=' (operand types are 'int' and 'Item')
   36 |     std::cout << "36 != i2 : " << (36 != i2) << std::endl;
      |                                    ~~ ^~ ~~
      |                                    |     |
      |                                    int   Item
```


## References
1. 


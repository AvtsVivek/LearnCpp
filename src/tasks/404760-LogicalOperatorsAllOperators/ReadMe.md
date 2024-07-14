# Auto

## Notes
1. The three way comparision operator, combined with == operator in cpp 20, will simplify things when it comes to logical operators. 
2. In this example, we have a type called number, and its simply warpping an integer. We want to compare two instances of Number. Also we want to compare directly with integers, number is simply wrapping int. 

```cpp
std::cout << "n1 > n2 : " << (n1 > n2) << std::endl;
std::cout << "15 > n2 : " << (15 > n2) << std::endl;
```

3. Also note that the ctor is marked explicit as follows, which means implicit conversioin from int to number is not possible. 

```cpp
explicit Number(int value);
```

4. If we want to support all the different types of conversions as in main.cpp file, we need to have all the operators as defined in the number class. This becomes very difficult to maintain. 

5. Also note that all the operators need to be non members free standing global functions. With these operators as members, its not possible, because we want the possibility of having an integer as left operand as below.   

```cpp
std::cout << "15 > n2 : " << (15 > n2) << std::endl;
```

6. With operator as member, the first operand has to be an object of your type. So the above would not work with member operators. It has to be this way. 

```cpp
std::cout << "15 > n2 : " << (n2 < 15 ) << std::endl;
```

7. In summary we need 18 functions to support these operations. With cpp 20, we can break this number down to just 4 functions, and further more we can make them member functions. This we will see in the subsequent example.

## References

1. 


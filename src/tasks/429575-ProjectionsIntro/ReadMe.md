# Auto

## Notes
1. Some algorithms support projections. 

2. Suppose, you have a class that represents a person. See the example. Naturally, you want to sort persons by a specific data member. You can write your own compare function.

```cpp
std::ranges::sort(persons, [](auto &a, auto &b) { return a.m_age < b.m_age; });
```
3. This is not preferrable, because, bugs can creep in like the following.

```cpp
// using a wrong comparison operator. Here I have typed > instead of <
std::sort( persons, []( auto & a, auto & b ) { return a.age > b.age ; } ) ;
```
Or may be

```cpp
// It doesn't compare the two parameters.
// Compiler don't warn it because it's perfectly well-formed code.
std::sort( persons, []( auto & a, auto & b ) { return a.age < a.age ; } ) ;
```

Or this

```cpp
// comparing wrong data members.
// the types are same so compiler don't warn it.
std::sort( persons, []( auto & a, auto & b ) { return a.age < b.height ; } ) ;
```

4. The C++ compiler cannot warn these codes because it's perfectly well-formed code. The compiler can't guess the programmer's unwritten intention 

5. The C++20 Ranges got you covered on this problem with the projection. You can simply pass the ranges::less and a pointer to the data member as arguments and it just works.

```cpp
std::ranges::sort( persons, {}, &Person::age ) ;
```

6. A projection is something that you pass as a third parameter to the sort function. We can pass a lambda as well. 

7. 

## References

1. https://stackoverflow.com/q/78973764/1977871


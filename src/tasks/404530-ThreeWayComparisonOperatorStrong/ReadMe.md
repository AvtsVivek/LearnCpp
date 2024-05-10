# Auto

## Notes
1. Know the result of a comparision :>, < or == in one go!

2. Spaceship operator <=>

3. <=> does not return an int like std::string::compare() or strcmp. But a type whose value is comparable to literal 0, not an int with a value of 0. 

4. The Spaceship operator <=> embodies the result of a comparison in C++ 20.

5. It returns a type whose value is comparable to literal 0, not an int whose value is 0.

6. It is meant to be used by the compiler to generate other operators(>, >=, <, <=), and it is rately used in user facing code. Although it is possible to do so.

7. The type of the return type describes the kind of comparision we support for out type.

8. The return values spaceship operator is any of the following three types. 
   1. std::strong_ordering, 
   2. std::week_ordering, 
   3. std::partial_ordering

9.  std::strong_ordering
   1. This is introduced in c++ 20
   2. This can be used to describe absolute equality in comparisons. For example for the fundamental type "int" we can have absolute equality. 

10. std::week_ordering
   1. A type that can be used to describe NON absolute equality(equivalence) in comparisions. For example two strings "Hello" and "HELLO" may be considered equivalent but not equal

11. The <=> operator will m ostly be set up as a member function, and the compiler will put in the magic necessary to make generated comparisioin operators work with implicit conversions as much as possible.

## References

1. https://en.cppreference.com/w/cpp/utility/compare/strong_ordering


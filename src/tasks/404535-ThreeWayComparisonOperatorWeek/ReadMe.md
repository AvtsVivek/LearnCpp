# Auto

## Notes
1. Know the result of a comparision :>, < or == in one go!

2. Spaceship operator <=>
3. <=> does not return an int like std::string::compare() or strcmp. But a type whose value is comparable to literal 0, not an int with a value of 0. 

4. The return values spaceship operator is any of the following three types. 
   1. std::strong_ordering, 
   2. std::week_ordering, 
   3. std::partial_ordering

5. std::strong_ordering
   1. This is introduced in c++ 20
   2. This can be used to describe absolute equality in comparisons. For example for the fundamental type "int" we can have absolute equality. 

6. std::week_ordering
   1. A type that can be used to describe NON absolute equality(equivalence) in comparisions. For example two strings "Hello" and "HELLO" may be considered equivalent but not equal

## References

1. https://en.cppreference.com/w/cpp/utility/compare/strong_ordering


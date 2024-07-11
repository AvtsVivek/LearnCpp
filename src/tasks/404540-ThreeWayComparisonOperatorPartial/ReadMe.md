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

7. std::partial_ordering
   1. A type that can be used to describe incomparable values for a certain type.

8. Given the statement

```cpp
auto result = (10 <=> 20);
```
what's the type of result ? 

9. A quize
   Given the expression

   auto result = (10.1 <=> 20);
   what will be the type of result ? 
   The answer is `std::partial_ordering`. One of the operands is a double floating point literal. With floating point values, there's always a possibility for values that are incomparable to others, thinks like NaN. This possibility is embodied in the std::partial_type and that's what will be the type of result.   

10. Given the code

        std::string_view str1 = R"(Hello)";
        std::string_view str2 = R"(HELLO)";
        auto result = str1 <=> str2;
   what will be the type of result ?
   The answer is `std::strong_ordering`. C++ strings support absolute equality by default in C++. Absolute equality is embodied by std::strong_ordering, so that's going to be the type of result. 

11. Given the expression

   auto result = (10 <=> 20) > 0;
   what will be the type of result ? 
   Its `bool`. Values in types returned by operator<=> can be compared to literal 0. The result of the comparison will be of type bool.

12. Given the code

   std::string a("Hello");
   std::string b("HELLO");
   auto result = (a<=> b);
   what will be the type of result ? 
   The answer is `std::strong_ordering`. `std::string` supports absolute equality by default in C++, we are comparing std::string with the <=> operator, so result will be of type std::strong_ordering.

13. Give the code
```cpp
std::strong_ordering do_something(){
    return std::weak_ordering::less;
}
 
int main()
{
    do_something();
    std::cout << "Done!" << std::endl;
    return 0;
}
```
   what will be the output? 
   The answer is the compilation will fail.

   We can do implicit conversions in the direction std::strong_ordering -->> std::weak_ordering -->> std::partial_ordering, but we can't go the other way round. In this case we're returning a std::weak_ordering type from a function that expects std::strong_ordering returned, and we can't implicitly convert from std::weak_ordering to std::strong_ordering.

13. Given the code

```cpp
std::partial_ordering do_something(){
    return std::weak_ordering::less;
}
 
int main()
{
    do_something();
    std::cout << "Done!" << std::endl;
    return 0;
}
```
   what will be the output?

   The answer is `Done`. We can convert in the direction std::strong_ordering -->> std::weak_ordering -->> std::partial_ordering . In this case we are returning std::weak_ordering from a function that expects std::partial_ordering returned. In other words, we're converting from std::weak_ordering to std::partial_ordering, which is OK. The code will compile, link, run and produce the output here.

14. Given the code

    int tmp{0};
    auto result = (10 <=> 20) > tmp;
    std::cout << "result : " << result << std::endl;
   what will be the output?

Values returned from operator<=> can only be compared to lieral 0, not 0 values stored in variables like we're doing here. So this will throw a compiler error. I would invite you to try this out on your local environment and see the compiler error with your own eyes.

15. 

## References

1. https://en.cppreference.com/w/cpp/utility/compare/strong_ordering
2. https://en.cppreference.com/w/cpp/utility/compare/weak_ordering
3. https://en.cppreference.com/w/cpp/utility/compare/partial_ordering


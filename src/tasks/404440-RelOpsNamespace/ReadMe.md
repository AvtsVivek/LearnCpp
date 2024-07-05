# Auto

## Notes
1. Given a user-defined operator== and operator< for objects of type T, implements the usual semantics of other comparison operators.
2. As of C++20, std::rel_ops are deprecated in favor of operator<=>.
3. So 'using namespace std::rel_ops;' are no longer recommended.
4. Instead what we need to do is include the templates in the header such as my_utility.h
5. he rel ops namespace has actually been deprecated in C++20 and should be avoided in all self respecting C++ code. C++ 20 offers the three way comparison infrastructure which improves things much more. So rel ops is just covered in the course for your awareness but you shouldn't use it unless really necessary.


## References

1. https://en.cppreference.com/w/cpp/utility/rel_ops/operator_cmp


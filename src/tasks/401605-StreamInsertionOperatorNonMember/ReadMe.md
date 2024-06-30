# Auto

## Notes
1. std::ostream is much more general than std::out. Its the parent class for std::cout

2. The insertion (<<) operator, which is preprogrammed for all standard C++ data types, sends bytes to an output stream object. 

3. When you overload the stream insertion operator, you ned to return ostream object. 

## References

1. https://learn.microsoft.com/en-us/cpp/standard-library/using-insertion-operators-and-controlling-format

2. https://en.cppreference.com/w/cpp/io/basic_ostream/operator_ltlt2
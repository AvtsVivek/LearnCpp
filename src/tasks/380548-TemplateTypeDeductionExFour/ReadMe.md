# Auto

## Notes
1. The thing we have between the function name and the argument list, which is officially called an explicity template argument; is telling the compiler to generate an std::string template instance for the maximum function. We are then calling that instance with (int,double) arguments. The compiler can't transfrom from int or double to std::string by default, so it won't know what to do with the arguments and will throw an error.


## References

1. 
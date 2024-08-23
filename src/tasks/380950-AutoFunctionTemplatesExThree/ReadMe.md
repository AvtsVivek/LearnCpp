# Auto

## Notes
1. If you use a trailing return type on a function template, you have to use bare auto as the return type, you can't add a redundant decltype(auto) as we're doing here. That's a rule enforced by the compiler and you'll get a compiler error if you violate it.

## References

1. 


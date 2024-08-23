# Auto

## Notes
1. We are using auto deduction with trailing return type here and the compiler will deduce the return type withoug a problem. The big problem here is that template resolution will only generate a template instance for the declaration. The definition won't be anywhere to be found . The code will compile just fine and fail on us just right at the linker stage. Your compiler will spit out a like "undefined reference to..." or "unresolved external symbols...".


## References

1. 


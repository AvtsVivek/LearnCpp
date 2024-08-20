# Auto

## Notes

1.  We are asking the compiler to deduce the return type of the function template. But the compiler needs to see the return statement to know how it's going to do the deduction. In other words, the full function definition has to show up before the point where we try to call and use the function template. In our case here, the function template definition desn't even show up in the main.cpp file. So we won't even pass the compilation phase here.

## References

1. 


# Auto

## Notes
1. The concept of inline function is useful in headerfile only libraries. 
2. These header files only libraries have both the definition as well as declaration togather, then we include that file in multple cpp file, we get errors. In such cases, we can prefix the declaration and definition in header file with inline. Then there will be no error.
3. This example demos that.


## References

1. https://stackoverflow.com/a/1759575/1977871


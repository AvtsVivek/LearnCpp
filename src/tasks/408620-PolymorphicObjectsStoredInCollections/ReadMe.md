# Auto

## Notes
1. Left assignability rule. References are not left assignable in cpp

2. The following would not even compile.

```cpp
//What if we store in references? Compiler error : references aren't left assignable
const Shape& shapes2[] {circle1,oval1,circle2,oval2,circle3,oval3};
```


## References

1. https://stackoverflow.com/a/45500930/1977871
2. https://www.quora.com/In-C-what-does-it-mean-a-reference-cannot-be-reassigned-Does-it-mean-if-a-reference-variable-is-assigned-with-another-variables-address-it-cannot-be-modified-or-does-it-mean-the-reference-variable-itself-cannot-be
3. https://www.reddit.com/r/cpp/comments/80zm83/no_references_are_never_null/


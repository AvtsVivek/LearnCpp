# Sized Array by ref.

## Notes
1. If we have a declaration like the following,

```cs
double sum(const double (&scores) [10]);
```

then the size is fixed. If we pass an array of different size, we get error. Size should be 10, no more and no less.

```txt
error: invalid initialization of reference of type 'const double (&)[10]' from expression of type 'double [11]'
   11 |     double sum_result = sum(student_scores);
```

2. 

## References

1. 


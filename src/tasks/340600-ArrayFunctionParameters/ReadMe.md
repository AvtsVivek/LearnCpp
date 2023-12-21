# Arrays and pointers as function parameters.

## Notes

1. Note the following. The first parameter `double scores[]` is actually `double *scores`

```cpp
double sum(double scores[], size_t count)
{ }
double sum(double *scores, size_t count) 
{ }
```

What is passed as the parameter is actually the pointer to the array.

## References

1. 


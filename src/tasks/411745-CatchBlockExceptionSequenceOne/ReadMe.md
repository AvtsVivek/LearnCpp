# Auto

## Notes
1. The compiler processes catch blocks in order and it will pick the first matching one it hits. We have thrown a SmallError and when we get to the first block, the compiler says, hum, a SmallError object inherits from SomethingIsWrong, so it is a SomethingIsWrong object and that's the catch block that will be chosen. Hence the output here. The lesson here is, when your exceptions are part of an inheritance hierarchy, the order of your catch blocks becomes important.


## References

1. 


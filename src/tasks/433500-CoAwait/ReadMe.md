# Auto

## Notes
1. c++ 20, introduces three keywords that help pause and resume coroutines.
   1. co_yield: suspends the execution and returns a value.

   2. co_return: completes execution and optionally returns a value

   3. co_await: suspends the execution untill resumed.

2. If a function has one of those keywords, it becomes a a coroutine. There is no special syntax for coroutines. 

3. Also its not every function in cpp that can be a coroutine. The functions below cant be coroutines.
   1. constexpr functions.
   2. constructors
   3. desctructors.
   4. The main function.
4. So the co routine keywords cannot show up in these functions.


## References

1. 


# Auto

## Notes
1. Cpp works the following way.
   1. If an exception is not hndled anywhere in the app, the function `std::terminate()` located in `<exception>` will be called.
   2. `std::terminate` will in turn call std::abort() locaed in `<cstdlib>` to actually kill the program.

2. This example shows how to terminate the app in a controlled way. 
3. Also demos sleep.

## References

1. 


# Configure Cpp

## Steps
1. Compilation error.
2. We have our class template specialization in the map.h file, but the actual class template we are specializing on top of is no where to be seen. The template <> thing we have in front of our specialization tells the compiler that the following specialization is tied to a previously defined class template named Map. If that class template can't be found, you'll get a hard compiler error.


## References
1. 
2. 


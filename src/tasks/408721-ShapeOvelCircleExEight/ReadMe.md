# Auto

## Notes
1. The call p_shape->draw(20); would compile and run fine because the draw functions are virtual throughout our inheritance hierarchy. But the Circle::go_round_and_round method is not virtual and it will have been sliced off in the object pointed to by p_shape. Hence the compiler error you see if you run the code in the main function.


## References

1. 


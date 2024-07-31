# Auto

## Notes
1. In the main function, we are creating a full blown Circle object and using a Shape pointer to point to it. Because no virtual functions aren't involved the compiler does static binding and you can't access any non specifific methods or member variables through the p_shape variable. In other words, all Oval and Circle info has been completely sliced off from the circle object. This includes the Circle::go_round_and_round() method. Hence the compiler error you see when you run the code below.


## References

1. 


# Auto

## Notes
1. Because the catch block isn't using references polymorphism isn't going to kick on and the SmallError part is going to be sliced off! What's going to end up in the body of the catch block is just a SomethingIsWrong object and we will use SomethingIsWrong::what to print the message. Hence the output here.


## References

1. 


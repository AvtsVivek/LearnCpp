# Auto

## Notes
1. The code will compile, run and call the Shape::draw(int color_depth) method. In the eyes of the compiler, a Circle IS a Shape, so we can create a full blown Circle object and and let a Shape pointer point to it. Be careful here though, there are no virtual functions involved in our hierarchy. p_share will therefore be pointing to ONLY the Shape part of the Circle object. All the non Shape related information will have been thrown away by the compiler. This is known as slicing.


## References

1. 


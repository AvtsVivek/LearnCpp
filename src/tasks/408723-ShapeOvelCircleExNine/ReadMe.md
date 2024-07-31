# Auto

## Notes
1. Just because one overload of the Shape::draw method is virtual, doesn't mean all of them are virtual. The Shape::draw() method in non virtual, so the Circle part of the object will have been sliced off by the time we try to call the draw method on p_shape. The compiler will do static binding here and call the Shape version of the draw() method.


## References

1. 


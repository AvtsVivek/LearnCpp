# Auto

## Notes
1. Transforming from base class pointer or reference to derived class pointer or reference, at run time. 
2. Makes it possible to call non polymorphic methods on derived objects. 
3. Introduces `dynamic_cast<Dog *>`
4. Overusing down casts is a sign of bad design, if you find yourself doing this a lot to call polymorphic functions on dervied objects, may be you should make that function polyorphic in the first palce. 

## References

1. 


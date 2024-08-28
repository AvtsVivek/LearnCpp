# Auto

## Notes
1. We can even steal from LVAlues using a special facility we have in cpp that is, std::move.
2. std::move does not move data by itself, it just casts its parameter to an rvalue
3. The moving of data is done when we construct an object from the resulting rvalue or if we assign it to an other object of our class. 
5. So its possible to treat lvalues as rvalues. Just wrap your lvalues using std::move. This will tell the compiler to treat your lvalue as an rvalue. 

## References

1. https://stackoverflow.com/a/27026280/1977871


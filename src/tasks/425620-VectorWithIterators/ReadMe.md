# Auto

## Notes
1. std::vector stores the elements contiguously in memory.
2. It supports random access iterators and operators like [], *, and ->
   1. It also supports fwd and reverse iterators. You can also use constant iterators with it if thats what works for your situation.
3. Its good for retrieving elements and any index and that happens very fast.
4. Inserting elements to the back is very fast, when the capacity is enough.
5. Inserting to the front is very expensive, we have to move all the elements towards the right to make room for the new element.
6. Just like BoxContainer, std::vector automatically grows its capacity to accomodate for new items, if the old capacity is not enough.
7. std::vector is a good start as a container choice if you are not sure about which container you need in early stages of your designs.


## References

1. 


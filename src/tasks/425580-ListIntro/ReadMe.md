# Auto

## Notes
1. Very fast insertions and removals in the middle of the container.
2. We have pointers pointing in both direction, fwd iterators as well as backward iterations.
3. It is implimented as a double linked list in memory.
   1. item1 --> item2 --> item3 --> item4 --> item5 --> item6
   2.       <--       <--       <--       <--       <--         
4. each node has a pointer, to the previous and next element. 
5. Elements may be soted non contiguously in memory. Its is aid that hte memory locality of list and foward_lists are very poor.
6. Poor memory locality makes things hard for the CPU optimizationis when your list is being traversed.
7. Doest no provide random access operators like []
8. std::list provides obht fwd and reverse iterators. This is because each item in the list has two pointers, one to the previous and one to the next element.
9. To access a given item in the list, you have to perform a linear search either from the beginning or the end.
10. Once you are at the correct locatioin in the list hower, inserting and removing is very fast. Its just a matter of rewiring the pointers.
11. Because of their downsides
    1.  Lack of operator[] and other random access operators
    2.  Lack of memory locality.
    3.  List foward list containers should be avoided. std::vector will almost always be a better fit. 
    4.   

## References

1. 


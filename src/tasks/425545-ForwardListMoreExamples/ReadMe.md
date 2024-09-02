# Auto

## Notes
1. Very fast insertions and removals anywhere in the container, including the middle of the container. 
2. It is implimented as a single linked list in memory.
3. item1 --> item2 --> item3 --> item4 --> item5 --> item6 

4. Each node has pointer to the next elelment.

5. Elements may be stored in on contiguously in memory. It is said that the memory locality of forward_list is very poor.

6. Poor memory locality makes things hard of the CPU optimizations when your list is being traversed.

7. forward_list does not provide random access operators like[]

8. forward_list only has forward iterators and does not have reverse iterators. The reason is because we only have pointer to the next lelmet and not the previous element, so we cna really ove forward and not backwards. 

9. Difference between emplace and insert
   1.  In C++, all containers (vector, stack, queue, set, map, etc) support both insert and emplace operations.Both are used to add an element in the container. The advantage of emplace is, it does in-place insertion and avoids an unnecessary copy of object. For primitive data types, it does not matter which one we use. But for objects, use of emplace() is preferred for efficiency reasons.

10. Emplace takes the arguments necessary to construct an object in place, whereas insert takes (a reference to) an object.

## References

1. https://cplusplus.com/reference/forward_list/forward_list/
2. https://en.cppreference.com/w/cpp/container/forward_list
3. https://stackoverflow.com/a/14788288/1977871
4. https://www.geeksforgeeks.org/emplace-vs-insert-c-stl/


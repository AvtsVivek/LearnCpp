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

## References

1. https://cplusplus.com/reference/forward_list/forward_list/
2. https://en.cppreference.com/w/cpp/container/forward_list


# Auto

## Notes
1. Container Adaptors
   1. Customizing and restraining the interface of some sequence containers to fit a particular purpose.
2. Specializations of sequence containers.
   1. std::stack
   2. std::queue
   3. std::priority_queue.
3. Stack: First in last out semantics.
   1. To create a stack container, vector list or deque can be used as a starting point.
   2. Find the following at the following [stack reference](https://en.cppreference.com/w/cpp/container/stack) 
      1. Container	-	The type of the underlying container to use to store the elements. The container must satisfy the requirements of SequenceContainer.
4. [Sequence Container](https://en.cppreference.com/w/cpp/named_req/SequenceContainer): A SequenceContainer is a Container that stores objects of the same type in a linear arrangement.

5. std::stack is not a container per say. Its an interface built of top of a few possible sequence containers(namely std::verctor, std::list, std::dqueue), to allow a selected set of few operations. 

6. std::stack works in a last in first out fashion(LIFO). a similar thing we see with a stack of plates in the restaurant. 

7. To impliment LIFO semantics, a stack requires the underlying container to support back(), push_back(), and pop_back(). What is the difference between back() and pop_back()? Not clear, need to find out. 

8. std::vercotr, std::list, std::deque are possible optioins for the underlying container, with std::dque being the default one.

9. We access elements only from top with top() method. We take things out of the stack through the pop() method. It should be noted that pop() does not return you anything. It just takes the top element off the stack and the element below it becomes the new top element. 

10. This can happen untill the stack becomes empty. 

11. std::stack has size() method we can use to query the current number of elements in the collection. 

12. 

## References

1. https://en.cppreference.com/w/cpp/container/stack

2. https://en.cppreference.com/w/cpp/container/queue

3. https://en.cppreference.com/w/cpp/container/priority_queue

4. https://en.cppreference.com/w/cpp/container


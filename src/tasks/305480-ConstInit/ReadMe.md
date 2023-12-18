# ConstInit.


## Notes
1. constinit - asserts that a variable has static initialization, i.e. zero initialization and constant initialization, otherwise the program is ill-formed.

2. The constinit specifier declares a variable with static or thread storage duration. 

3. If a variable is declared with constinit, its initializing declaration must be applied with constinit. 

4. If a variable declared with constinit has dynamic initialization (even if it is performed as static initialization), the program is ill-formed. 

5. If no constinit declaration is reachable at the point of the initializing declaration, the program is ill-formed, no diagnostic required.

6. The concept is not yet clear. Static or thread storage duration is not clear.

7. We cannot take a variable in the main function and mark it as constinit.

8. constinit is ment to solve problems that may come up before the main function runs.
9. constinit does not imply const. You have to explicitly mark it as const.

 
## References

1. No Video found
2. https://en.cppreference.com/w/cpp/language/constinit
3. https://stackoverflow.com/q/57845131/1977871
4. https://en.cppreference.com/w/cpp/language/constinit
5. 

# Auto

## Notes
1. When you call the virtual function through a base class pointer, the access specifier in the base class determines whether the function is accessible, regardless of the access specifier in the derived class.

2. In general, when the function call is done through dynamic binding, the access specifier of the base class applies, if the call is done through static binding, the access specifier of the dervied class applies. 

3. As a rule of thumb, except for the base class, I mark all my other derived overrides as private, unless the specific problem I am solving requires otherwise. 
   
4. 

## References

1. 


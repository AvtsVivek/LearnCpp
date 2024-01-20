# Cyclic Dependency 

## Notes

1. Note `shared_ptr<Person> m_friend;` in the person.h

```cpp
private:
    std::shared_ptr<Person> m_friend; // Initialized to nullptr
    std::string m_name{"Unnamed"};
```

2. Build and Run. You will see something like this.
```txt
Constructor for person  Alison called.
Constructor for person  Beth called.  
Done
```

3. Note that destructor NOT is called.

4. Now change to `weak_ptr<Person> m_friend;` from `shared_ptr<Person> m_friend;` in the person.h

```cpp
private:
    std::weak_ptr<Person> m_friend; // Initialized to nullptr
    std::string m_name{"Unnamed"};
```

5. Buid and Run. 

```txt
Constructor for person  Alison called.
Constructor for person  Beth called.  
Destructor for person  Beth called.   
Destructor for person  Alison called. 
Done
```

6. Now you see that the destructor is called.

![Cyclic Dependency](50_50_Cyclic_Dependency.jpg)

7. So the problem comes when reclaiming the memory. If we use shared_ptr memory cannot be released becase of cyclic dependency. So thats where weak_ptr comes into picture.

8. When we use shared_ptr, the pointers are removed at the end of the program, but memory is not reclaimed, so there will be memory is leaked. So use weak ptrs.


## References

1. https://stackoverflow.com/q/15648844/1977871

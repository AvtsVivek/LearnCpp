# Constant Iterators

## Notes
1. Why do we need them in the first place? Consider the following. The following will give error. This is because of the const keyword. 

```cpp
const BoxContainer<int> copy(vi);
```

2. The collection is const, and the compiler will not allow to use iterators that could be used to modify the collection. 
3. Remove the `const` keyword and it will now compile. 

```cpp
BoxContainer<int> copy(vi);
```

4. So if we provide const iterators, then the compiler will pick up the const iterator, when working with const container. 

5. Another example is, we can have a function like the following which take a pararmeter by const reference. 

```cpp
template <typename T>
void print(const BoxContainer<T>&  c){
    for(auto i : c){ // Computation happens here.
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
```

6. The parameter is a const, and so the compiler does not allow to use non const iterator. So when we have a call to such a function like the following, the compier will issue errors.

```cpp
print(copy);
```

7. The range based for loop uses non const begin and end methods in the iterator on a const container. And thats the problem for the compiler and so the compiler will issue errros. 

8. Thus we need a const iterator.

## References

1. 


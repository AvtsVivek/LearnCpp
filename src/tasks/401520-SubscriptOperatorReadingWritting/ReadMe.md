# Auto

## Notes
1. Earlier we had
```cpp
double operator[](size_t index) const{
    assert( (index == 0) || (index == 1));
    if(index == 0){
        return m_x;
    }else{
        return m_y;
    }
}
```
Now we have the following. This is no longer a const function. And we are returning a reference. That we can use now to modify the member variables.

```cpp
double& operator[](size_t index) {
    assert( (index == 0) || (index == 1));
    return (index==0)? m_x : m_y;
}
```

## References

1. 


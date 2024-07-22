# Auto

## Notes
1. This is an exercise.
2. We are attempting to go through a base reference to manage potentially derived objects. The compiler will do static binding by default and if we call print on a One pointer, the One::print method will be called. At the One level, we don't have the m_2, or m_3 concept yet, so we'll only print the data in m_1. Mind your steps here though, the actual data that was passed when creating the objects will be printed, hence the 1,10 and 100 we see printed here. Make sure this machinery is clear in your mind.

```txt
data [one:1]  
data [one:10] 
data [one:100]
```

## References

1. 


# Auto

## Notes
1. This is an exercise.
2. We are attempting to go through a base pointer to manage potentially derived objects here. An we know that the compiler does static binding by default. So if we call print on a One pointer, the One::print method will be called. At the One level, we don't have the m_2 and m_3 members yet, so we'll only print the data in m_1. But mind your steps here; the actual data that was passed for m_1 when creating the object will be printed. Hence the 1,10 and 100 we see printed here. Make sure this machinery is clear in your mind.

```txt
data [one:1]  
data [one:10] 
data [one:100]
```

## References

1. 


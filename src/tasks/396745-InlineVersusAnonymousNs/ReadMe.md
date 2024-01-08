# Auto

## Notes
1. This example is similar to the earlier examples. Here we are comparing three differnt scenarios. First the inline keyword. Then we have namespace.

2. Build and Run. When using inline, the address is same. For namespace the address is different. This behavior is similar to the eralier example with static keyword. See the example 396740-InlineVersusStatic

```txt
age(utility1) : 
age  : 12
&age : 0x7ff64ad030c0     
age(utility2) : 
age  : 12
&age : 0x7ff64ad030c0     
----
distance(utility1) :      
distance : 23.9
&distance : 0x7ff64ad00010
distance(utility2) :
distance : 23.9
&distance : 0x7ff64ad00020
```


## References

1. 


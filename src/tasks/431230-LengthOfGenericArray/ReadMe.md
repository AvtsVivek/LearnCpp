# Auto

## Notes
1. The size of an array is not saved anywhere. 
   1. https://stackoverflow.com/a/22691853/1977871
2. The short answer: In C, an array size cannot be retrieved from a pointer. The size must be passed separately.

3. The slightly-less-short answer: In C, a pointer is just an address to a spot in memory. The pointer does not even guarantee that there is a valid array or variable here; it is just a descriptor of a memory location.

4. In fact, in C, the concept of an array "size" is somewhat loose. A certain amount of consecutive memory can be allocated, but there is no checking as to if a pointer leaves this memory.

## References

1. https://stackoverflow.com/questions/22691789/how-to-get-the-size-of-array-using-the-pointer-to-this-array-in-c
2. https://stackoverflow.com/q/22691789/1977871
3. https://stackoverflow.com/a/22691878/1977871
4. https://stackoverflow.com/q/492384/1977871
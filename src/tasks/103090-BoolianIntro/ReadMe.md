

What is std::boolalpha and std::noboolalpha 

## Notes

1. Alphanumerical bool values Sets the boolalpha format flag for the str stream.

2. When the boolalpha format flag is set, bool values are inserted/extracted by their textual representation: either true or false, instead of integral values.

3. This flag can be unset with the noboolalpha manipulator.

4. For standard streams, the boolalpha flag is not set on initialization.

5. Bool occupy 8 bits of memory, not single bit. That is one full byte.

## References


1. https://youtu.be/8jLOx1hD3_o?t=15412
2. https://cplusplus.com/reference/ios/noboolalpha/
3. https://cplusplus.com/reference/ios/boolalpha/


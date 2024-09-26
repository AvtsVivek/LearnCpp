# Auto

## Notes

1. For reverse we need -- operator
2. Also for reverse function to work, we need bidirectional tag is needed.

```cpp
// using iterator_category = std::forward_iterator_tag; // This is giving a compiler error.
using iterator_category = std::bidirectional_iterator_tag; // What you need is this bidirectional tag
```

3. 

## References

1. 


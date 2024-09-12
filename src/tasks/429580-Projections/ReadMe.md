# Auto

## Notes
1. Some algorithms support projections. 
2. The following is a projection. It is in the form of a lambda. 

```cpp
[](auto const &p) { return p.m_x; }
```

3. Sorting with a projection : The data is passed into the projection before. it's passed into the comparator. `std::less<>{}` is going to compare two doubles instead of comparing two Points.

```cpp
std::ranges::sort(points, std::less<>{}, [](auto const &p) { return p.m_x; });
```

4. Thats for ascending. If you want descending, then use greater. `std::greater<>{}`

5. You can pass public members directly as projectors as follows.

```cpp
std::ranges::sort(points, std::less<>{}, &Point::m_y);
```

6. 

## References

1. https://stackoverflow.com/q/78973764/1977871


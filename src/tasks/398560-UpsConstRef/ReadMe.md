# Pass unique pointer by reference.

## Notes
1. Demos that we can pass a unique pointer by ref

2. In this example, the following will give error.

```cpp
d.reset();
```

3. This reset is going to modify this shared pointer object. So we cannot do that. We can set some info about the dog, and print info as well. But we cannot reset the unique pointer object itself. Thats because its a const reference. See below, const ref

```cpp
void do_something_with_dog_v2(const std::unique_ptr<Dog> &d)
{
	d->set_dog_name("Rior");
	d->print_info();
	// d.reset(); // Compiler error
}
```

## References

1. 


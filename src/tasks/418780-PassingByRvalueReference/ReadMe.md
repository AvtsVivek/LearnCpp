# Auto

## Notes
1. Problems might pop up when you pass rvalues references to functions or methods. 

2. If by chance, an rvalue happens to be assigned a name, its trated by the compiler as if its an lavalue. In other words, if its assigned or copy assigned from, the copy constructor of the copy assignement operator will be called. 

3. By design or by definition, an lvalue is one that has a name, and you can grab that address of and use some kind of pointer or reference to manage it.

4. The moment somehting has a name and even if that happens to be an rvalue that will become an lvalue and you need to be careful about this.

5. If you give a name to your lvalue and try to pass it to functions or method, you are going to be doing copy semantics and not move semantics that you would otherwise be wanting to use.

## References

1. 


# Compilation and linking.

## Notes
1. Discusses compilation and linking seperately.
2. For compilation, only the declarationis are needed. Not the actual implimentation definition.
3. So just comment out the contents of utlities.cpp then compile.

```cs
// double add( double a, double b){
// 	return a + b;
// }

// double multiply(double a, double b){
// 	return a * b;
// }
```

4. Now if you compile, then it will succeede. But linking will fail. You will get errror like the following during lining.

```txt
C:/Program Files/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/13.2.0/../../../../x86_64-w64-mingw32/bin/ld.exe: C:\Users\koppviv\AppData\Local\Temp\cc8CnMoL.o:main.cpp:(.text+0x26): undefined reference to `add(double, double)'
collect2.exe: error: ld returned 1 exit status
```

5. Function calls are resolved at the linking stage. So you need to have the definitions at that time. The compiltioin is intrested only in the declarations.

6. 

## References

1. 


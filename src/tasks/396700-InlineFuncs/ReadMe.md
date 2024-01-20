# Inline keyword as applied to functioins

## Notes
1. In two different files(or translation units) we have the same function and a variable defined.
2. First let there be no `inline` keyword.
3. Without `inline` keyword, if we compile, then we get error as follows.

```txt
C:/Program Files/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/13.2.0/../../../../x86_64-w64-mingw32/bin/ld.exe: C:\Users\koppviv\AppData\Local\Temp\ccLu75Qj.o:utility2.cpp:(.text+0x0): multiple definition of `some_function()'; C:\Users\koppviv\AppData\Local\Temp\ccgxEBJz.o:utility1.cpp:(.text+0x0): first defined here
C:/Program Files/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/13.2.0/../../../../x86_64-w64-mingw32/bin/ld.exe: C:\Users\koppviv\AppData\Local\Temp\ccLu75Qj.o:utility2.cpp:(.data+0x0): multiple definition of `age'; C:\Users\koppviv\AppData\Local\Temp\ccgxEBJz.o:utility1.cpp:(.data+0x0): first defined here
collect2.exe: error: ld returned 1 exit status
```

4. To avoid that, we can prefix with `inline` keyword at all the four places, two before function in both the files, and similarly two before the variable in both files.

5. Note the main.cpp file, we are not calling the some_function() from main. Its only declared and defined. Defined in multiple files.

6. Also finally note that you can only compile, will will not be able to call that function from the main function.

```txt
C:/Program Files/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/13.2.0/../../../../x86_64-w64-mingw32/bin/ld.exe: C:\Users\koppviv\AppData\Local\Temp\ccM04bJF.o:main.cpp:(.text+0xe): undefined reference to `some_function()'
collect2.exe: error: ld returned 1 exit status
```

7. The reason, the function is accessible from the two translation units utility1.cpp and utility2.cpp. But at the same time, this is still not accessible from main. Note this is prefixed with `inline`.

8. The idea here is, if we want to define the same function in two differnt files, then we can use `inline` function. Also note that when we use `inline` keyword, then the compiler will merge the two definitions into one, so there is only function in the end.



## References

1. https://stackoverflow.com/a/1759575/1977871


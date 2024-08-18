# Auto

## Notes
1. This is same as earlier example, but in a single file.

2. Go to https://cppinsights.io/

3. Paste the entire main file contents in there. Click the triangle run button.

4. Find the following.
   1. In the insight look for, /* First instantiated from: insights.cpp:44 */
   2. In the insight look for, /* First instantiated from: insights.cpp:47 */

5. Observe the generated classes.

6. Next from the friend function, remove the type arg, so from the following 

```cpp
friend void some_func<T>(TemplateClass<T> param);
```

to 

```cpp
friend void some_func(TemplateClass<T> param);
```

7. Now run again, and look for the following again.
   1. In the insight look for, /* First instantiated from: insights.cpp:44 */
   2. In the insight look for, /* First instantiated from: insights.cpp:47 */

8. This is drastically different. 
9. If you compile, with out <T>, you will get a bunch of compiler errors.

```txt
.\main.cpp:15:49: warning: friend declaration 'void some_func(TemplateClass<T>)' declares a non-template function [-Wnon-template-friend]  
   15 |     friend void some_func(TemplateClass<T> param);
      |                                                 ^
.\main.cpp:15:49: note: (if this is not what you intended, make sure the function template has already been declared and add '<>' after the function name here)
C:/Program Files/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/13.2.0/../../../../x86_64-w64-mingw32/bin/ld.exe: C:\Users\koppviv\AppData\Local\Temp\ccia2Rbn.o:main.cpp:(.text+0x54): undefined reference to `some_func(TemplateClass<int>)'
C:/Program Files/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/13.2.0/../../../../x86_64-w64-mingw32/bin/ld.exe: C:\Users\koppviv\AppData\Local\Temp\ccia2Rbn.o:main.cpp:(.text+0x60): undefined reference to `some_func(TemplateClass<double>)'
collect2.exe: error: ld returned 1 exit status
```

So instead of <T> we can as well have just the brackets <>

```cpp
friend void some_func<>(TemplateClass<T> param);
```


## References
1. Template code almost always goes in header files. 
2. https://stackoverflow.com/a/13025333/1977871



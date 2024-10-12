# Auto

## Notes
1. Visibility and Reachability
   1. Every name we have expported so far was visible in the importing translation unit.
   2. Some names in your nodule based code are reachable, but not visible.
   3. A name is reachable when you cannot explicitly mention its name in other translation units, but it can be accessed indirectly.
   4. Anything visible is also reachable, but the reverse is not true.
2. The point class is not exported. But the function ` generateRandomPoint` is exported. So we can use it to generate a point.
3. Directly importing gives compiler problems like the following.
```txt
during RTL pass: expand
In file included from C:/Program Files/mingw64/include/c++/13.2.0/string:43,
                 from C:/Program Files/mingw64/include/c++/13.2.0/bits/locale_classes.h:40,
                 from C:/Program Files/mingw64/include/c++/13.2.0/bits/ios_base.h:41,
                 from C:/Program Files/mingw64/include/c++/13.2.0/ios:44,
                 from C:/Program Files/mingw64/include/c++/13.2.0/ostream:40,
                 from C:/Program Files/mingw64/include/c++/13.2.0/iostream:41,
of module C:/Program Files/mingw64/include/c++/13.2.0/iostream, imported at math.ixx:3:
In member function 'constexpr _Tp* std::allocator< <template-parameter-1-1> >::allocate(std::size_t) [with _Tp = char]',
    inlined from 'static constexpr _Tp* std::allocator_traits<std::allocator<_CharT> >::allocate(allocator_type&, size_type) [with _Tp = char]' at C:/Program Files/mingw64/include/c++/13.2.0/bits/alloc_traits.h:482:28,
    inlined from 'static constexpr std::__cxx11::basic_string<_CharT, _Traits, _Alloc>::pointer std::__cxx11::basic_string<_CharT, _Traits, _Alloc>::_S_allocate(_Char_alloc_type&, size_type) [with _CharT = char; _Traits = std::char_traits<char>; _Alloc = std::allocator<char>]' at C:/Program Files/mingw64/include/c++/13.2.0/bits/basic_string.h:126:39:
C:/Program Files/mingw64/include/c++/13.2.0/bits/allocator.h:193:39: internal compiler error: in make_decl_rtl, at varasm.cc:1442
  193 |             if (__builtin_mul_overflow(__n, sizeof(_Tp), &__n))
      |                 ~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~
libbacktrace could not find executable to open
Please submit a full bug report, with preprocessed source (by using -freport-bug).
See <https://gcc.gnu.org/bugs/> for instructions.
```

4. So use include instead as follows. So in the following, instead of import <iostream>, use #include <iostream>
```cpp
#include <iostream>

export module math;

// The following will give compiler error in case of g++
// import <iostream>;
``` 
4. Project files
   1. math.ixx
   2. main.cpp
5. For Clang. [Standard C++ Modules documenation](https://clang.llvm.org/docs/StandardCPlusPlusModules.html) and repurposed it to compile the projects in this chapter.
6. Compilation steps on 3 major compilers:
   1. Visual C++ (Windows)
      1. NOTE: concepts, vector and algorithm can be imported.
      2. With the latest version of Visual C++.
         1. Create a console project
         2. Set the standard to C++20
         3. Right click on the solution name in Project Explorer and select add> Module
         4. Add a module file named boxcontainer.ixx and put in the code
         5. Put the code in the main.cpp file
         6. Build and run the project.
         7. If <iostream> can't be processed go to properties> C/C++> General and toggle `Scan Sources for Module Dependencies` to true.
   2. GCC(13.2.0)
      1. NOTE: With GCC, mporting <iostream> in the math.ixx file is resulting in errors.
      2. For gcc, we'll just stick to old #include in both files.
         1. g++ -std=c++20 -fmodules-ts -x c++-system-header iostream
         2. g++ -std=c++20 -fmodules-ts -c -x c++ math.ixx
         3. g++ -std=c++20 -fmodules-ts main.cpp math.o -o rooster.exe
   3. Clang(16) - Windows - Winlibs - Use the terminal. Not powershell.
      1. NOTE: <random> is throwing weird errors. Reverting to to including it.
      2. clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
      3. clang++ -std=c++20 -fmodule-file=iostream.pcm  -x c++-module math.ixx --precompile -o math.pcm
      4. clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
      5. clang++ -std=c++20 math.pcm -c -o math.o
      6. clang++ -std=c++20 main.o math.o -o rooster
   4. Clang(18)
      1. NOTE: <random> is throwing weird errors. Reverting to to including it.
      2. clang++ -std=c++20 -stdlib=libc++ -x c++-system-header iostream --precompile -o iostream.pcm
      3. clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm  -x c++-module math.ixx --precompile -o math.pcm
      4. clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
      5. clang++ -std=c++20 -stdlib=libc++ math.pcm -c -o math.o
      6. clang++ -std=c++20 -stdlib=libc++ main.o math.o -o rooster

## References

1. 


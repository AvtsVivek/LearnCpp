# Auto

## Notes
   
1. The common practice we've been following so far is to put full function template definitions in header files. This works because function templates aren't real C++ code, they're bleprints the compiler uses to generate actual C++ code in template instances. Template specializations however are real C++ code. If multiple function template specialization definitions show up in multiple files, you'll get redefinition errors, hence the compiler errors you'll get if you try to compile code here.


## References

1. 


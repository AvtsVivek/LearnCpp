# Auto

## Notes
1. So in this example, we dont need those three catch constructs. 

```cpp
catch(CriticalError& ex){
    std::cout << "CriticalError Exception cought : " << ex.what() << std::endl;
}
catch(SmallError& ex){
    std::cout << "SmallError Exception cought : " << ex.what() << std::endl;
}
catch(Warning& ex){
    std::cout << "Warning Exception cought : " << ex.what() << std::endl;
}
```

2. The following is waht is used instead.

```cpp
catch (SomethingIsWrong &ex)
{
    std::cout << "SomethingIsWrong Exception cought : " << ex.what() << std::endl;
}
```



## References

1. 


# Auto

## Notes
1. 	Can't transform from std::shared_ptr to std::unique_ptr. At any given moment, there may be any number of shared pointers spread through your entire application working on the same object, If you were to instantly make one of those a unique ptr, what do you do with the remaining copies?? Unique ptr can't have copies anyway. So the compiler prevents you from doing this.



## References

1. 


# Auto

## Notes
1. The move semantics are a bunch of features that really make up a mechanism we have in cpp, to avoid throwing those temp objects, that might contain the data we need. The move semantics can help us avoid unnecessary copies.

2. Move semantics are all about stealing data from temporaries.
3. Introduced in cpp 11.

4. LValues are things you can grab an address for and use at a later time. Things you can store in memory in long term basis. 

5. RValues are transient or temporary in nature, they only exist for a short time, and are quickly destroyed by the system when no longer needed. 

6. 

![One](50_50_Box_Container.jpg)

![Two](51_50_Box_Container_temp.jpg)

![Three](52_50_Box_Container_AfterCopy.jpg)

![Four](52_51_Box_Container_AfterCopy.jpg)

![Five](53_51_Box_Container_Pointing.jpg)

![Six](55_51_LVAlueExamples.jpg)

![Seven](57_51_RVAlueExamples.jpg)

![Eight](58_51_RVAlueMoreExamples.jpg)



## References

1. 


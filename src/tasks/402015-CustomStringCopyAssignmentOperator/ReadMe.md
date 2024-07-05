# Auto

## Notes
1. By default, the compiler will generate default operator= that does blind, shallow memberwise copies. After the assignment out = in , out and in will have the same address stored in their respective m_data members. Execution will leave the inner block and in will be wiped out and its memory released. Once we hit back the main function scope, out::m_data will contain the address to a memory location that's already released. Using data in that memory will result in undefined behavior which is bad. The message here is that we need a custom copy assignment operator here.

## References

1. 



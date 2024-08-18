# Auto

## Notes

1. Our method specialization in map.cpp is marked as inline, effectively preventing it from being found from other translation units. When we hit the linker stage, the definition won't be found for the call to compare_to we do in the main function and we'll get a nasty linker error. That was just a little tray to completely throw you off balance :-)

## References

1. 


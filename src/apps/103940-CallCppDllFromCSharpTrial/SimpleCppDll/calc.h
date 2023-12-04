#pragma once

#include <comdef.h>

extern "C" __declspec(dllexport) int Multiply(int numberOne, int numberTwo);

extern "C" __declspec(dllexport) BSTR GetCalOptions();
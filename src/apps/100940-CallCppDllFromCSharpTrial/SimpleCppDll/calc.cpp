#include "pch.h"

#include "calc.h"

BSTR GetCalOptions() {
	return SysAllocString(L"Multiply is the only option at the moment");
}

int Multiply(int number1, int number2) {
	return number1 * number2;
}
module;

#include "pch.h"

#include <ostream>

export module math;

export namespace math
{
	// https://stackoverflow.com/a/1041880/1977871
	export
	{
		extern "C" __declspec(dllexport) double MultiplyFromModule(double a, double b) {
			return a * b;
		}

		double DivideNumbersFromModule(double a, double b) {
			return a / b;
		}
	}
}
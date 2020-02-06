#include <iostream>
#include "Sum.h"

Sum::Sum()
{
	std::cout << "Sum Constructor invoked\n";
}

Sum::~Sum()
{
	std::cout << "\nSum deconstructor invoked\n";
}

int Sum::sum(int a, int b) const
{
	return a + b;
}
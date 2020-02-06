#include <iostream>
#include "Int.h"

Int::Int()
{
	std::cout << "Int Constructor invoked\n";
}

Int::~Int()
{
	std::cout << "\nInt deconstructor invoked\n";
}

int Int::Power(int base, int exponent) const
{
	if (exponent == 0) {
		return 0;
	}
	else if (exponent == 1) {
		return base;
	}

	return base * Power(base, exponent - 1);
}

bool Int::isPrime(int number) const
{
	int i, m = 0, flag = 0;
	m = number / 2;
	for (i = 2; i <= m; i++)
	{
		if (number % i == 0)
		{
			flag = 1;
			break;
		}
	}
	return flag == 0;
}

// Function for extended Euclidean Algorithm  
int Int::gcdExtended(int a, int b, int* x, int* y) const
{
	// Base Case  
	if (a == 0)
	{
		*x = 0;
		*y = 1;
		return b;
	}

	int x1, y1; // To store results of recursive call  
	int gcd = gcdExtended(b % a, a, &x1, &y1);

	// Update x and y using results of  
	// recursive call  
	*x = y1 - (b / a) * x1;
	*y = x1;

	return gcd;
}

int Int::lcd(int a, int b) const {
	if (a == 0)
		return b;
	return lcd(a % b, a);
}
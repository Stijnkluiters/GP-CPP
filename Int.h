#ifndef __INT_H
#define __INT_H

class Int 
{
public:

	Int();
	~Int();

	int Power(int base, int exponent) const;
	bool isPrime(int number) const;
	int gcdExtended(int a, int b, int* x, int* y) const;
	int lcd(int a, int b) const;
};

#endif // !__INT_H

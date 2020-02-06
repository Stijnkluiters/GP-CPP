#include <iostream>
#include "Sum.h"
#include "Int.h"
#include "Array.h"

using namespace std;

int main() {
	// OPDRACHT 1
	printf("Opdracht 1");
	int int1a = 2;
	int int1b = 2;

	Sum sum;

	int sumN = sum.sum(int1a, int1b);

	std::cout << "Sum is: " << sumN << std::endl;
	

	// OPDRACHT 3
	printf("\nOpdracht 3\n");
	int int3a = 6;
	int int3b = 2;

	Int intC;

	int power = intC.Power(int3a, int3b);

	printf("The exponent of %d ^ %d = %d\n", int3a, int3b, power);

	// OPDRACHT 4
	printf("\nOpdracht 4\n");

	int int4a = 13; // a prime
	int int4b = 6; // not a prime

	if (intC.isPrime(int4a)) {
		printf("%d is a prime\n", int4a);
	}
	else {
		printf("%d is not a prime\n", int4a);
	}

	if (intC.isPrime(int4b)) {
		printf("%d is a prime\n", int4b);
	}
	else {
		printf("%d is not a prime\n", int4b);
	}

	// Opdracht 5
	printf("\nOpdracht 5\n");
	int index5 = 3;
	int intArray[4] = { 14, 15, 16, 8 };
	Array arrayC;

	int result = (int)arrayC.Get(intArray, index5);

	printf("Index %d of array with %d numbers = %d\n", index5, sizeof(intArray), result);
	

	// Opdracht 6
	printf("\nOpdracht 6\n");

	int arr[7] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);


	arrayC.BubbleSort(arr, n);
	printf("Sorted array:\n");
	arrayC.PrintArray(arr, n);


	// Opdracht 7
	printf("\nOpdracht 7\n");
	int x7, y7, a7 = 35, b7 = 15;
	int g7 = intC.gcdExtended(a7, b7, &x7, &y7);
	printf("\nGCD(%d, %d) = %d\n", a7, b7, g7);

	// Opdracht 8 (TODO: INCOMPLETE FOR ACTUAL ASSIGNMENT);
	printf("\nOpdracht 8\n");
	int x8, y8, a8 = 35, b8 = 15;
	int g8 = intC.gcdExtended(a8, b8, &x8, &y8);
	printf("\LCD(%d, %d) = %d\n", a8, b8, g8);

	return 0;
}
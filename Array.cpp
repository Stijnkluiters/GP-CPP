#include <iostream>
#include "Array.h"

Array::Array() {
	std::cout << "Array Constructor invoked\n";
}

Array::~Array() {
	std::cout << "\nArray deconstructor invoked\n";
}

int Array::Get(int integers[], int index) const {
	if (sizeof(integers) <= index) {
		return -1;
	}

	int value = integers[index];

	if (value == NULL) {
		return -1;
	}

	return value;
}

void Array::Swap(int* xp, int* yp) const {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
//
void Array::BubbleSort(int integers[], int size) const 
{
	int i, j;
	for (i = 0; i < size - 1; i++) {
		 //Last i elements are already in place  
		for (j = 0; j < size - i - 1; j++) {
			if (integers[j] > integers[j + 1]) {
				Swap(&integers[j], &integers[j + 1]);
			}
		}

	}
}

/* Function to print an array */
void Array::PrintArray(int arr[], int size) const
{
	int i;
	for (i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
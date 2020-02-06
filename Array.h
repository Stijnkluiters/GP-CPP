#ifndef __ARRAY_H
#define __ARRAY_H

class Array
{
public:
	Array();
	~Array();

	// first argument is an array of integers
	int Get(int integers[], int index) const;
	void BubbleSort(int integers[], int size) const;
	void Swap(int* xp, int* yp) const;
	void PrintArray(int integers[], int size) const;
};

#endif // !__ARRAY_H

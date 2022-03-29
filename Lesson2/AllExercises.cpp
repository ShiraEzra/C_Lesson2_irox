#include <stdio.h>
#include <string.h>
#include "AllExercises.h"

//Ex 8
void changePositionByPtr(char* ch1, char* ch2)
{
	char tmp = *ch1;
	*ch1 = *ch2;
	*ch2 = tmp;
}

void allPermutations(char* str, int start, int end)
{
	int i;
	if (start == end)
		printf("%s  ", str);
	else
	{
		for (i = start; i <= end; i++)
		{
			changePositionByPtr((str + start), (str + i));
			allPermutations(str, start + 1, end);
			changePositionByPtr((str + start), (str + i));
		}
	}
}

//Ex 14
void changePositionByPtr(int* n1, int* n2)
{
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void sortArray(int* arr, int length)
{
	bool flag = false;
	for (size_t i = 0; i < length - 1; i++)
	{
		if (*(arr + i) > *(arr + i + 1))
		{
			changePositionByPtr(arr + i, arr + i + 1);
			flag = true;
		}
	}
	if (flag)
		sortArray(arr, length);
}

void printArr(int* arr, int length)
{
	for (size_t i = 0; i < length; i++)
		printf("%d ", *(arr + i));
	printf("\n");
}

//Ex 17 & Ex 22
void printInReverseOrder(void* arr, int length, int type)
{
	//What's the problem in this code???  Causes deviation from the boundaries of the array.
	/*for (size_t i = length-1; i >=0; i--)
		printf("%d ", *(arr + i));*/
	int* arrInt = (int*)arr;
	char* arrString = (char*)arr;

	switch (type)
	{
	case  1:   //int
		arrInt = arrInt + length - 1;
		for (size_t i = length; i > 0; i--)
			printf("%d ", *arrInt--);
		break;
	case 2:     //string
		arrString = arrString + length - 2;
		for (size_t i = length-1; i > 0; i--)
			printf("%c ", *arrString--);
		break;
	}
	/* arr = arr + length - 1;
	 for (size_t i = length; i > 0; i--)
		 printf("%d ", *arr--);*/
	printf("\n");
}
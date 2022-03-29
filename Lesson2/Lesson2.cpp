// Lesson2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
#include "AllExercises.h"



int main()
{
    //Ex 8
    char str[] = "abc";
    printf("\n\n Pointer : Generate permutations of a given string :\n");
    printf("--------------------------------------------------------\n");
    printf(" The permutations of the string are : \n");
    allPermutations(str, 0, strlen(str)-1);
    printf("\n\n");

    //Ex 14
    int arr[] = { 8,2,5,3,1,6 };
    int arrLength = sizeof(arr) / sizeof(int);
    sortArray(arr, arrLength);
    printArr(arr, arrLength);

    //Ex 17
    printInReverseOrder(arr, arrLength, 1);

    //Ex 22
    int strLength = sizeof(str) / sizeof(char);
    printInReverseOrder(str, strLength, 2);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

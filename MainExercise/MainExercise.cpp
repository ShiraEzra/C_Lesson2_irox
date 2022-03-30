// MainExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdio.h>
#include "DoubleBuffering.h"
using namespace std;



int main()
{
	int* fillbuffer = new int[BUFSIZE];
	int fillcnt = 0;
	int* processbuffer = NULL;
	int processcnt = 0;
	int tcount = 0;
	int i;
	for( i=0; i < ITERATIONS; i++)
	{
		int* temp=NULL;
		if (getProb() <= 0.40)
		{
			temp = generateData(fillbuffer, fillcnt);
			if (temp != NULL)
				processbuffer = temp;
		}
		if (getProb() <= 0.60)
			processData(processbuffer, processcnt, tcount);
		cout << fillcnt << '\t' << processcnt << endl;
	}
	cout << "Total value: " << tcount << endl;
	cout << "Num iterations: " << i << endl;

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

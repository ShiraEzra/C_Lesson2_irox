#include "DoubleBuffering.h"
#include <stdlib.h>
#include <time.h>
#define MIN 0.0
#define MAX 1.0

double getProb()
{
	static bool first = true;
	if (first)
	{
		srand(time(NULL)); //seeding for the first time only!
		first = false;
	}
	float r = (float)rand() / (float)RAND_MAX;
	return MIN + r * (MAX - MIN);
}

int* generateData(int*& inbuf, int& count)
{

}
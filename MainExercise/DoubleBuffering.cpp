#include "DoubleBuffering.h"
#include <stdlib.h>
#include <time.h>
#include <random>
#include <chrono> 
#define MIN 0.0
#define MAX 1.0
#define M 0
#define N 9


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


static std::mt19937 mt{ static_cast<unsigned int>(std::chrono::steady_clock::now().time_since_epoch().count()) };
static std::uniform_int_distribution<> die6{ M, N };



int* generateData(int*& inbuf, int& count)
{
	if (count < BUFSIZE)
	{
		int randNum = die6(mt);
		*(inbuf + count) = randNum;
		count++;
		return NULL;
	}
	count = 0;
	int* temp = inbuf;
	inbuf = new int[BUFSIZE];
	return temp;
}

void processData(int*& outbuf, int& count, int& total)
{
	if (outbuf == NULL)
		return;
	total += ++count;
	if (true)   //Their condition isn't clear.
	{
		//count = 0;
		/*for (size_t i = 0; i < BUFSIZE; i++)
			free(outbuf + i);*/
		
		free(outbuf);
		outbuf = NULL;
	}
}
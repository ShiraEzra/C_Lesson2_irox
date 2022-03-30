#pragma once

const int BUFSIZE = 10;
const int ITERATIONS = 50;

double getProb();
int* generateData(int*& inbuf, int& count);
void processData(int*& outbuf, int& count, int& total);


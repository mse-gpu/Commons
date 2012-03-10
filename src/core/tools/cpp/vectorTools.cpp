#include <iostream>
#include <math.h>
#include <stdlib.h>
#include  "vectorTools.h"

using std::cout;
using std::endl;
using std::string;

/*----------------------------------------------------------------------*\
 |*			Implementation 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/



/*--------------------*\
 |*  math	       *|
 \*-------------------*/

void addVector(long* tabSum, long* tab1, long* tab2, int n)
    {
    for (int i = 1; i <= n; i++)
	{
	*tabSum++ = (*tab1++) + (*tab2++);
	}
    }

void addVector(float* tabSum, float* tab1, float* tab2, int n)
    {
    for (int i = 1; i <= n; i++)
	{
	*tabSum++ = (*tab1++) + (*tab2++);
	}
    }

float sum(float* ptrTab, int n)
    {
    float sum = 0;
    for (int i = 1; i <= n; i++)
	{
	sum += *ptrTab++;
	}
    return sum;
    }

void incrementer(int* ptrv, int n, int delta)
    {
    for (int i = 1; i <= n; i++)
	{
	*ptrv += delta;
	ptrv++;
	}
    }

double norme(double* ptrTab, long n)
    {
    double sum = 0;
    for (int i = 1; i <= n; i++)
	{
	sum += (*ptrTab) * (*ptrTab);
	ptrTab++;
	}

    return sqrt(sum);
    }

long dotProd(int* ptrV1, int* ptrV2, int n)
    {
    long sum = 0;
    for (int i = 1; i <= n; i++)
	{
	sum += (*ptrV1++) * (*ptrV2++);
	}

    return sum;
    }


/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/


#include <string>
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

void print(float* ptrTab, long n, string titre)
    {
    cout << titre << "(1 x " << n << ")" << endl;
    for (long i = 1; i <= n; i++)
	{
	cout << "[" << i << "] : " << ptrTab[i - 1] << endl;
	}
    }

void print(long* ptrTab, long n, string titre)
    {
    cout << titre << "(1 x " << n << ")" << endl;
    for (long i = 1; i <= n; i++)
	{
	cout << "[" << i << "] : " << ptrTab[i - 1] << endl;
	}
    }

void print(double* ptrTab, int n, string titre)
    {
    cout << titre << "(1 x " << n << ")" << endl;
    for (long i = 1; i <= n; i++)
	{
	cout << "[" << i << "] : " << ptrTab[i - 1] << endl;
	}
    }

void print(unsigned long* ptrTab, long n, string titre)
    {
    cout << titre << "(1 x " << n << ")" << endl;
    for (long i = 1; i <= n; i++)
	{
	cout << "[" << i << "] : " << ptrTab[i - 1] << endl;
	}
    }

void print(unsigned int* ptrTab, long n, string titre)
    {
    cout << titre << "(1 x " << n << ")" << endl;
    for (long i = 1; i <= n; i++)
	{
	cout << "[" << i << "] : " << ptrTab[i - 1] << endl;
	}
    }

bool isEgale(float* ptrTab1, float* ptrTab2, long n, float epsilon)
    {
    for (long i = 1; i <= n; i++)
	{
	float delta = fabs(*ptrTab1 - *ptrTab2);
	if (delta > epsilon)
	    {
	    cout << endl << "VectorTools : isEgale : (value1,value2)=(" << *ptrTab1 << "," << *ptrTab2 << ")";
	    cout << " : delta = " << delta << " >epsilon=" << epsilon;
	    cout << " : First indice failed : in [1,n]=[1," << n << "] : " << i << endl << endl;
	    return false;
	    }

	ptrTab1++;
	ptrTab2++;
	}
    return true;
    }

bool isEgale(long* ptrTab1, long* ptrTab2, long n)
    {
    for (long i = 1; i <= n; i++)
	{
	long delta = abs(*ptrTab2 - *ptrTab1);
	if (delta != 0)
	    {
	    cout << endl << "VectorTools : isEgale : (value1,value2)=(" << *ptrTab1 << "," << *ptrTab2 << ")";
	    cout << " : delta = " << delta;
	    cout << " : First indice failed : in [1,n]=[1," << n << "] : " << i << endl << endl;
	    return false;
	    }

	ptrTab1++;
	ptrTab2++;
	}
    return true;
    }

bool isEgale(unsigned long* ptrTab1, unsigned long* ptrTab2, long n)
    {
    for (long i = 1; i <= n; i++)
	{
	unsigned long min = *ptrTab2 >= *ptrTab1 ? *ptrTab1 : *ptrTab2;
	unsigned long max = *ptrTab2 >= *ptrTab1 ? *ptrTab2 : *ptrTab1;

	unsigned long delta = labs(max - min); //TODO labs?
	if (delta != 0)
	    {
	    cout << endl << "VectorTools : isEgale : (value1,value2)=(" << *ptrTab1 << "," << *ptrTab2 << ")";
	    cout << " : delta = " << delta;
	    cout << " : First indice failed : in [1,n]=[1," << n << "] : " << i << endl << endl;
	    return false;
	    }

	ptrTab1++;
	ptrTab2++;
	}
    return true;
    }

bool isEgale(unsigned int* ptrTab1, unsigned int* ptrTab2, long n)
    {
    for (long i = 1; i <= n; i++)
	{
	unsigned int min = *ptrTab2 >= *ptrTab1 ? *ptrTab1 : *ptrTab2;
	unsigned int max = *ptrTab2 >= *ptrTab1 ? *ptrTab2 : *ptrTab1;

	unsigned int delta = labs(max - min); //TODO labs?
	if (delta != 0)
	    {
	    cout << endl << "VectorTools : isEgale : (value1,value2)=(" << *ptrTab1 << "," << *ptrTab2 << ")";
	    cout << " : delta = " << delta;
	    cout << " : First indice failed : in [1,n]=[1," << n << "] : " << i << endl << endl;
	    return false;
	    }

	ptrTab1++;
	ptrTab2++;
	}
    return true;
    }

void addVector(long* tabSum, long* tab1, long* tab2, long n)
    {
    for (long i = 1; i <= n; i++)
	{
	*tabSum++ = (*tab1++) + (*tab2++);
	}
    }

void addVector(float* tabSum, float* tab1, float* tab2, long n)
    {
    for (long i = 1; i <= n; i++)
	{
	*tabSum++ = (*tab1++) + (*tab2++);
	}
    }

float sum(float* ptrTab, long n)
    {
    float sum = 0;
    for (long i = 1; i <= n; i++)
	{
	sum += *ptrTab++;
	}
    return sum;
    }

void incrementer(long* ptrv, long n, long delta)
    {
    for (long i = 1; i <= n; i++)
	{
	*ptrv += delta;
	ptrv++;
	}
    }

double norme(double* ptrTab, long n)
    {
    double sum = 0;
    for (long i = 1; i <= n; i++)
	{
	sum += (*ptrTab) * (*ptrTab);
	ptrTab++;
	}

    return sqrt(sum);
    }

long dotProd(long* ptrV1, long* ptrV2, long n)
    {
    long sum = 0;
    for (long i = 1; i <= n; i++)
	{
	sum += (*ptrV1++) * (*ptrV2++);
	}

    return sum;
    }

void init(long* ptrV, long n, long value)
    {
    for (long i = 1; i <= n; i++)
	{
	*ptrV++ = value;
	}
    }

void init(unsigned int* ptrV, long n, unsigned int value)
    {
    for (long i = 1; i <= n; i++)
	{
	*ptrV++ = value;
	}
    }

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/


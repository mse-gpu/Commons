#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "tab1DTools.h"

using std::cout;
using std::endl;

/*----------------------------------------------------------------------*\
 |*			Implementation 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

/*--------------------*\
 |*  Print	       *|
 \*-------------------*/

void print(float* ptrTab, long n, string titre)
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

void print(int* ptrTab, int n, string titre)
    {
    cout << titre << "(1 x " << n << ")" << endl;
    for (int i = 1; i <= n; i++)
	{
	cout << "[" << i << "] : " << ptrTab[i - 1] << endl;
	}
    }

/*--------------------*\
 |*  isEgale	       *|
 \*-------------------*/

bool isEgale(float* ptrTab1, float* ptrTab2, int n, float epsilon)
    {
    for (int i = 1; i <= n; i++)
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

bool isEgale(double* ptrTab1, double* ptrTab2, int n, double epsilon)
    {
    for (int i = 1; i <= n; i++)
	{
	double delta = fabs(*ptrTab1 - *ptrTab2);
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

bool isEgale(int* ptrTab1, int* ptrTab2, int n)
    {
    for (int i = 1; i <= n; i++)
	{
	int min = *ptrTab2 >= *ptrTab1 ? *ptrTab1 : *ptrTab2;
	int max = *ptrTab2 >= *ptrTab1 ? *ptrTab2 : *ptrTab1;

	int delta = labs(max - min); //TODO labs?
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

/*--------------------*\
 |*  init	       *|
 \*-------------------*/

void init(float* ptrV, int n, float value)
    {
    for (int i = 1; i <= n; i++)
	{
	*ptrV++ = value;
	}
    }

void init(double* ptrV, int n, double value)
    {
    for (int i = 1; i <= n; i++)
	{
	*ptrV++ = value;
	}
    }

void init(int* ptrV, int n, int value)
    {
    for (int i = 1; i <= n; i++)
	{
	*ptrV++ = value;
	}
    }

void init(long* ptrV, int n, long value)
    {
    for (int i = 1; i <= n; i++)
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


#include <iostream>
#include "tab2DTools.h"

using std::cout;
using std::endl;

/*----------------------------------------------------------------------*\
 |*			Implementation 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

// double

void alloc(double**& ptrTab2D, long n, long m)
    {
    ptrTab2D = new double*[n];
    for (long i = 1; i <= n; i++)
	{
	ptrTab2D[i - 1] = new double[m];
	}
    }

void free(double** ptrTab2D, long n)
    {
    for (int i = 1; i <= n; i++)
	{
	delete[] ptrTab2D[i - 1];
	}
    delete[] ptrTab2D;
    }

void print(double** ptrTab2D, long n, long m, string titre)
    {
    cout << endl << titre << "(" << n << "," << m << ")" << endl;
    for (long i = 1; i <= n; i++)
	{
	for (long j = 1; j <= m; j++)
	    {
	    cout << ptrTab2D[i - 1][j - 1] << "\t";
	    }
	cout << endl;
	}
    }

void init(double** ptrTab2D, long n, long m, double value)
    {
    for (long i = 1; i <= n; i++)
	{
	for (long j = 1; j <= m; j++)
	    {
	    ptrTab2D[i - 1][j - 1] = value;
	    }
	}
    }

// unsigned int

void alloc(unsigned int**& ptrTab2D, long n, long m)
    {
    ptrTab2D = new unsigned int*[n];
    for (long i = 1; i <= n; i++)
	{
	ptrTab2D[i - 1] = new unsigned int[m];
	}
    }

void free(unsigned int** ptrTab2D, long n)
    {
    for (long i = 1; i <= n; i++)
	{
	delete[] ptrTab2D[i - 1];
	}
    delete[] ptrTab2D;
    }

void print(unsigned int** ptrTab2D, long n, long m, string titre)
    {
    cout << endl << titre << "(" << n << "," << m << ")" << endl;
    for (long i = 1; i <= n; i++)
	{
	for (int j = 1; j <= m; j++)
	    {
	    cout << ptrTab2D[i - 1][j - 1] << "\t";
	    }
	cout << endl;
	}
    }

void init(unsigned int** ptrTab2D, long n, long m, double value)
    {
    for (long i = 1; i <= n; i++)
	{
	for (long j = 1; j <= m; j++)
	    {
	    ptrTab2D[i - 1][j - 1] = value;
	    }
	}
    }



/*--------------------------------------*\
 |*		Private			*|
 \*-------------------------------------*/

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/


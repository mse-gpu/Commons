#include <math.h>
#include <iostream>
#include <stdlib.h>
#include "mathTools.h"

using std::cout;
using std::endl;

/*----------------------------------------------------------------------*\
 |*			Implementation 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

bool isEgale(float x1, float x2, float epsilon)
    {
    bool isOk;
    double delta;

    if (x1 == 0 || x2 == 0)
	{
	delta = fabs(x1 - x2);
	isOk = delta < epsilon;
	}
    else
	{
	delta = fabs(1 - x2 / x1);
	isOk = delta < epsilon;
	}

    if (!isOk)
	{
	cout << "isEgale Float: (x1,x2)=(" << x1 << "," << x2 << ") : delta = " << delta << endl;
	}

    return isOk;
    }

bool isEgale(double x1, double x2, double epsilon)
    {
    bool isOk;
    double delta;
    if (x1 == 0 || x2 == 0)
	{
	delta = fabs(x1 - x2);
	isOk = delta < epsilon;
	}
    else
	{
	delta = fabs(1 - x2 / x1);
	isOk = delta < epsilon;
	}

    if (!isOk)
	{
	cout << "isEgale Double : (x1,x2)=(" << x1 << "," << x2 << ") : delta = " << delta << endl;
	}

    return isOk;
    }

bool isEgale(long x1, long x2)
    {
    long delta = labs(x1 - x2);
    bool isOk = (delta == 0);

    if (!isOk)
	{
	cout << "isEgale Long: (x1,x2)=(" << x1 << "," << x2 << ") : delta = " << delta << endl;
	}

    return isOk;
    }

bool isPower2(long i)
    {
    while (i >= 2)
	{
	if (i % 2 != 0)
	    {
	    return false;
	    }
	i /= 2;
	}
    return true;
    }

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/


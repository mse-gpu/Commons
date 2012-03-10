#include "omp.h"
#include "aleaOMP.h"

/*----------------------------------------------------------------------*\
 |*			Declaration 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

double uniform01_OMP(void);
double uniform_OMP(double a, double b);

/*--------------------------------------*\
 |*		Private			*|
 \*-------------------------------------*/

static long MULTIPLIER = 1366;
static long ADDEND = 150889;
static long PMOD = 714025;

long random_last = 0;
#pragma omp threadprivate(random_last)

/*----------------------------------------------------------------------*\
 |*			Implementation 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

/*--------------------------------------*\
 |*		Private			*|
 \*-------------------------------------*/

double uniform01_OMP(void)
    {
    long random_next;

    random_next = (MULTIPLIER * random_last + ADDEND) % PMOD;
    random_last = random_next;

    return ((double) random_next / (double) PMOD);

    }

double uniform_OMP(double a, double b)
    {
    return a + uniform01_OMP() * (b - a);
    }

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/


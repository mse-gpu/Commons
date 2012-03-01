#include <math.h>
#include <cstdlib>
#include "aleaTools.h"

/*----------------------------------------------------------------------*\
 |*			Declaration 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

/*--------------------------------------*\
 |*		Private			*|
 \*-------------------------------------*/

/*----------------------------------------------------------------------*\
 |*			Implementation 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

/**
 * in [a,b]
 * use first once : srand(time(NULL));
 */
float uniformeAB(float a,float b)
    {
    return a+uniforme01()*(b-a);
    }

/**
 * in [0,1]
 * use first once : srand(time(NULL));
 */
float uniforme01(void)
    {
    // rand in [0,RAND_MAX]
    return rand()/(float)RAND_MAX;
    }

/**
 * in [a,b]
 * use first once : srand(time(NULL));
 */
long uniformeAB(long a,long b)
    {
    // rand in [0,RAND_MAX]
    return a+rand()%(b-a+1);
    }

/*--------------------------------------*\
 |*		Private			*|
 \*-------------------------------------*/

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/

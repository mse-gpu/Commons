#ifndef ALEATOOLS_H_
#define ALEATOOLS_H_

#include <cstdlib>
#include <time.h>

/*----------------------------------------------------------------------*\
 |*			Declaration 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

/**
 * in [a,b]
 * use first once : srand(time(NULL));
 */
float uniformeAB(float a,float b);

/**
 * in [0,1]
 * use first once : srand(time(NULL));
 */
float uniforme01(void);

/**
 * in [a,b]
 * use first once : srand(time(NULL));
 */
long uniformeAB(long a,long b);

#endif 

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/

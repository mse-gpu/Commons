#ifndef MATRIX_TOOLS_H_
#define MATRIX_TOOLS_H_

#include <string>

using std::string;



/*----------------------------------------------------------------------*\
 |*			Declaration 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

/**
 * a11 a12 a13
 * a21 a22 a32
 * a31 a32 a33
 *
 * vectoriser
 *
 * [a11 a12 a13 | a21 a22 a32 | a31 a32 a33]
 */
void print(int* ptrA, int n, int m, string titre);

/**
 * a11 a12 a13
 * a21 a22 a32
 * a31 a32 a33
 *
 * vectoriser
 *
 * [a11 a12 a13 | a21 a22 a32 | a31 a32 a33]
 */
bool isEgale(int* ptrA,int* ptrB,int n,int m);

/**
 * s in [1,nm]
 * i in [1,n]
 * j in [1,m]
 */
void to2D1(int s, int& i,int& j,int m);

/**
 * s in [0,nm-1]
 * i in [0,n-1]
 * j in [0,m-1]
 */
void to2D0(int s, int& i,int& j,int m);

/**
 * s in [1,nm]
 * i in [1,n]
 * j in [1,m]
 */
void to1D1(int& s,int i,int j,int m);

/**
 * s in [0,nm-1]
 * i in [0,n-1]
 * j in [0,m-1]
 */
void to1D0(int& s,int i,int j,int m);


#endif 

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/

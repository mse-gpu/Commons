#ifndef TAB2D_H_
#define TAB2D_H_

#include <string>

using std::string;

/*----------------------------------------------------------------------*\
 |*			Declaration 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

// double
void alloc(double**& tab2D,long n,long m);
void free(double** tab2D,long n);
void print(double** tab2D,long n,long m,string titre);
void init(double** ptrTab2D, long n, long m, double value);

// unsigned int
void alloc(unsigned int**& tab2D,long n,long m);
void free(unsigned int** tab2D,long n);
void print(unsigned int** tab2D,long n,long m,string titre);
void init(unsigned int**  ptrTab2D, long n, long m, double value);

//int
//bool isEgale(int* ptrA, int* ptrB, int n, int m);

#endif 

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/

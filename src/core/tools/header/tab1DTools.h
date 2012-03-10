#ifndef TAB_1D_TOOLS_H_
#define TAB_1D_TOOLS_H_

#include <string>

using std::string;

/*----------------------------------------------------------------------*\
 |*			Declaration 					*|
 \*---------------------------------------------------------------------*/

void print(double* ptrTab, long n, string titre);
void print(float* ptrTab, long n, string titre);
void print(int* ptrTab, int n, string titre);

bool isEgale(float* ptrTab1, float* ptrTab2, int n,float epsilon=0);
bool isEgale(double* ptrTab1, double* ptrTab2, int n,float epsilon=0);
bool isEgale(int* ptrTab1, int* ptrTab2, int n);
bool isEgale(unsigned int* ptrTab1, unsigned int* ptrTab2, long n);

void init(float* v,int n, float value);
void init(double* v,int n, double value);
void init(long* v,int n, long value);
void init(unsigned int* ptrV, long n, unsigned int value);
void init(int* v,int n, int value);

#endif

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/


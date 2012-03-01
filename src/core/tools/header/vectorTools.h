#ifndef VECTOR_TOOLS_H_
#define VECTOR_TOOLS_H_

#include <string>

using std::string;

/*----------------------------------------------------------------------*\
 |*			Declaration 					*|
 \*---------------------------------------------------------------------*/

void print(double* ptrTab, long n, string titre);
void print(float* ptrTab, long n, string titre);
void print(long* ptrTab, long n, string titre);
void print(unsigned long* ptrTab, long n, string titre);
void print(unsigned int* ptrTab, long n, string titre);


bool isEgale(float* ptrTab1, float* ptrTab2, long n,float epsilon=0);
bool isEgale(long* ptrTab1, long* ptrTab2, long n);
bool isEgale(unsigned long* ptrTab1, unsigned long* ptrTab2, long n);
bool isEgale(unsigned int* ptrTab1, unsigned int* ptrTab2, long n);

void addVector(long* tabSum,long* tab1,long* tab2,long n);
void addVector(float* tabSum,float* tab1,float* tab2,long n);

float sum(float* ptrTab, long n);
void incrementer(long* ptrv,long n, long delta);
double norme(double* ptrTab,long n);
long dotProd(long* v1,long* v2,long n);

void init(long* v,long n, long value);
void init(unsigned int* v,long n, unsigned int value);

#endif

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/


#include "TestTab2Dunit.h"
#include "tab2DTools.h"

/*----------------------------------------------------------------------*\
 |*			Implementation 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Constructor		*|
 \*-------------------------------------*/

TestTab2DJunit::TestTab2DJunit(void)
    {
    TEST_ADD(TestTab2DJunit::testDouble);
    TEST_ADD(TestTab2DJunit::testUnsignedInt);
    }

/*--------------------------------------*\
 |*		Methodes		*|
 \*-------------------------------------*/

void TestTab2DJunit::testDouble(void)
    {
    long n = 2;
    long m = 3;
    double initValue = -12;

    double** tab2D = NULL;

    alloc(tab2D, n, m);
    init(tab2D, n, m, initValue);
    print(tab2D, n, m, "testDouble");
    free(tab2D, n);
    }

void TestTab2DJunit::testUnsignedInt(void)
    {
    long n = 2;
    long m = 3;
    unsigned int initValue=255;

    unsigned int** tab2D=NULL;

    alloc(tab2D, n, m);
    init(tab2D, n, m, initValue);
    print(tab2D, n, m, "testUnsignedInt");
    free(tab2D, n);
    }

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/


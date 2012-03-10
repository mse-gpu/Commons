#ifndef TEST_TAB2D_JUNIT_H
#define TEST_VECTOR_JUNIT_H

#include "cpptest.h"

/*----------------------------------------------------------------------*\
 |*			Declaration 					*|
 \*---------------------------------------------------------------------*/

class TestTab2DJunit: public Test::Suite
    {
    public:

	TestTab2DJunit(void);

    private:

	void testDouble(void);
	void testUnsignedInt(void);
    };

#endif

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/


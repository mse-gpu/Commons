#include <omp.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "ChronoOMPs.h"

using std::cout;
using std::endl;

/*----------------------------------------------------------------------*\
 |*			Implementation 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Constructor		*|
 \*-------------------------------------*/

ChronoOMPs::ChronoOMPs()
    {
    start();
    }

ChronoOMPs::~ChronoOMPs()
    {
    // rien
    }

/*--------------------------------------*\
 |*		Methodes		*|
 \*-------------------------------------*/

void ChronoOMPs::start()
    {
    timeStart = omp_get_wtime();
    }

void ChronoOMPs::stop()
    {
    timeStop = omp_get_wtime();
    }

double ChronoOMPs::timeElapse()
    {
    stop();
    return timeStop - timeStart;
    }

void ChronoOMPs::print(const string& titre)
    {
    print(cout,titre);
    }

void ChronoOMPs::print(ostream& stream, const string& titre)
    {
    stream<< titre << " "  <<timeElapse()<< " (s)" << endl;
    }

/*--------------------------------------*\
 |*		Friend			*|
 \*-------------------------------------*/

ostream& operator <<(ostream& stream,  ChronoOMPs& chrono) // friend
    {
    chrono.print(stream);
    return stream;
    }

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/


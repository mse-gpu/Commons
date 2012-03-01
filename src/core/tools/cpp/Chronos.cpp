#include <omp.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "Chronos.h"

using std::cout;
using std::endl;

/*----------------------------------------------------------------------*\
 |*			Implementation 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Constructor		*|
 \*-------------------------------------*/

Chronos::Chronos()
    {
    start();
    }

Chronos::~Chronos()
    {
    // rien
    }

/*--------------------------------------*\
 |*		Methodes		*|
 \*-------------------------------------*/

void Chronos::start()
    {
    timeStart = time(NULL);
    }

void Chronos::stop()
    {
    timeStop = time(NULL);
    }

time_t Chronos::timeElapse()
    {
    stop();
    return timeStop - timeStart;
    }

void Chronos::print(const string& titre)
    {
    print(cout,titre);
    }

void Chronos::print(ostream& stream, const string& titre)
    {
    stream<< titre << " "  <<timeElapse()<< " (s)" << endl;
    }

/*--------------------------------------*\
 |*		Friend			*|
 \*-------------------------------------*/

ostream& operator <<(ostream& stream,  Chronos& chrono) // friend
    {
    chrono.print(stream);
    return stream;
    }

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/


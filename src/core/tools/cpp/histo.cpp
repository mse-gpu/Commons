#include "histo.h"
#include "aleaTools.h"
#include "vectorTools.h"
#include "ChronoOMPs.h"

/*----------------------------------------------------------------------*\
 |*			Implementation 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

void fillRandom(unsigned char* ptrTabData, long n)
    {
    srand(time(NULL));

    #pragma omp parallel for
    for (long i = 1; i <= n; i++)
	{
	ptrTabData[i-1] = uniformeAB((long) 0, (long) 255);
	}
    }

bool isHistoOk(unsigned char* tabData, long n, unsigned int* tabFrequence)
    {
    unsigned int* tabFrequenceSequentiel = new unsigned int[256];

    histogramme(tabData, n, tabFrequenceSequentiel);

    bool isOk = isEgale(tabFrequenceSequentiel, tabFrequence, 256);

    //    print(tabFrequenceSequentiel,256,"HistoSequentiel");
    //    print(tabFrequence,256,"HistoParallel");

    delete[] tabFrequenceSequentiel;

    return isOk;
    }

void histogramme(unsigned char* tabData, long n, unsigned int* tabFrequence)
    {
    ChronoOMPs chrono;

    init(tabFrequence, 256, 0);
    for (long i = 1; i <= n; i++)
	{
	tabFrequence[tabData[i - 1]]++; // tabData in [0,255]
	}

    chrono.stop();
    chrono.print("histogrammeSequentiel : ");
    }

/*--------------------------------------*\
 |*		Private			*|
 \*-------------------------------------*/

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/


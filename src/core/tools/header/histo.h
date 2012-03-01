#ifndef HISTO_H_
#define HISTO_H_


/*----------------------------------------------------------------------*\
 |*			Declaration 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

void fillRandom(unsigned char* tabData, long n);
bool isHistoOk(unsigned char* tabData, long n, unsigned int* tabFrequence);
void histogramme(unsigned char* tabData, long n, unsigned int* tabFrequence);


#endif 

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/

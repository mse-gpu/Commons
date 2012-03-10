#ifndef HISTO_H_
#define HISTO_H_


/*----------------------------------------------------------------------*\
 |*			Declaration 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

void fillRandom(unsigned char* tabData, int n);
bool isHistoOk(unsigned char* tabData, int n, unsigned int* tabFrequence);
void histogramme(unsigned char* tabData, int n, unsigned int* tabFrequence);


#endif 

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/

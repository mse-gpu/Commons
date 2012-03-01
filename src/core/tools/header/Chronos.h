#ifndef CHRONOS_H
#define CHRONOS_H

#include <time.h>
#include <string>

using std::string;
using std::ostream;

class Chronos
    {
    public:

	/*--------------------------------------*\
	 |*		Constructor		*|
	 \*-------------------------------------*/

	Chronos();

	/*--------------------------------------*\
	 |*		Destructor		*|
	 \*-------------------------------------*/

	virtual ~Chronos();

	/*--------------------------------------*\
	 |*		Methodes		*|
	 \*-------------------------------------*/

	void start();
	void stop() ;
	time_t timeElapse() ;
	void print(const string& titre = "") ;
	void print(ostream& stream, const string& titre = "") ;

	/*--------------------------------------*\
	 |*		Friend			*|
	 \*-------------------------------------*/

	friend ostream& operator <<(ostream& stream, const Chronos& chrono);

    private:

	/*--------------------------------------*\
	|*		Attributs		*|
	 \*-------------------------------------*/

	time_t timeStart;
	time_t timeStop;
    };

#endif

#ifndef CHRONOS_OMP_H
#define CHRONOS_OMP_H

#include <string>

using std::string;
using std::ostream;

class ChronoOMPs
    {
    public:

	/*--------------------------------------*\
	 |*		Constructor		*|
	 \*-------------------------------------*/

	ChronoOMPs();

	/*--------------------------------------*\
	 |*		Destructor		*|
	 \*-------------------------------------*/

	virtual ~ChronoOMPs();

	/*--------------------------------------*\
	 |*		Methodes		*|
	 \*-------------------------------------*/

	void start();
	void stop() ;
	double timeElapse() ;
	void print(const string& titre = "") ;
	void print(ostream& stream, const string& titre = "") ;

	/*--------------------------------------*\
	 |*		Friend			*|
	 \*-------------------------------------*/

	friend ostream& operator <<(ostream& stream, const ChronoOMPs& chrono);

    private:

	/*--------------------------------------*\
	|*		Attributs		*|
	 \*-------------------------------------*/

	double timeStart;
	double timeStop;
    };

#endif

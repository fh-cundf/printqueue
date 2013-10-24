#ifndef CQUEUE_HEADER
#define CQUEUE_HEADER
#include "CList.h"

//
//  class  CQUEUE	pop push print
//
class CQueue
{
private:
    CList* _last;			//letztes
    CList* _first;			//erstes


public:
	//constructor
	CQueue(void);		//??? default ???

	//destructor
	~CQueue(void);					//l�schen

	//Methoden
	void pop();			//L�sch-Fkt.
    void push(CPJob*);			//Einf�ge-Fkt.
	void printJobs();		//Prinkt-Fkt.
};

#endif /* CQUEUE_HEADER */

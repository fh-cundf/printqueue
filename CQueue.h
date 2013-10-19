#ifndef CQUEUE_HEADER
#define CQUEUE_HEADER
#include "CList.h"

//
//  class  CQUEUE	pop push print
//
class CQueue
{
private:
	CList* last;			//letztes
	CList* first;			//erstes


public:
	//constructor
	CQueue(void);		//??? default ???

	//destructor
	~CQueue(void);					//l�schen

	//Methoden
	void pop();			//L�sch-Fkt.
	void push(CList*);			//Einf�ge-Fkt.
	void printJobs();		//Prinkt-Fkt.
};

#endif /* CQUEUE_HEADER */

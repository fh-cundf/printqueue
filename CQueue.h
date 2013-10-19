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
	~CQueue(void);					//löschen

	//Methoden
	void pop();			//Lösch-Fkt.
	void push(CList*);			//Einfüge-Fkt.
	void printJobs();		//Prinkt-Fkt.
};

#endif /* CQUEUE_HEADER */

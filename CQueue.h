/********************************************************
 * OOP - AS1_pqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 01.11.2013
 * CQueue.h
 *
 *
 * TODO:    - Kommentare/Variablen anpassen,
 *          - Code-Review durch Kollega
 *          - Seinen Code anpassen lassen
********************************************************/

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
    int _count;				//Anzahl


public:
    //constructor
    CQueue(void);		//??? default ???

    //destructor
    ~CQueue(void);					//l�schen

    //Methoden
    void pop();			//L�sch-Fkt.
    void push(CPJob*);			//Einf�ge-Fkt.
    void printJobs();		//Prinkt-Fkt.

    void setfirst(CList*);
};

#endif /* CQUEUE_HEADER */

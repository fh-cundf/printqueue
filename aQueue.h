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

#ifndef QUEUE_HEADER
#define QUEUE_HEADER
#include "Node.h"

//
//  class  QUEUE
//
class Queue
{
private:
    Node* _last;			//letztes
    Node* _first;			//erstes
    int _count;				//Anzahl

public:
    //constructor
    Queue(void);		//??? default ???

    //destructor
    ~Queue(void);					//loeschen

    //Methoden
    void pop();			//Loesch-Fkt.
    void push(Job*);			//Einfuege-Fkt.
    void printJobs();		//Prinkt-Fkt.

    void setfirst(Node*);
};

#endif /* QUEUE_HEADER */

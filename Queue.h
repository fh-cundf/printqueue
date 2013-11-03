/********************************************************
 * OOP - AS1_printqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 09.11.2013
 * Queue.h
 *
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

    //accessors
    Job* pop();
    void push(Job*);
    void printJobs();

    void setfirst(Node*);
};

#endif /* QUEUE_HEADER */

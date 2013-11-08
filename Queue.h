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
//  class  QUEUE is a double-linked-list
//
class Queue
{
private:
    Node* _last;			//last Element
    Node* _first;			//first Element
    int _count;				//Number of Elements

public:
    //constructor
    Queue(void);

    //destructor
    ~Queue(void);

    //accessors
    Job* pop();
    void push(Job*);
    void printJobs();
};

#endif /* QUEUE_HEADER */

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
<<<<<<< HEAD
//  class  QUEUE is the header from this List
=======
//  class  QUEUE is a double-linked-list
>>>>>>> cc802135936f790dc4443c2c29351a7f136e3f48
//
class Queue
{
private:
    Node* _last;			//last Element
    Node* _first;			//first Element
    int _count;				//Number of Elements

public:
    //constructor
<<<<<<< HEAD
    Queue(void);                    //default

    //destructor
    ~Queue(void);					//default
=======
    Queue(void);

    //destructor
    ~Queue(void);
>>>>>>> cc802135936f790dc4443c2c29351a7f136e3f48

    //accessors
    Job* pop();
    void push(Job*);
    void printJobs();
};

#endif /* QUEUE_HEADER */

/********************************************************
 * OOP - AS1_printqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 09.11.2013
 * Node.h
 *
********************************************************/

#ifndef NODE_HEADER
#define NODE_HEADER

#include "Job.h"

//
//  class Node defines a singe Element of the Queue
//
class  Node
{
private:
    Node* _previous;
    Node* _next;

public: 
    Job* job;

    //constructor
    Node(Node*, Job*, Node*);

    //destruktor
    ~Node(void);

    //accessors
    void setPrevious(Node*);
    Node* getPrevious();

    void setNext(Node*);
    Node* getNext();
};

#endif /* NODE_HEADER */

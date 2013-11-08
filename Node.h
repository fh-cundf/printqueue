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
<<<<<<< HEAD
//  class Node beinhaltet das Listenelement selbst.
=======
//  class Node defines a singe Element of the Queue
>>>>>>> cc802135936f790dc4443c2c29351a7f136e3f48
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

/********************************************************
 * OOP - AS1_pqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 01.11.2013
 * CList.h
 *
 *
 * TODO:    - Kommentare/Variablen anpassen,
 *          - Code-Review durch Kollega
 *          - Seinen Code anpassen lassen
********************************************************/


#ifndef NODE_HEADER
#define NODE_HEADER
#include "Job.h"

//
//  class  CList beinhaltet die Liste selbst.
//
class  Node
{
private:
    Node* _previous;
    Node* _next;


public: 
    Job* _daten;
    //constructor
    Node(Job* daten, Node* first, Node* last);		//Neues Element mit

    //destruktor
    ~Node(void);						//default

    //weitere Methoden
    void setPrevious(Node*);
    void setNext(Node*);

    Node* getPrevious();
    Node* getNext();
};

#endif /* NODE_HEADER */

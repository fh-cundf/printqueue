/********************************************************
 * OOP - AS1_pqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 01.11.2013
 * CList.cpp    - Node-Objekt
 *
 *
 * TODO:    - Kommentare/Variablen anpassen,(CList passt fast nicht --> Objekt umbenennen in z.B. Node??)
 *          - Code-Review durch Kollega
 *          - Seinen Code anpassen lassen
********************************************************/
#include  <cstring>

#include  "node.h"
#include  "job.h"

// ein Node
//constructor
Node::Node(Job* pdaten, Node* pprev=NULL, Node* pnext=NULL){				//Neues Element mit
    this->_previous = pprev;
    this->_next = pnext;
    this->_daten = pdaten;
}


//destruktor
Node::~Node(void){									//default
    delete _daten;   							//delete das neue free...
}


//weitere Methoden
void Node::setPrevious(Node* p_prev){

    this->_previous = p_prev;
}


void Node::setNext(Node* p_next){

    this->_next = p_next;

}

Node* Node::getPrevious(){

    return _previous;
}
Node* Node::getNext(){

    return _next;
}

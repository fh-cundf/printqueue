/********************************************************
 * OOP - AS1_pqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 01.11.2013
 * Node.cpp    - Node-Object(single element for the queue)
 *
********************************************************/

#include  <cstring>

#include  "Node.h"
#include  "Job.h"

// ein Node
//constructor
Node::Node(Job* job, Node* previous, Node* next ){
    this->_previous = previous;
    this->_next = next;
    this->_daten = job;
}


//destruktor
Node::~Node(void){									//default
    delete this->_daten;   							//delete das neue free...
}


//weitere Methoden
void Node::setPrevious(Node* node){
    this->_previous = node;
}


void Node::setNext(Node* node){
    this->_next = node;
}

Node* Node::getPrevious(){
    return _previous;
}

Node* Node::getNext(){
    return _next;
}

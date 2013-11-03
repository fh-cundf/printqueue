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

//constructor  ::sets  pointer to previous next job
Node::Node(Job* job, Node* previous, Node* next ){
    this->_previous = previous;
    this->_next = next;
    this->job = job;
}

//destructor::
Node::~Node(void){
    //is there a memory-leak without the following delete(after pop?)?
//    delete this->job;
}


//accessors
void Node::setPrevious(Node* node){
    this->_previous = node;
}

Node* Node::getPrevious(){
    return _previous;
}

void Node::setNext(Node* node){
    this->_next = node;
}

Node* Node::getNext(){
    return _next;
}

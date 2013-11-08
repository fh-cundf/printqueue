/********************************************************
 * OOP - AS1_printqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 09.11.2013
 * Node.cpp    - Node-Object(single element for the queue)
 *
********************************************************/

#include  <cstring>

#include  "Node.h"
#include  "Job.h"

//constructor  ::sets  pointer to previous next job
//previous=NULL & next=NULL is allowed,
//Job-Pointer Check in Queue::push()
Node::Node(Node* previous, Job* job, Node* next ){
    this->_previous = previous;
    this->_next = next;
    this->job = job;
}

//destructor::
Node::~Node(void){
<<<<<<< HEAD
    //is there a memory-leak without the following delete(after pop?)?
    delete this->job;
=======
    //containing Job is problem of the guy who calls the Node-delete
>>>>>>> cc802135936f790dc4443c2c29351a7f136e3f48
}


//accessor::set pointer to previous Node (node = NULL is allowed!)
void Node::setPrevious(Node* node){
    this->_previous = node;
}

//accessor::returns  pointer to previous Node
Node* Node::getPrevious(){
    return _previous;
}

//accessor::set pointer to next Node (node = NULL is allowed!)
void Node::setNext(Node* node){
    this->_next = node;
}

//accessor::returns  pointer to next Node
Node* Node::getNext(){
    return _next;
}

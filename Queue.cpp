/********************************************************
 * OOP - AS1_printqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 09.11.2013
 * Queue.cpp   - the queue itself
 *
********************************************************/

#include  <cstring>

#include  "Queue.h"

using namespace std;

//constructor::create the empty Queue
Queue::Queue(void){
    this->_first = NULL;
    this->_last = NULL;
    this->_count = 0;
}

//destructor:: deletes all nodes(this->pop) with containing Jobs(delete)
Queue::~Queue(void){
    while(_count){
        delete this->pop();
    }
}

//Method:: pop delete the last node(oldest/first in) of the queue
Job* Queue::pop(){
    if(_count){
        Node* tmp = this->_last;
        Job* job = tmp->job;
        this->_last = this->_last->getPrevious();
        if(this->_last){
            this->_last->setNext(NULL);
        }
        else{
            this->_first = NULL;
        }
        this->_count --;
        delete tmp;
        return job;
    }
    return NULL;
}

//Method::push create a new node with Job at the first position of the queue
void Queue::push(Job* job){
    if(job){
        Node* tmp;
<<<<<<< HEAD
        if(!(_count)){                               //if queue is empty
            tmp  = new Node(job, NULL, NULL);
=======
        if(!(_count)){      //if queue is empty
            tmp  = new Node(NULL, job, NULL);
>>>>>>> cc802135936f790dc4443c2c29351a7f136e3f48
            this->_last = tmp;
        }
        else{
            tmp  = new Node(NULL, job, this->_first);
            this->_first->Node::setPrevious(tmp);
        }
        this->_first = tmp;
        this->_count++;
    }
}

//Method:: print the whole queue
//use the Job::printJob() Method
void Queue::printJobs() {
    Node* first = _first;
    while(first != NULL){
        first->job->printJob();
        first = first->getNext();
    }
}

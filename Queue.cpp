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

//destructor:: delete all nodes
Queue::~Queue(void){
    while(_count){
        this->pop();
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
        this->_count--;
        delete tmp;
        return job;
    }
    return NULL;
}

//Method::push set a new node at the first position of the queue
void Queue::push(Job* job){
    if(job){
        Node* tmp;
        if(!(_count)){                               //if queue is empty
            tmp  = new Node(job, NULL, NULL);
            this->_last = tmp;
        }
        else{
            tmp  = new Node(job, NULL, this->_first);
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

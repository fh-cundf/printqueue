/********************************************************
 * OOP - AS1_pqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 01.11.2013
 * Queue.cpp   - the queue itself
 *
********************************************************/

#include  <cstring>
#include  <iostream>

#include  "Queue.h"

using namespace std;

//constructor::create the empty Queue
Queue::Queue(void){									//??? default ???
    this->_first = NULL;
    this->_last = NULL;
    this->_count = 0;
}

//destructor::delete all nodes
Queue::~Queue(void){
    while(_count){
        this->pop();
    }
}

//Method::pop delete the last Element(first in) of the queue
void Queue::pop(){
    if(_count){
        Node* tmp = this->_last;
        this->_last = this->_last->getPrevious();
        if(this->_last){
            this->_last->setNext(NULL);
        }else{
            this->_first = NULL;
        }
        this->_count--;
        delete tmp;
    }
}

//Method::push set a new node at the first position of the queue
void Queue::push(Job* job){
    if(job!=NULL){
        if(!(_count)){                           //wenn liste leer
            Node* tmp  = new Node(job, NULL, NULL);     //erstellt das fertige neue Element
            this->_first = tmp;
            this->_last = tmp;
            this->_count++;
        }
        else
        {
            //create the object
            Node* tmp  = new Node(job, NULL, this->_first);

            this->_first->Node::setPrevious(tmp);
            this->_first = tmp;
            this->_count++;
        }
    }
}

//print out the whole List
void Queue::printJobs() {
    Node* first = _first;
    int pos = 0;
    while(first!=NULL){
        pos++;
        cout << pos << ": " << first->_daten->getPid() << " - " << first->_daten->getText() << endl;
        first = first->getNext();
    }
}

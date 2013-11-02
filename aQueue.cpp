/********************************************************
 * OOP - AS1_pqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 01.11.2013
 * CQueue.cpp   - FOO
 *
 *
 * TODO:    - Kommentare/Variablen anpassen,
 *          - Code-Review durch Kollega
 *          - Seinen Code anpassen lassen
********************************************************/

#include  <cstring>
#include  <iostream>

#include  "Queue.h"

using namespace std;

//constructor  ::create the empty Queue
Queue::Queue(void){									//??? default ???
    this->_first = NULL;
    this->_last = NULL;
    this->_count = 0;
}

//destructor
Queue::~Queue(void){
    while(_count){
        this->pop();
    }
}

//Methoden
void Queue::pop(){					//Loesch erstes Element.
    if(!_count){                     //Liste bereits Leer
        return;
    }
    else {                          //lösch den ersten
        Node* tmp = this->_first;
        this->_first = this->_first->getNext();
        this->_count --;
        delete tmp;
    }
}

//Create a new Node at the beginning of the List
void Queue::push(Job* job){
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

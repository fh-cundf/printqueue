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

#include  "queue.h"

using namespace std;

//constructor
queue::queue(void){									//??? default ???
    this->_first = NULL;
    this->_last = NULL;
    this->_count = 0;
}

//destructor
queue::~queue(void){
    while(_count){
        this->pop();
    }
}

//Methoden
void queue::pop(){					//Loesch erstes Element.
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
void queue::push(Job* datent){
    if(!(_count)){                           //wenn liste leer
        Node* tmp  = new Node(datent, NULL, NULL);     //erstellt das fertige neue Element
        this->_first = tmp;
        this->_last = tmp;
        this->_count++;
    }
    else
    {
        Node* tmp  = new Node(datent, NULL, this->_first);     //erstellt das fertige neue Element

        this->_first->Node::setPrevious(tmp);                     //das erste Element aktualisieren
        this->_first = tmp;                                     //Header aktualisieren
        this->_count++;
    }

}

//print out the whole List
void queue::printJobs() {
    Node* first = _first;
    int pos = 0;
    while(first!=NULL){
        pos++;
        cout << pos << ": " << first->_daten->getPid() << " - " << first->_daten->getText() << endl;
        first = first->getNext();
    }
}

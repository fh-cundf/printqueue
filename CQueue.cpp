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
#include  "CQueue.h"

using namespace std;

//constructor
CQueue::CQueue(void){									//??? default ???
    this->_first = NULL;
    this->_last = NULL;
    this->_count = 0;
}

//destructor
CQueue::~CQueue(void){
    delete this->_first;						//?????
    delete this->_last;						//??????
}

//Methoden
void CQueue::pop(){					//Loesch erstes Element.
    if(!_count){                     //Liste bereits Leer
        return;

    }
    else {                          //lösch den ersten
        CList* tmp = this->_first;
        this->_first = this->_first->getNext();
        this->_count --;
        delete tmp;
    }
}

//Erstellt ein Element am anfang der Liste
void CQueue::push(CPJob* datent){
    if(!(_count)){                           //wenn liste leer
        CList* tmp  = new CList(datent, NULL, NULL);     //erstellt das fertige neue Element
        this->_first = tmp;
        this->_last = tmp;
        this->_count++;
    }
    else
    {
        CList* tmp  = new CList(datent, NULL, this->_first);     //erstellt das fertige neue Element

        this->_first->CList::setPrevious(tmp);                     //das erste Element aktualisieren
        this->_first = tmp;                                     //Header aktualisieren
        this->_count++;
    }
}

//gesammte Liste ausgeben
void CQueue::printJobs() {
    CList* p_first = _first;
    int i_pos = 0;
    while(p_first!=NULL){
        i_pos++;
        cout << i_pos << ": " << p_first->_daten->getPid() << " - " << p_first->_daten->getText() << endl;
        p_first = p_first->getNext();
    }
}

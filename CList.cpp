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
#include  "CList.h"
#include  "CPJob.h"

// ein Node
//constructor
CList::CList(CPJob* pdaten, CList* pprev=NULL, CList* pnext=NULL){				//Neues Element mit
    this->_prev = pprev;
    this->_next = pnext;
    this->_daten = pdaten;
}


//destruktor
CList::~CList(void){									//default
    delete _daten;   							//delete das neue free...
}


//weitere Methoden
void CList::setPrevious(CList* p_prev){

    this->_prev = p_prev;
}


void CList::setNext(CList* p_next){

    this->_next = p_next;

}

CList* CList::getPrevious(){

    return _prev;
}
CList* CList::getNext(){

    return _next;
}

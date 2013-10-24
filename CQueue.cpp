#include  <cstring>
#include  <iostream>
#include  "CQueue.h"
#include  "CPJob.h"

using namespace std;

//constructor
CQueue::CQueue(void){									//??? default ???
    this->_first = NULL;
    this->_last = NULL;
}

//destructor
CQueue::~CQueue(void){
    delete this->_first;						///?????
    delete this->_last;						//??????

}

//Methoden
void CQueue::pop(){					//Lösch erste-Fkt.
	

    if (_first != NULL){
		
        _first = _first->next_get();
        _first.prev = NULL;
        cout << "Element geloescht";
	}
	else
	{
        cout << "Liste ist bereits Leer";

	}
}

void CQueue::push(CPJob* datent){			//Einfüge - Fkt.

    if (_first == NULL){

        _first = datent;				//erstes element überhaupt

	}
	else
	{
        CList* firstt = _first;			//ersten merken
        _first = datent;				//erstes "ersetzen"
        firstt.prev = _first;

	}
}

void CQueue::printJobs() {		//Prinkt-Fkt.

    CList* firstt = _first;

    while (firstt->next != NULL){

        printf("%i  - %s\n", firstt.lPid , firstt.*szText);

        firstt = firstt.next_get;

	}

}

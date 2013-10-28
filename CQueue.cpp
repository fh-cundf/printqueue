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
void CQueue::pop(){					//Loesch erste-Fkt.
	

    if (_first != NULL){
		
        _first = _first->next_get();
        _first->prev_set(NULL);

        cout << "Element geloescht";
	}
	else
	{
        cout << "Liste ist bereits Leer";

	}
}

void CQueue::push(CPJob* datent){			//Einfuege - Fkt.

//    if (_first == NULL){

//        _first = datent;				//erstes element ueberhaupt
//
//	}
//	else
//	{
//        CList* firstt = _first;			//ersten merken
//        _first = datent;				//erstes "ersetzen"
//        firstt->prev = _first;

//	}
}

void CQueue::printJobs() {		//Prinkt-Fkt.

    CList* firstt = _first;

    while (firstt->next_get() != NULL){

//        printf("%i  - %s\n", firstt->GetPid() , firstt.*szText);    //WTF PID ist da gar nicht abgelegt??

        firstt = firstt->next_get();

	}

}

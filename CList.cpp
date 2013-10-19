#include  <cstring>
#include  <iostream>
#include  "CList.h"
#include  "CPJob.h"

///Für den header mit next und prev


//constructor
CList::CList(CPJob* daten, CList* prev, CList* next){				//Neues Element mit 
	this->prev = prev;
	this->next = next;
	this->daten = daten;
}


//destruktor
CList::~CList(void){									//default
	delete daten;								//delete das neue free...
}


//weitere Methoden
void CList::prev_set(CList* prev){

	this->prev = prev;
}


void CList::next_set(CList* next){

	this->next = next;

}

CList* CList::prev_get(){

	return prev;
}
CList* CList::next_get(){

	
	return next;
}

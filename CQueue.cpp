#include  <cstring>
#include  <iostream>
#include  "CQueue.h"
#include  "CPJob.h"

using namespace std;

//constructor
CQueue(void){									//??? default ???
	first = NULL;
	last = NULL;
}

//destructor
~CQueue(void){

	delete first;						///?????
	delete last;						//??????

}											
//Methoden
void pop(){					//L�sch erste-Fkt.
	

	if (first != last){
		
		first = first.next_get();
		first.prev = NULL;
	}
	else
	{
		first = NULL;
		last = NULL;

	}
}

void push(CPJob* datent){			//Einf�ge - Fkt.

	if (first == NULL){

		first = datent;				//erstes element �berhaupt

	}
	else
	{
		firstt = frist;			//ersten merken
		first = datent;				//erstes "ersetzen"
		firstt.prev = first;

	}
}

void printJobs() {		//Prinkt-Fkt.

	firstt = first;

	while (next != NULL){

		printf("%i  - %s\n", firstt.lPid , firstt.*szText);

		firstt = CList::firstt.next_get;

	}

}
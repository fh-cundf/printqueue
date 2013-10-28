#ifndef CLIST_HEADER
#define CLIST_HEADER
#include "CPJob.h"

//
//  class  CList beinhaltet die Liste selbst.
//
class  CList
{
private:
	CPJob* daten;				
	CList* prev;
	CList* next;

public:

    //constructor
    CList(CPJob*, CList*, CList*);		//Neues Element mit

    //destruktor
    ~CList(void);						//default

    //weitere Methoden
    void prev_set(CList*);
    void next_set(CList*);

    CList* prev_get();
    CList* next_get();

};

#endif /* CLIST_HEADER */

/********************************************************
 * OOP - AS1_pqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 01.11.2013
 * CList.h
 *
 *
 * TODO:    - Kommentare/Variablen anpassen,
 *          - Code-Review durch Kollega
 *          - Seinen Code anpassen lassen
********************************************************/


#ifndef CLIST_HEADER
#define CLIST_HEADER
#include "CPJob.h"

//
//  class  CList beinhaltet die Liste selbst.
//
class  CList
{
private:
    CList* _prev;
    CList* _next;

public: 
    CPJob* _daten;
    //constructor
    CList(CPJob* daten, CList* first, CList* last);		//Neues Element mit

    //destruktor
    ~CList(void);						//default

    //weitere Methoden
    void prev_set(CList*);
    void next_set(CList*);

    CList* prev_get();
    CList* next_get();
};

#endif /* CLIST_HEADER */

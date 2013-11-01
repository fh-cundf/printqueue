/********************************************************
 * OOP - AS1_pqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 01.11.2013
 * CPJob.h
 *
 *
 * TODO:    - Kommentare/Variablen anpassen,
 *          - Code-Review durch Kollega
 *          - Seinen Code anpassen lassen
********************************************************/

#ifndef CPJOB_HEADER
#define CPJOB_HEADER

//
//  class  CPJob  defines  a  simple  printjob  with  id  and  text
//
class  CPJob
{
private:
    long  lPid;
    char  *szText;

public:
    //constructor
    CPJob(char*, long);  //inits  text-field  and process-id

    //destructor
    ~CPJob(void);

    //accessors
    void setText(char*); // sets  text-field
    char* getText(void); // returns  text-field
    long getPid(void); // returns  process-id
};

#endif /* CPJOB_HEADER */

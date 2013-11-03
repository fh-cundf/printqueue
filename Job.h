/********************************************************
 * OOP - AS1_pqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 01.11.2013
 * Job.h
 *
********************************************************/

#ifndef JOB_HEADER
#define JOB_HEADER

//
//  class  Job  defines  a  simple  printjob  with  id  and  text
//
class  Job
{
private:
    long  lPid;
    char* szText;

public:
    //constructor
    Job(char*, long);  //inits  text-field  and process-id

    //destructor
    ~Job(void);

    //accessors
    void setText(char*); // sets  text-field
    char* getText(void); // returns  text-field
    long getPid(void); // returns  process-id
};

#endif /* JOB_HEADER */

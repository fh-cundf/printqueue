/********************************************************
 * OOP - AS1_pqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 01.11.2013
 * CPJob.cpp    - foo
 *
 *
 * TODO:    - Kommentare/Variablen anpassen,
 *          - Code-Review durch Kollega
 *          - Seinen Code anpassen lassen
********************************************************/

#include <cstring>

#include "Job.h"

using namespace std;

//constructor  ::sets  text-field  and  process-id
Job::Job(char* _szText, long  _lPid){
    lPid = _lPid;
    szText = new  char[strlen(_szText) + 1];		//das neue malloc() !!!! new- -delete für free
    strcpy(szText, _szText);
}

//destructor  ::deletes  allocated  mem  for  text-field
Job::~Job(void) {
    delete[]  szText;			//Speicher wieder frei geben --free !!!
}

//accessor::sets  text-field
void  Job::setText(char  * _szText) {
    delete[]  szText;
    szText = new  char[strlen(_szText) + 1];		//das neue malloc() !!!! new- -delete für free
    strcpy(szText, _szText);

}

//accessor::returns  text-field
char* Job::getText(void) {

    return szText;
}

//accessor::returns  process  id
long Job::getPid(void) {

    return lPid;
}

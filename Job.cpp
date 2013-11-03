/********************************************************
 * OOP - AS1_printqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 09.11.2013
 * Job.cpp    - Job(data)
 *
********************************************************/

#include <cstring>

#include "Job.h"

using namespace std;

//constructor  ::sets  text-field  and  process-id
Job::Job(char* _szText, long  _lPid){
    if(!_szText)
        _szText = "";
    _jobPid = _lPid;
    _jobText = new  char[strlen(_szText) + 1];
    strcpy(_jobText, _szText);
}

//destructor  ::deletes  allocated  mem  for  text-field
Job::~Job(void) {
    delete[]  _jobText;
}

//accessor::sets  text-field
void  Job::setText(char  * _szText) {
    delete[]  _jobText;
    _jobText = new  char[strlen(_szText) + 1];
    strcpy(_jobText, _szText);
}

//accessor::returns  text-field
char* Job::getText(void) {
    return _jobText;
}

//accessor::returns  process  id
long Job::getPid(void) {
    return _jobPid;
}

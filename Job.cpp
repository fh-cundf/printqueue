/********************************************************
 * OOP - AS1_printqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 09.11.2013
 * Job.cpp    - Job(data)
 *
********************************************************/
#include <iostream>
#include <cstring>

#include "Job.h"

using namespace std;

//constructor  ::sets  text-field  and process-id
Job::Job(char* _jobText, long  _jobPid){
    if(!_jobText){
        _jobText = (char*)"";
    }
    this->_jobPid = _jobPid;
    this->_jobText = new  char[strlen(_jobText) + 1];
    strcpy(this->_jobText, _jobText);
}

//destructor  ::deletes  allocated  mem  for  text-field
Job::~Job(void) {
    delete[]  this->_jobText;
}

//accessor::sets  text-field
void  Job::setText(char* _jobText) {
    delete[]  this->_jobText;
    this->_jobText = new  char[strlen(_jobText) + 1];
    strcpy(this->_jobText, _jobText);
}

//accessor::returns  text-field
char* Job::getText(void) {
    return this->_jobText;
}

//accessor::returns  process  id
long Job::getPid(void) {
    return this->_jobPid;
}

// print job to console,
void Job::printJob(){
    cout << this->_jobPid << " - " << this->_jobText << endl;
}

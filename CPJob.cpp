#include <cstring>
#include "string.h"
#include <iostream>
#include "CPJob.h"

using namespace std;


//constructor  ::sets  text-field  and  process-id
CPJob::CPJob(char  *_szText, long  _lPid){
	lPid = _lPid;
	szText = new  char[strlen(_szText) + 1];		//das neue malloc() !!!! new- -delete f�r free
	strcpy(szText, _szText);
}

//destructor  ::deletes  allocated  mem  for  text-field
CPJob::~CPJob(void) {
	delete[]  szText;			//Speicher wieder frei geben --free !!!
}

//accessor::sets  text-field
void  CPJob::setText(char  * _szText) {
	delete[]  szText;
	szText = new  char[strlen(_szText) + 1];		//das neue malloc() !!!! new- -delete f�r free
	strcpy(szText, _szText);

}

//accessor::returns  text-field
char* CPJob::getText(void) {
	
	return szText;
}

//accessor::returns  process  id
long CPJob::getPid(void) {

	return lPid;
}
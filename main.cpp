/********************************************************
 * OOP - AS1_printqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 * 09.11.2013
 * main.cpp    - Testprogramm for the Queue
 *
********************************************************/

#include  <iostream>

#include  "Job.h"
#include  "Queue.h"

using namespace std;

void fillQueue(Queue* pQueue, int num);

//driver: simple  test
int  main() {
    Job* pPJob;
    Queue* pQueue = new Queue();
    fillQueue(pQueue, 3);

    cout << "\n\t print der Queue(3 Elemente):\n\n";
    pQueue->printJobs();

    cout << "\n\n\t Test pop-Rueckgabewerte:\n\n";
    Job* popjob = pQueue->pop();
    cout << "pop-id: " << popjob->getPid() << " - " << popjob->getText() << endl;


    cout << "\n\n\t Test print nach einem pop (2Elemente):\n\n";
    pQueue->printJobs();

    cout << "\n\n ### neues Element pushen ...\n\n";
    pPJob = new  Job((char*)"newpush", 3);
    pQueue->push(pPJob);

    cout << "\n\n ### pushen eines NULL-pointer ...\n\n";
    pQueue->push(NULL);

    cout << "\n\n\t Test print nach einfuegen eines neuen elements (3Elemente):\n\n";
    pQueue->printJobs();

    cout << "\n\n\t Test queue leer-poppen, dann nach-poppen, mit jew. pop-ausgabe:\n\n";
    for(int i=0; i < 5; i++){
        popjob = pQueue->pop();
        if(popjob)
            cout << "pop-id: " << popjob->getPid() << " - " << popjob->getText() << endl;
        else
            cout << "nichts zu poppen" << endl;
        }

    cout << "\n\n ### leere queue wieder fuellen(5Elem) ...\n\n";
    fillQueue(pQueue, 5);

    cout << "\n\n\t Test print (5Elemente):\n\n";
    pQueue->printJobs();
    return  0;
}


//fills  queue  with  CPJob  objects
void fillQueue(Queue* pQueue, int num) {
    Job* pPJob;
    for (int i = 0; i < num; i++){
        pPJob = new  Job((char*)"text", i);
        pQueue->push(pPJob);
    }
}

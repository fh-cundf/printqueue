/********************************************************
 * OOP - AS1_pqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 *
 * 01.11.2013
 * main.cpp    - Testprogramm for the Queue
 *
********************************************************/

#include  <iostream>

#include  "Job.h"
#include  "Queue.h"

using namespace std;


//fills  queue  with  CPJob  objects
void fillQueue(Queue* pQueue, int num) {
    Job* pPJob;
    for (int i = 0; i < num; i++){
        pPJob = new  Job("text", i);
        pQueue->push(pPJob);
    }
}

//driver: simple  test
int  main() {
    Job* pPJob;
    Queue* pQueue = new Queue();
    fillQueue(pQueue, 3);

    cout << "\n\t print der Queue(3 Elemente):\n";
    pQueue->printJobs();

    cout << "\n\t Test pop-rueckgabewerte:\n";
    Job* popjob = pQueue->pop();
    cout << "pop-id: " << popjob->getPid() << " - " << popjob->getText() << endl;

    cout << "\n\t Test print nach einem pop (2Elemente):\n";
    pQueue->printJobs();

    cout << "\n ### neues Element pushen ...\n";
    pPJob = new  Job("newpush", 3);
    pQueue->push(pPJob);

    cout << "\n ### pushen eines NULL-pointer ...\n";
    pQueue->push(NULL);

    cout << "\n\t Test print nach einem den beiden push (3Elemente):\n";
    pQueue->printJobs();

    cout << "\n\t Test queue leer-poppen, dann nach-poppen, mit jew. pop-ausgabe:\n";
    for(int i=0; i < 5; i++){
        popjob = pQueue->pop();
        if(popjob)
            cout << "pop-id: " << popjob->getPid() << " - " << popjob->getText() << endl;
        else
            cout << "nichts zu poppen" << endl;
        }

    cout << "\n ### leere queue wieder fuellen(5Elem) ...\n";
    fillQueue(pQueue, 5);

    cout << "\n\t Test print (5Elemente):\n";
    pQueue->printJobs();
    return  0;
}

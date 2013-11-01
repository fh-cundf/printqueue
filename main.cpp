/********************************************************
 * OOP - AS1_pqueue
 * Christian Winkler, Franz Polz
 * FH-Salzburg, ITSB-B2012
 *
 *
 * 01.11.2013
 * main.cpp    - Testprogramm fuer Queue
 *
 *
 * TODO:    - Kommentare/Variablen anpassen,
 *          - Code-Review durch Kollega
 *          - Seinen Code anpassen lassen
********************************************************/


#include  <iostream>
#include  "CPJob.h"
#include  "CQueue.h"

using namespace std;


//fills  queue  with  CPJob  objects

void fillQueue(CQueue* pQueue, int num) {
    CPJob  *pPJob;
    for (int i = 0; i < num; i++){
        pPJob = new  CPJob("text", i);
        pQueue->push(pPJob);
    }
}

//driver: simple  test
int  main(int argc, char* argv[]) {
    CQueue *pQueue;
    pQueue = new CQueue();
    fillQueue(pQueue, 3);
    cout << "\n----print:\n";
    pQueue->printJobs();
    pQueue->pop();
    cout << "\n----print:\n";
    pQueue->printJobs();
    pQueue->pop();
    CPJob  *pPJob = new  CPJob("lool", 4);
    pQueue->push(pPJob);
    cout << "\n----print:\n";
    pQueue->printJobs();

    pQueue->pop();
    pQueue->pop();
    pQueue->pop();
    cout << "\n----print:\n";
    pQueue->printJobs();
    pQueue->pop();
    fillQueue(pQueue, 2);
    cout << "\n----print:\n";
    pQueue->printJobs();
    return  0;
}

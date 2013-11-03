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
int  main(int argc, char* argv[]) {
    Queue* pQueue;
    pQueue = new Queue();
    fillQueue(pQueue, 3);
    cout << "\n----print:\n";
    pQueue->printJobs();
    pQueue->pop();
    cout << "\n----print:\n";
    pQueue->printJobs();
    pQueue->pop();
    Job* pPJob = new  Job("LOOOL", 5);
    pQueue->push(pPJob);
    cout << "\n----print:\n";
    pQueue->printJobs();
    pQueue->pop();
    pQueue->pop();
    pQueue->pop();
    cout << "\n----print:" << endl;
    pQueue->printJobs();
    pQueue->pop();
    fillQueue(pQueue, 2);
    cout << "\n----print:\n";
    pQueue->printJobs();
    return  0;
}

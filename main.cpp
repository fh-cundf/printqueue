#include  <iostream>
#include  "CPJob.h"
#include  "CQueue.h"

namespace std


//fills  queue  with  CPJob  objects
{
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
	pQueue->printJobs();
	pQueue->pop();
	pQueue->printJobs();
	return  0;
}
}

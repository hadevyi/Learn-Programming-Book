#include <iostream>
#include <string>
#include "MyQueue.h"
using namespace std;

void main()
{
	MyQueue mQ(100);
	int n;

	cout << "Enter 5 integers to insert into the queue. ";

	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);	//Insert in Queue
	}

	cout << "capacity of queue is " << mQ.capacity() << ", Queue Size is " << mQ.length() << endl;
	cout << "Remove the elements of the queue in order and print them out. >> ";

	while (mQ.length() != 0)	{
		cout << mQ.dequeue() << ' ';	//Remove from queue to output
	}

	cout << endl << "Current size of queue is " << mQ.length() << endl;
}
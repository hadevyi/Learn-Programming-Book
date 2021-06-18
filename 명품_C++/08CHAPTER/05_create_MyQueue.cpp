#include <iostream>
#include <string>
using namespace std;

class BaseArray {
private:
	int capacity;	//Size of Array
	int* mem;	//Pointer of memory to create an integer array
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() { delete[]mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue :public BaseArray {
	int leg;
public:
	MyQueue(int capacity) :BaseArray(capacity) { leg = 0; }
	void enqueue(int val) { put(leg, val); leg++; }
	int capacity() { return getCapacity(); }
	int length() { return leg; }
	int dequeue() {
		leg--;
		int result = get(leg);
		put(leg, NULL);
		return result;
	}
};

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
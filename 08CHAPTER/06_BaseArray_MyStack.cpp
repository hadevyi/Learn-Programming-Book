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

class MyStack : public BaseArray {
	int leg;
public:
	MyStack(int capacity) :BaseArray(capacity) { leg = 0; }
	void push(int val) { put(leg, val); leg++; }
	int capacity() { return getCapacity(); }
	int length() { return leg; }
	int pop() {
		leg--;
		int result = get(leg);
		return result;
	}
};

void main()
{
	MyStack mStack(100);
	int n;

	cout << "Enter 5 integers to insert into the stack >> ";

	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n);	//Insert into Stack
	}

	cout << "Stack capacity : " << mStack.capacity() << ", Queue Size : " << mStack.length() << endl;
	cout << "Pop and output all elements of the stack. >> ";

	while (mStack.length() != 0)
	{
		cout << mStack.pop() << ' ';	//Pop from Stack
	}

	cout << endl << "Current size of stack : " << mStack.length() << endl;
}
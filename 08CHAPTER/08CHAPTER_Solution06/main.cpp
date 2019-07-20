#include <iostream>
#include <string>
#include "MyStack.h"
using namespace std;

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
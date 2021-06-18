#include <iostream>
#include <string>
using namespace std;

template <class T>
class MyStack {
	int tos;	//top of stack
	T data[100];	//T 타입의 배열. 스택 크기는 100
public:
	MyStack();
	void push(T element);	//T 타입 원소 element를 data[] 배열을 삽입
	T pop();	//스택의 탑에 있는 데이터를 data[] 배열에서 리턴
};

template <class T>
MyStack<T>::MyStack() { tos = -1; }

template<class T>
void MyStack<T>::push(T element) {
	if (tos == 99)
	{
		cout << "stack full";
		return;
	}

	tos++;
	data[tos] = element;
}

template<class T>
T MyStack<T>::pop() {
	T retData;

	if (tos == -1) {
		cout << "stack empty";
		return 0;
	}

	retData = data[tos--];
	return retData;
}

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

void main(){
	MyStack<int*> ipStack;
	int *p = new int[3];
	
	for (int i = 0; i < 3; i++)
		p[i] = i * 10;

	ipStack.push(p);
	int *q = ipStack.pop();

	for (int i = 0; i < 3; i++)
		cout << q[i] << ' ';
	cout << endl;
	delete[]p;

	MyStack<Point> pointStack;
	Point a(2, 3), b;
	pointStack.push(a);
	b = pointStack.pop();
	b.show();

	MyStack<Point*> pStack;
	pStack.push(new Point(10, 20));
	Point* pPoint = pStack.pop();
	pPoint->show();

	MyStack<string> stringStack;
	string s = "c++";
	stringStack.push(s);
	stringStack.push("java");
	cout << stringStack.pop() << ' ';
	cout << stringStack.pop() << endl;
}
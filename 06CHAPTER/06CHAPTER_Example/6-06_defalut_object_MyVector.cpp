#include <iostream>
using namespace std;

class MyVector {
	int *p;
	int size;
public:
	MyVector(int n = 100);
	~MyVector();
};

MyVector::MyVector(int n){
	p = new int[n];
	size = n;
}

MyVector::~MyVector(){
	delete[] p;
}

void main(){
	MyVector *v1, *v2;
	v1 = new MyVector();
	v2 = new MyVector(1024);

	delete v1;
	delete v2;
}
// 이 문제는 출력시 아무런 값도 출력되지 않는다. 다만 시스템 내부에서만 배열이 동적할당되는 것이다.
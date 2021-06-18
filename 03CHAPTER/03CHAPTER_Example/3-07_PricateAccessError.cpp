#include <iostream>
using namespace std;

class PrivateAccessError {
private:
	int a;
	void f();
	PrivateAccessError();
public:
	int b;
	PrivateAccessError(int x);
	void g();
};

PrivateAccessError::PrivateAccessError(){
	a = 1;
	b = 1;
}

PrivateAccessError::PrivateAccessError(int x) {
	a = x;
	b = x;
}

void PrivateAccessError::f() {
	a = 5;
	b = 5;
}

void PrivateAccessError::g() {
	a = 6;
	b = 6;
}

void main() {
	PrivateAccessError objA;
	PrivateAccessError objB(100);
	objB.a = 10;
	objB.b = 20;
	objB.f();
	objB.g();
}

/*
해당 소스는 pulic와 private의 차이를 알아보도록 보여주는 예제이다.
따라서 컴파일이 되지 않은 잘못된 소스이다.
실행은 되지 않지만 왜 public에 써야하는지, private에 써야하는지를 알 수 있는 좋은 소스이다.
*/
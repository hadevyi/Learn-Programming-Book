#include <iostream>
using namespace std;

int add(int a, int b) { return 1 + b; }
//int add(int a, int &b) { b = b + a; return b; }

void main(){
	int s = 10, t = 20;

	cout << add(s, t) << endl; //그냥 변수와 참조 변수를 컴파일러는 구별할 수 없어 컴파일 오류가 난다.
}
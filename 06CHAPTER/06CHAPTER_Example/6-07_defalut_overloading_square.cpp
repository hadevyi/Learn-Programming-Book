#include <iostream>
using namespace std;

float square(float a){
	return a*a;
}

double square(double a){
	return a*a;
}

void main(){
	cout << square(3.0) << endl;
	cout << square((float)3) << endl; // (float)가 생략된 경우 double, float 중 무엇으로 형 변환하기 결정하기 힘들다.
}
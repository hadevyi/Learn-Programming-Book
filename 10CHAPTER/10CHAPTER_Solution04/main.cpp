#include <iostream>
using namespace std;

void main(){
	int x[] = { 1,10,100,5,4 };
	
	if (search(100, x, 5))
		cout << "100이 배열 x에 포함되어 있다." << endl;
	else
		cout << "100이 배열 x에 포함되어있지 않다." << endl;
}
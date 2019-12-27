#include <iostream>
using namespace std;

void main(){
	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,10,100,5,4 };

	if (equalArrays(x, y, 5))
		cout << "같다" << endl;
	else
		cout << "다르다" << endl;
}
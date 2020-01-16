#include <iostream>
using namespace std;

void fillLine(int a = 25, char c = '*');

void fillLine(int a, char c){
	for (int i = 0; i < a; i++)
		cout << c;
	cout << endl;
}

void main(){
	fillLine();
	fillLine(10, '%');
}
#include <iostream>
#include <string>
using namespace std;

void main(){
	string song("Falling in lovw with you");
	string elvis("Elvis Presley");
	string singer;

	cout << song + "를 부른 가수는";
	cout << "(힌트 : 첫글자는 " << elvis[0] << ")?";

	getline(cin, singer);

	if (singer == elvis)
		cout << "맞았습니다.";
	else
		cout << "틀렸습니다. " << elvis << "입니다." << endl;
}
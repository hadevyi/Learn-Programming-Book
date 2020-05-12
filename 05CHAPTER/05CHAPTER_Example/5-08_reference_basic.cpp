#include <iostream>
using namespace std;

// 배열 s의 index 원소 공간에 대한 참조를 리턴하는 함수
char &find(char s[], int index) {
	return s[index];		// 참조 리턴
}

void main() {
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S';	// name[0] = 'S'로 변경
	cout << name << endl;

	char& ref = find(name, 2);
	ref = 't';				// name = "Site"
	cout << name << endl;
}
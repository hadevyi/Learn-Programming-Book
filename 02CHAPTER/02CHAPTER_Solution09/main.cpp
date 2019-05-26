//2017-1학기 C++ 20163131 당현아
#include <iostream>
using namespace std;

void main()
{
	char name[11], address[50];
	int age;

	cout << "이름은? ";
	cin.getline(name, 11, '\n');

	cout << "주소는? ";
	cin.getline(address, 50, '\n');

	cout << "나이는? ";
	cin >> age;

	cout << "\n" << name << ", " << address << ", " << age << "세" << endl << endl;
}
#include <iostream>
using namespace std;

int main()
{
	char name[11], address[50];
	int age;

	cout << "your name? ";
	cin.getline(name, 11, '\n');

	cout << "your address? ";
	cin.getline(address, 50, '\n');

	cout << "your age? ";
	cin >> age;

	cout << "\n" << name << ", " << address << ", " << age << endl << endl;
}

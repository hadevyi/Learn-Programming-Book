#include <iostream>
#include <string>
using namespace std;

void main(){
	string names[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "이름 >> ";
		getline(cin, names[i], '\n');
	}

	string latter = names[0];

	for (int i = 1; i < 5; i++)
	{
		if (latter < names[i])
		{
			latter = names[i];
		}
	}

	cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
}
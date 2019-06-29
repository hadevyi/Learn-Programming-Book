#include <iostream>
#include <string>
#include "Trace.h"
using namespace std;

int Trace::num = 0;
string* Trace::tag = new string[100];
string* Trace::info = new string[100];

void Trace::put(string s1, string s2)
{
	tag[num] = s1;
	info[num] = s2;
	num++;
}

void Trace::print(string s1)
{
	if (s1 == "All")
		cout << "----------------------------" << s1 << "Outputs Trace information." << "----------------------------" << endl;
	else
		cout << "----------------------------" << s1 << "Outputs Trace information for the tag." << "----------------------------" << endl;

	if (s1 == "All")
	{
		for (int i = 0; i < num; i++)
			cout << tag[i] << " : " << info[i] << endl;
	}
	else
	{
		for (int i = 0; i < num; i++)
			if (tag[i] == s1)
				cout << tag[i] << " : " << info[i] << endl;
	}
}
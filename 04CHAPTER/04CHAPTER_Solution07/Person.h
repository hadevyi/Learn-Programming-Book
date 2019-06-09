#pragma once
#ifndef PERSON
#define PERSON
#include <string>
class Person {
	string name;
	string tel;
public:
	Person();
	string getName();
	string getTel();
	void set(string name, string tel);
};
#endif // !PERSON

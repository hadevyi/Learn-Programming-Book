#pragma once
#ifndef PERSON
#define PERSON
class Person {
	string name;
public:
	Person();
	Person(string name);
	string getName();
	void setName(string name);
};
#endif // !PERSON

#pragma once
#ifndef FAMILY
#define FAMILY
class Family {
	int size;
	Person *p;
	string name;
public:
	Family(string name, int size);
	~Family();
	void show();
	void setName(int count, string name);
};
#endif // !FAMILY

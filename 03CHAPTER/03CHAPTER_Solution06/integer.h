#pragma once
#ifndef INTEGER
#define INTEGER
#include <string>
class Integer {
	int num;
public:
	Integer();
	Integer(int n);
	Integer(string s);
	int get();
	void set(int n);
	bool isEven();
};
#endif // !INTEGER

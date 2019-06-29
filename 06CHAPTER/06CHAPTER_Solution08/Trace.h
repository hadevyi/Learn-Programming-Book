#pragma once
#ifndef TRACE
#define TRACE
#include <string>
class Trace {
	static string* tag;
	static string* info;
	static int num;
public:
	static void put(string s1, string s2);
	static void print(string s1 = "All");
};
#endif // !TRACE

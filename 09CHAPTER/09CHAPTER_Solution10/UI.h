#pragma once
#ifndef UI
#define UI
#include <iostream>
#include <string>
using namespace std;
class UI {
public:
	static int menu()
	{
		int seletemenu;
		cout << "Inserte : 1, Delete : 2, Show : 3, Exit : 4 >> ";
		cin >> seletemenu;
		return seletemenu;
	}
	static int shape()
	{
		int seleteshape;
		cout << "Line : 1, Circle : 2, Rect : 3 >> ";
		cin >> seleteshape;
		return seleteshape;
	}
	static int deleteindex()
	{
		int indexnum;
		cout << "Enter the index of the shape you want to delete. >> ";
		cin >> indexnum;
		return indexnum;
	}
};
#endif // !UI

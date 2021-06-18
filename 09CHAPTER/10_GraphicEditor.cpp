#include <iostream>
#include <string>
using namespace std;

class Shape {
public:

};

class GraphicEditor {
public:
	GraphicEditor();
	void paly();
};

class Circle :public Shape {
};

class Line :public Shape {
};

class Rect :public Shape {
};

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

void main()
{
	GraphicEditor g;
	g.paly();
}
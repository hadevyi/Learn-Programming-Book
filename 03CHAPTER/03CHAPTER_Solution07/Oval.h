#pragma once
#ifndef OVAL
#define OVAL
class Oval {
	int width;
	int height;
public:
	Oval();
	Oval(int n1, int n2);
	~Oval();
	void set(int n1, int n2);
	void show();
	int getWidth();
	int getHeight();
};
#endif // !OVAL


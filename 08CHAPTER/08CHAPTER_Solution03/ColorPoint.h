#pragma once
#ifndef COLORPOINT
#define COLORPOINT
#include <string.h>
#include "Point.h"
class ColorPoint :public Point {
	string name;
public:
	ColorPoint(int x, int y, string name) : Point(x, y) { this->name = name; }
	void setPoint(int x, int y);
	void setColor(string name);
	void show();
};
#endif // !COLORPOINT

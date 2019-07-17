#pragma once
#ifndef COLORPOINT
#define COLORPOINT
#include <string.h>
#include "Point.h"
class ColorPoint :public Point {
	string name;
public:
	ColorPoint(int x = 0, int y = 0, string name = "BLACK") : Point(x, y) { this->name = name; }
	void setPoint(int x, int y);
	void setColor(string name);
	void show();
};
#endif // !COLORPOINT

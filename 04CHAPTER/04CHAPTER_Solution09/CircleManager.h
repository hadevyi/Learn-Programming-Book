#pragma once
#ifndef CIRCLEMANAGER
#define CIRCLEMANAGER
#include "Circle.h"
class CircleManager {
	Circle *p;
	int size;
public:
	CircleManager();
	CircleManager(int size);
	~CircleManager();
	void serachByName();
	void serchByArea();
};
#endif // !CIRCLEMANAGER

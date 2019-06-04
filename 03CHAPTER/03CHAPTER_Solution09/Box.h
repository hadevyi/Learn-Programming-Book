#pragma once
#ifndef BOX
#define BOX
class Box {
	int width, height;
	char fill;
public:
	Box();
	Box(int w, int h);
	void setFill(char c);
	void setSize(int w, int h);
	void draw();
};
#endif // !BOX

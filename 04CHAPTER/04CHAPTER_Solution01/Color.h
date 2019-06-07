#pragma once
#ifndef COLOR
#define COLOR
class Color {
	int red, green, blue;
public:
	Color();
	Color(int r, int g, int b);
	void setColor(int r, int g, int b);
	void show();
};
#endif // !COLOR


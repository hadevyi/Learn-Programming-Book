#pragma once
#ifndef PLAYER
#define PLAYER
#include <string>
class Player {
	string name;
	int num[3];
public:
	Player();
	void setName(string name);
	string putName();
	void random();
	bool result();
};
#endif // !PLAYER

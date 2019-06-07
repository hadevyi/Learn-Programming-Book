#pragma once
#ifndef PLAYER
#define PLAYER
#include <string>

class Player {
	int number;
	int count;
	string *name;
public:
	Player(int n);
	~Player();
	string getName();
};

#endif // !PLAYER_H
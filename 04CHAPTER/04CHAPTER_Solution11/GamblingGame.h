#pragma once
#ifndef GAMBLINGGAME
#define GAMBLINGGAME
#include "Player.h"
class GamblingGame {
	Player *p;
public:
	GamblingGame();
	~GamblingGame();
	void game();
};
#endif // !GAMBLINGGAME

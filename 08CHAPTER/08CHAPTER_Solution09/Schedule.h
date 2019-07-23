#pragma once
#ifndef SCHEDULE
#define SCHEDULE

#include "Seat.h"

class Schedule {
	Seat* seat;
public:
	Schedule();
	string getChair(int num);
	void reservation(int num, string name);
	void cancle(int num, string name);
};

Schedule::Schedule()
{
	seat = new Seat[8];
}

string Schedule::getChair(int num)
{
	return seat[num].NOW();
}

void Schedule::reservation(int num, string name)
{
	seat[num].change_chair(name);
}

void Schedule::cancle(int num, string name)
{
	seat[num].cancle_chair(name);
}

#endif // !SCHEDULE
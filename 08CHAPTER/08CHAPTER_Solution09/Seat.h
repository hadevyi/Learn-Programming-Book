#pragma once
#ifndef SEAT
#define SEAT
#include <string>
#include <iostream>
using namespace std;

class Seat {
	string chair;
public:
	Seat();
	string NOW();
	void change_chair(string name);
	void cancle_chair(string name);
};

Seat::Seat()
{
	chair = "--------";
}

string Seat::NOW()
{
	return chair;
}

void Seat::change_chair(string name)
{
	this->chair = name;
}

void Seat::cancle_chair(string name)
{
	if (name == chair)
		this->chair = "--------";
	else
		cout << "Reservator name is different." << endl;
}
#endif // !SEAT


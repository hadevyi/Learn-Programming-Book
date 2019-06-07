#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

Player::Player(int n) {
	number = n;
	count = -1;

	name = new string[number];

	for (int i = 0; i < number; i++)
	{
		cout << "Please enter the name of the participant >> ";
		cin >> name[i];
	}
}

Player::~Player() { delete[] name; }

string Player::getName() {
	count++;

	if (count >= number)
		count = 0;

	string named = name[count];

	return named;
}
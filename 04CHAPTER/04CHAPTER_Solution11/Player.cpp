#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "Player.h"
using namespace std;

Player::Player() { srand((unsigned)time(0)); }

void Player::setName(string name) {
	this->name = name;
}

string Player::putName() {
	return name;
}

void Player::random() {
	int i = 0;

	for (i = 0; i < 3; i++)
		num[i] = rand() % 3;

	cout << "\t\t" << num[0] << "\t" << num[1] << "\t" << num[2] << endl;
}

bool Player::result() {
	if (num[0] == num[1] && num[0] == num[2])
		return true;
	else
		return false;
}
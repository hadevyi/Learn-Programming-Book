#include <iostream>
#include <string>
using namespace std;

class Word {
	int num;
	string bese;
	string now;
public:
	Word();
	void game();
};

class Player {
	int number;
	int count;
	string *name;
public:
	Player(int n);
	~Player();
	string getName();
};

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

void main() {
	Word w;
	w.game();
}
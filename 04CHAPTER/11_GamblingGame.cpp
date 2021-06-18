#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

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

class GamblingGame {
	Player *p;
public:
	GamblingGame();
	~GamblingGame();
	void game();
};

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

GamblingGame::GamblingGame() { p = new Player[2]; }
GamblingGame::~GamblingGame() { delete[]p; }

void GamblingGame::game() {
	int i = 0;
	string s, serch;

	cout << "***** Let's start the gaming game. *****" << endl;
	cout << "First competitor's>> ";
	cin >> s;
	p[0].setName(s);
	cout << "Second player name>> ";
	cin >> s;
	p[1].setName(s);

	while (true) {
		cout << endl << p[i % 2].putName() << "<Enter>";
		getline(cin, serch);
		p[i % 2].random();

		if (p[i % 2].result()) {
			cout << "\t\t\t\t\t\t\tIt's " << p[i % 2].putName() << "'s victory.";
			break;
		}
		else
			cout << "\t\t\t\t\t\t\t That's too" << endl;

		i++;
	}
}

void main() {
	GamblingGame g;
	g.game();
}
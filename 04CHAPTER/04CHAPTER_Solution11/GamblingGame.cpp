#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "GamblingGame.h"
using namespace std;

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
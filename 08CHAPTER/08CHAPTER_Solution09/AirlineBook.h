#pragma once
#ifndef AIRLINEBOOK
#define AIRLINEBOOK

#include <string>
#include "Schedule.h"

class AirlineBook {
	Schedule* schedule;
public:
	AirlineBook();
	void show();
	void now_reservation(int num);
	void now_cancle(int num);
};

AirlineBook::AirlineBook()
{
	schedule = new Schedule[3];
}

void AirlineBook::show() {
	for (int i = 0; i < 3; i++)
	{
		if (i == 0) cout << " 7 o'clock : ";
		else if (i == 1) cout << "12 o'clock : ";
		else if (i == 2) cout << "17 o'clock : ";

		for (int j = 0; j < 8; j++)
			cout << schedule[i].getChair(j) << "    ";
		cout << endl;
	}
}

void AirlineBook::now_reservation(int num)
{
	int set;
	string name;

	if (num == 0) cout << " 7 o'clock : ";
	else if (num == 1) cout << "12 o'clock : ";
	else if (num == 2) cout << "17 o'clock : ";

	for (int i = 0; i < 8; i++)
		cout << schedule[num].getChair(i) << "    ";

	cout << endl << "Seat number >> ";
	cin >> set;
	cout << "Enter Name >> ";
	cin >> name;

	schedule[num].reservation(set - 1, name);
	cin.ignore();
}

void AirlineBook::now_cancle(int num)
{
	int set;
	string name;

	if (num == 0) cout << " 7 o'clock : ";
	else if (num == 1) cout << "12 o'clock : ";
	else if (num == 2) cout << "17 o'clock : ";

	for (int i = 0; i < 8; i++)
		cout << schedule[num].getChair(i) << "    ";

	cout << endl << "Seat number >> ";
	cin >> set;
	cout << "Enter Name >> ";
	cin >> name;

	schedule[num].cancle(set - 1, name);
	cin.ignore();
}

#endif // !AIRLINEBOOK
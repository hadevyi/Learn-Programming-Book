#include <iostream>
#include "Console.h"
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

class Console {
public:
	void set();
};

void Console::set() {

	AirlineBook air;
	int selete, time;

	cout << "***** Welcome to Hansung Airlines. *****" << endl;

	while (true)
	{
		cout << endl << "Reservation : 1 / Cancellation : 2 / View : 3 / Exit : 4 >> ";
		cin >> selete;

		if (selete == 1)
		{
			cout << "  7 o'clock : 1 / 12 o'clock : 2 / 17 o'clock : 3 >> ";
			cin >> time;
			air.now_reservation(time - 1);
			cout << endl;
		}
		else if (selete == 2)
		{
			cout << "  7 o'clock : 1 / 12 o'clock : 2 / 17 o'clock : 3 >> ";
			cin >> time;
			air.now_cancle(time - 1);
			cout << endl;
		}
		else if (selete == 3)
		{
			air.show();
			cout << endl;
		}
		else if (selete == 4)
		{
			cout << "Shut down the reservation system." << endl << endl;
			exit(0);
		}
		else
		{
			cout << "You've entered something wrong. Please check the menu and re-enter." << endl;
		}
	}
}

void main(){
	Console console;
	console.set();
}

#pragma once
#ifndef CONSOLE
#define CONSOLE

#include "AirlineBook.h"

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

#endif // !CONSOLE
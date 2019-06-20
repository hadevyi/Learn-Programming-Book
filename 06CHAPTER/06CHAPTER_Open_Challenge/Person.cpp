#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include "Person.h"
using namespace std;

void Person::game()
{
	int random = rand() % 100; //Create random value.
	int name_cnt = 0; //Count for name output
	int num; // Enter Value
	int down_num, up_num; //Create a comparison for the input value

	while (true)
	{
		cout << "The answer is between " << down << " and " << up << endl;

		cout << name[name_cnt % 2] << " >> ";

		cin >> num;

		if (num == random)
		{
			cout << name[name_cnt % 2] << " won!" << endl << endl;
			exit(0);
		}

		cout << endl;

		down_num = num - random;
		up_num = random - num;

		if (down_num < up_num)
			down = num;
		else
			up = num;


		if (name_cnt == 2)
			name_cnt = 1;
		else
			name_cnt++;
	}
}
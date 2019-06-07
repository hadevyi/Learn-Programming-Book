#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

class random_change {
	int leght, ran, abc;
	string abc_ran[26];
	string s;
public:
	random_change();
	void in_string();
};

random_change::random_change() {
	srand((unsigned)time(0));

	for (int i = 0; i < 26; i++)
		abc_ran[i] = 'a' + i;
}

void random_change::in_string() {
	cout << "Please enter a line below (exit will exit)" << endl;

	while (true) {
		cout << ">>";
		getline(cin, s);
		leght = s.size();

		if (s == "exit")
			exit(0);

		ran = rand() % leght;

		while (!isalpha(s.at(ran)))
			ran = rand() % leght;

		abc = rand() % 26;

		s.replace(ran, 1, abc_ran[abc]);
		cout << s << endl;
	}
}
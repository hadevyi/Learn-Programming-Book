#include <iostream>
#include <string>
using namespace std;

void main()
{
	string s, t;

	cout << "Play rock, paper, scissors game.\n-----------------------------------------------------------------\nEnter between rock, paper, scissors\n\n";

	cout << "A >> ";
	cin >> s;
	cout << "B >> ";
	cin >> t;

	if (s == "scissors"&&t == "scissors" || s == "rock"&&t == "rock" || s == "paper"&&t == "paper")
		cout << "\nA and B came up with the same thing to draw." << endl;
	else if (s == "scissors"&&t == "paper" || s == "rock"&&t == "scissors" || s == "paper"&&t == "rock")
		cout << "\nA beat B." << endl;
	else if (t == "scissors"&&s == "paper" || t == "rock"&&s == "scissors" || t == "paper"&&s == "rock")
		cout << "\nB beat A." << endl;
	else
		cout << "\nThe program will be shut down due to an incorrect entry.\n" << endl;
}
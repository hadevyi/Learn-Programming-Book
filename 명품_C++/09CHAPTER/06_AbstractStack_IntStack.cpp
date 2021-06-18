#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;	//Push n to stack. If the stack is full, false return
	virtual bool pop(int& n) = 0;	//Store the integer you pop in the stack to n and return if the stack is empty
	virtual int size() = 0;	//Returns the number of integers stored in the current stack
};

class IntStack :public AbstractStack {
	int* arr;
	int max;
	int cnt;
public:
	IntStack(int max) { this->max = max; cnt = 0; arr = new int[max]; }
	bool push(int n);
	bool pop(int& n);
	int size() { return cnt; }
	void now();
};

bool IntStack::push(int n) {

	if (cnt >= max)
		return false;

	arr[cnt] = n;
	cnt++;

	return true;
}

bool IntStack::pop(int& n) {

	if (cnt <= 0)
		return false;

	for (int i = 0; i < cnt; i++)
		if (arr[i] == n)		{
			for (int j = i; j < cnt - 1; j++)
				arr[j] = arr[j + 1];

			arr[cnt] = NULL;
			cnt--;
		}

	return true;
}

void IntStack::now() {

	if (cnt == 0)
		cout << "No input value." << endl;
	else	{
		for (int i = 0; i < cnt; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}

void main()
{
	int selete, num, cnt;

	cout << "How many arrays do you want to create? ";
	cin >> cnt;

	IntStack instack(cnt);

	cout << "=======================================================================" << endl;
	cout << "1 : Enter the number, 2 : Find and remove the number, 3 : Return the current count, 4 : View the current status" << endl;
	cout << "=======================================================================" << endl;

	while (true)
	{
		cout << "Click on the time you want it to be executed. >> ";
		cin >> selete;

		if (selete == 1)
		{
			cout << "Please enter the number you want to enter. >> ";
			cin >> num;

			if (instack.push(num))
				cout << "<Safely performed>" << endl;
			else
				cout << "<Action failed>" << endl;
		}
		else if (selete == 2)
		{
			cout << "Please enter a number to find and destroy. >> ";
			cin >> num;

			if (instack.pop(num))
				cout << "<Safely performed>" << endl;
			else
				cout << "<Action failed>" << endl;
		}
		else if (selete == 3)
		{
			cout << "The current number is " << instack.size() << endl;
		}
		else if (selete == 4)
		{
			instack.now();
		}
		else
		{
			cout << "<The range is 1 to 4. You've entered something wrong.>" << endl << "<Exit the program.>" << endl;
			exit(0);
		}

		cout << endl << endl;
	}
}
#include <iostream>
using namespace std;

class Statistics {
	int* arr;
	int count;
public:
	Statistics() { arr = new int[10]; count = 0; }
	bool operator!();
	Statistics& operator<< (int num);
	void operator~();
	void operator >> (int& avg);
};

bool Statistics::operator!()
{
	if (count == 0)
		return true;
	else
		return false;
}

Statistics& Statistics::operator<<(int num)
{
	arr[count] = num;
	count++;

	return *this;
}

void Statistics::operator~()
{
	for (int i = 0; i < count; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

void Statistics::operator >> (int& avg)
{
	int sum = 0;

	for (int i = 0; i < count; i++)
		sum += arr[i];

	avg = sum / count;
}

void main()
{
	Statistics stat;

	if (!stat)
		cout << "There is currently no statistical data." << endl;

	int x[5];
	cout << "Please enter five integers. >> ";

	for (int i = 0; i < 5; i++)
		cin >> x[i];

	for (int i = 0; i < 5; i++)
		stat << x[i];

	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg = " << avg << endl;
}
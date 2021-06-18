#include <iostream>
using namespace std;

class Sample {
	int *p;
	int size;
public:
	Sample(int n);
	~Sample();
	void read();
	void write();
	int big();
};

Sample::Sample(int n) {
	size = n;
	p = new int[n];
}

Sample::~Sample() {
	delete[] p;
}

void Sample::read() {
	cout << "Input : ";

	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}
}

void Sample::write() {
	cout << "Output : ";

	for (int i = 0; i < size; i++)
		cout << p[i] << " ";
}

int Sample::big() {
	int max;

	max = p[0];

	for (int i = 1; i < size; i++)
		if (max < p[i])
			max = p[i];

	return max;
}

void main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "\n\nMost Big number is " << s.big() << endl << endl;
}
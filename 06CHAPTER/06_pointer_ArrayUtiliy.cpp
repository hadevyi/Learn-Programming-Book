#include <iostream>
using namespace std;

class ArrayUtility {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility::concat(int s1[], int s2[], int size)
{
	int* temp = new int[size];
	int num = sizeof(s1);
	int cnt = 0;

	for (int i = 0; i <= num; i++)
		temp[i] = s1[i];

	for (int i = num + 1; i <= size; i++) {
		temp[i] = s2[cnt];
		cnt++;
	}

	return temp;
}

int* ArrayUtility::remove(int s1[], int s2[], int size, int& retSize)
{
	int num1 = sizeof(s1) / sizeof(int);
	int num2 = sizeof(s2) / sizeof(int);

	for (int i = 0; i <= num1; i++)
		for (int j = 0; j <= num2; j++)
			if (s1[i] == s2[j])
				s1[i] = NULL;

	for (int i = 0; i <= num1; i++)
		if (s1[i] != NULL)
			retSize++;

	int* temp = new int[retSize];
	int cnt = 0;

	for (int i = 0; i < retSize; i++)
		temp[i] = s1[i];

	if (retSize == 0) return NULL;
	else return temp;
}

void main()
{
	int x[5], y[5], size, * temp1, * temp2, retSize = 0;

	cout << "Enter 5 integers. Insert into array X. >> ";

	for (int i = 0; i < 5; i++)
		cin >> x[i];

	cout << "Enter 5 integers. Insert into array y. >> ";

	for (int i = 0; i < 5; i++)
		cin >> y[i];

	cout << "Outputs a combined array." << endl;
	size = sizeof(x) / sizeof(int) + sizeof(y) / sizeof(int);

	temp1 = ArrayUtility::concat(x, y, size);

	for (int i = 0; i < size; i++)
		cout << temp1[i] << ' ';
	cout << endl << endl;

	temp2 = ArrayUtility::remove(x, y, size, retSize);

	cout << "Outputs the result by subtracting y[] from the array x[]. in number" << retSize << endl;

	for (int i = 0; i < retSize; i++)
		cout << temp2[i] << ' ';
	cout << endl;
}
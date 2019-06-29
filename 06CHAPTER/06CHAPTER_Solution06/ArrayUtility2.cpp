#include <iostream>
#include "ArrayUtility2.h"

int* ArrayUtility2::concat(int s1[], int s2[], int size)
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

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize)
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
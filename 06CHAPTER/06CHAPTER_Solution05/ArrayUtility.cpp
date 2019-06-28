#include "ArrayUtility.h"

void ArrayUtility::intToDouble(int source[], double dest[], int size)
{
	for (int i = 0; i < size; i++)
		dest[i] = source[i];
}

void ArrayUtility::doubleToInt(double source[], int dest[], int size)
{
	for (int i = 0; i < size; i++)
		dest[i] = (int)source[i];
}
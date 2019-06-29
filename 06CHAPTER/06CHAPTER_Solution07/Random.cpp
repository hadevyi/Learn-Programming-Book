#include <ctime>
#include "Random.h"

int Random::nextInt(int min, int max)
{
	return min + rand() % (max - min + 1);
}

char Random::nextAlphabet()
{
	int num = rand();

	if (num >= 'a' && num <= 'z' || num >= 'A' && num <= 'Z')
	{
		return (char)num;
	}
	else
	{
		while (!(num >= 'a' && num <= 'z' || num >= 'A' && num <= 'Z'))
			num = rand();

		return (char)num;
	}
}

double Random::nextDouble()
{
	return rand() / (double)(RAND_MAX + 1);
}
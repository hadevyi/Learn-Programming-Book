#include <stdio.h>

int main()
{
	int inch = 25;
	double cm = inch * 2.54;

	printf("%dinch는 %.6lfcm입니다.\n", inch, cm);

	return 0;
}
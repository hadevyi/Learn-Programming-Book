#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char str[10];

	for (i = 1; i <= 999; i++)
	{
		sprintf(str, "%d", i);

		if (strchr(str, '3') == NULL && strchr(str, '6') == NULL && strchr(str, '9') == NULL && i % 3 != 0)
			printf("%3d\t", i);
		else
			printf("  P\t");

		if (i % 11 == 0)
			printf("\n");
	}
	return 0;
}
#include <stdio.h>

int main(){
	int Gigabyte, Megabyte, Killobyte;

	printf("ют╥б(Gigabyte) : ");
	scanf("%d", &Gigabyte);

	Megabyte = Gigabyte * 1024;
	Killobyte = Megabyte * 1024;

	printf(">> %dGigabyte = %dMegabyte = %dKillobyte\n", Gigabyte, Megabyte, Killobyte);

	return 0;
}
#include <stdio.h>

int main() {
	int cm;
	double kg, standard_kg;

	printf("키 : ");
	scanf("%d", &cm);

	printf("체중 : ");
	scanf("%lf", &kg);

	standard_kg = (cm - 100) * 0.9;

	printf("당신은 ");
	if (standard_kg - 5 > kg) printf("저체중입니다.\n");
	else if (standard_kg + 5 < kg) printf("과체중입니다.\n");
	else printf("표준 체중입니다.\n");

	return 0;
}
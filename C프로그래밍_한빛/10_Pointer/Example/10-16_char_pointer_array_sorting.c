#include <stdio.h>
#include <string.h>									// strcmp 함수를 위한 헤더 파일

int main() {
	char *gold[] = { "한빛", "성춘향", "이몽룡", "사공민국", "황해" };
	char *temp;										// 문자열 주소를 임시로 저장할 포인터
	int size, i, j;									// 배열에 저장된 문자열의 수

	// char형 포인터 배열 gold의 원소수를 size에 구하기
	size = sizeof(gold) / sizeof(gold[0]);

	printf("** 금메달 리스트 : ");
	for (i = 0; i < size; i++)						// 정렬 전 배열 내용 출력하기
		printf("%s, ", gold[i]);
	printf("\b\b **\n\n");							// \b를 이용하여 마지막 이름 뒤의 , 지우기

	// 교환 정렬을 이용하여 이름을 가나다순으로 정렬하기
	for(i=0;i<size-1;i++)
		for(j=i+1;j<size;j++)
			if (strcmp(gold[i], gold[j]) > 0) {
				// 문자열의 시작주소를 저장한 gold[i]와 gold[j]를 교환
				temp = gold[i];
				gold[i] = gold[j];
				gold[j] = temp;
			}

	printf("** 정렬한 리스트 : ");
	for (i = 0; i < size; i++)						// 정렬 후 배열 내용 출력하기
		printf("%s, ", gold[i]);
	printf("\b\b **\n\n");							// \b를 이용하여 마지막 이름 뒤의 , 지우기
}
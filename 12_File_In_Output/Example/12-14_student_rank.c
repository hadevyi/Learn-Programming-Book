#include <stdio.h>												// fopen, fscanf, fprintf, fclose, EOF, printf의 헤더 파일
#include <stdlib.h>												// exit 함수를 위한 헤더 파일
#define SIZE 10													// 파일에 저장된 학생의 수

struct student {												// 구조체 정의
	char name[20];												// 이름
	double GPA;													// 평점
	int rank;													// 순위
};

int main() {
	struct student s[SIZE];										// 구조체 배열 선언
	int i, u;
	FILE *fp;													// 파일 포인터 선언

	fp = fopen("students.txt", "r");							// 학생 정보를 읽을 파일 열기

	if (fp == NULL) {											// 파일 열기 에러 처리
		printf("\n파일 열기 에러!\n");
		exit(1);
	}

	// 파일에 있는 학생 정보를 읽어 구조체 배열에 저장하기
	for (i = 0; i < SIZE; i++) {
		fscanf(fp, "%s %lf", s[i].name, &s[i].GPA);
	}

	fclose(fp);													// 파일의 모든 자료를 배열에 저장했으므로 읽기용 파일을 닫기

	// 파일에서 읽은 평점을 이용하여 나 s[i]의 순위를 구하기
	for (i = 0; i < SIZE; i++) {
		s[i].rank = 1;											// 일단 나(i)의 순위를 1로 초기화
		for (u = 1; u < SIZE; u++) {
			// 나(i)의 평점이 다른 학생(u)의 평점보다 낮으면 순위를 1 증가
			if (s[i].GPA < s[u].GPA)
				s[i].rank++;
		}
	}

	// 파일에 결과 출력하기
	fp = fopen("rank.txt", "w");								// 결과를 출력할 rank.txt 파일을 쓰기용으로 열기

	if (fp == NULL) {											// 파일 열기 에러 처리
		printf("\n파일 열기 에러!\n");
		exit(1);
	}

	// SIZE명의 이름, 평점, 순위를 파일에 쓰기
	for (i = 0; i < SIZE; i++) {
		fprintf(fp, "%-8s %4.2lf %2d\n", s[i].name, s[i].GPA, s[i].rank);
		//printf("%-8s %4.2lf %2d\n", s[i].name, s[i].GPA, s[i].rank);
	}

	fclose(fp);													// 파일 닫기
	printf("파일 출력 완료!\n");

	return 0;
}
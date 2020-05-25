#include <stdio.h>													// fopen, fscanf, fprintf, fclose, EOF, printf의 헤더 파일
#include <stdlib.h>													// exit 함수를 위한 헤더 파일

int main() {
	int no, sales;
	FILE *fpr, *fpw;												// 읽기용, 쓰기용 파일 포인터 선언

	fpr = fopen("sales_report.txt", "r");							// 판매 실적 파일을 읽기용으로 열기

	if (fpr == NULL) {												// 파일 열기 에러 처리
		printf("파일 열기 에러!\n");
		exit(1);
	}

	fpw = fopen("good.txt", "w");									// 우수자 명단 파일을 쓰기용으로 열기

	if (fpw == NULL) {												// 파일 열기 에러 처리
		printf("파일 열기 에러!\n");
		exit(1);
	}

	// 출력 제목을 파일에 쓰기
	fprintf(fpw, "판매실적 우수자\n\n");
	fprintf(fpw, "-----------------------------------\n");
	fprintf(fpw, "  사원번호  판매수\n");
	fprintf(fpw, "-----------------------------------\n");

	// 파일에서 읽기를 성공했다면 판매수가 30보다 클 때만 우수자 명단 파일에 저장하기
	while (fscanf(fpr, "%d %d", &no, &sales) != EOF) {
		if (sales > 30) {
			fprintf(fpw, "    %5d %5d대 \n", no, sales);
			// printf(fpw, "    %5d %5d대 \n", no, sales);
		}
	}

	fprintf(fpw, "-----------------------------------\n");

	fclose(fpr);
	fclose(fpw);													// 파일 닫기

	printf(" 우수자 명단 파일을 저장했습니다.\n");

	return 0;
}
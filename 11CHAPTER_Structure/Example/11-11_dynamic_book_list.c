#include <stdio.h>
#include <stdlib.h>					// malloc, free, exit 함수를 위한 헤더 파일

struct book_info {
	int year;						// 출판년도
	char title[12];					// 도서명
};
typedef struct book_info BOOK;

int main() {
	BOOK *books;					// 도서 정보를 저장할 동적 배열을 가리킬 포인터
	int size, i;					// 정보를 입력받을 도서 권수

	do {							// 도서 권수 입력(1 이상의 값 입력받기)
		printf("정보를 입력할 도서 권수 : ");
		scanf("%d", &size);

		if (size <= 0)
			printf("에러 : 권수를 잘못 입력하였습니다. 다시 입력하세요.");
	} while (size <= 0);

	// 도서 권수만큼 정보를 저장할 기억장소 할당받기
	books = (BOOK*)malloc(sizeof(BOOK)*size);			// 구조체 배열의 동적 할당

	if (books == NULL) {
		puts("동적 기억장소 할당에 실패하였습니다.\n");
		exit(1);										// 프로그램 실행 중단
	}

	// size 권의 도서 정보 입력
	for (i = 0; i < size; i++) {
		printf("%d) 도서 이름 : ", i + 1);
		getchar();										// 입력용 버퍼 비우기 (비쥬얼 10 이후 fflush(stdin)을 대신한 함수)
		gets(books[i].title);

		printf("   출판년도 : ");
		scanf("%d", &(books[i]).year);
	}

	// size권의 도서 정보 출력
	printf("\n >> 도서 정보 목록 <<\n");
	printf("\n 순번 도서명 출판년도");
	printf("\n=========================\n");

	for (i = 0; i < size; i++)
		printf("%3d %-12s %4d\n", i + 1, books[i].title, books[i].year);
	printf("=========================\n");

	free(books);
	
	return 0;
}
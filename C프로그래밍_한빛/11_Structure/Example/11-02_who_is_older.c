#include <stdio.h>

// 구조체 정의
struct person {
	char name[7];		// 이름
	char gender[3];		// 성별
	int age;			// 나이
};

int main() {
	// 세 명의 사용자 정보를 구조체 변수에 저장하기
	struct person u1 = { "나태희", "여", 20 }, u2 = { "유현빈", "남", 29 }, u3 = { "나원빈", "남", 25 };
	struct person oldest;		// 최고령자의 정보를 저장할 구조체 변수

	if (u1.age > u2.age) {
		// u1과 u3 중 고령자 찾기
		if (u1.age > u3.age)
			oldest = u1;
		else
			oldest = u3;
	}
	else {
		// u2와 u3 중 고령자 찾기
		if (u2.age > u3.age)
			oldest = u2;
		else
			oldest = u3;
	}

	printf("이름  성별 나이\n");
	printf("====================================\n");
	printf("%s\t%s\t%2d\n", u1.name, u1.gender, u1.age);
	printf("%s\t%s\t%2d\n", u2.name, u2.gender, u2.age);
	printf("%s\t%s\t%2d\n", u3.name, u3.gender, u3.age);
	printf("====================================\n");
	printf("<< 최고령 사용자 >>\n");
	printf("%s\t%s\t%2d\n", oldest.name, oldest.gender, oldest.age);

	return 0;
}
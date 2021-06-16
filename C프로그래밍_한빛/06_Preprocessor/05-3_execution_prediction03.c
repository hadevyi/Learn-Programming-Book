#include <stdio.h>
#define WELCOME(a, b) printf("Welcome! " #a " and " #b "\n");

int main() {
	WELCOME(Kime, Lee);

	return 0;
}

// Hello!world
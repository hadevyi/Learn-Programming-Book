#include <stdio.h>
#define CONNECT(a, b) a ## b

int main() {
	printf(CONNECT("Hello!", "world"));

	return 0;
}

// Hello!world
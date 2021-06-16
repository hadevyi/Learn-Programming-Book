#include <stdio.h>

int main() {
	char vc = 'A', *pc;
	int vi = 123, *pi;
	double vd = 12.345, *pd;

	pc = &vc;		// pc는 vc를 가리키게 함
	pi = &vi;		// pi는 vi를 가리키게 함
	pd = &vd;		// pd는 vd를 가리키게 함

	printf("\n pc - 1 = %u, pc = %u, pc + 1 = %u", pc - 1, pc, pc + 1);
	printf("\n pi - 1 = %u, pi = %u, pi + 1 = %u", pi - 1, pi, pi + 1);
	printf("\n pd - 1 = %u, pd = %u, pd + 1 = %u", pd - 1, pd, pd + 1);
}
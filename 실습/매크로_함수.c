#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SUM(a, b) ((a) + (b))
#define MUL(a, b) ((a) * (b))

int main(void) {
	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("%d\n", SUM(a, b));
	printf("%d\n", SUM(x, y));
	res = 30 / MUL(2, 5);
	printf("%d", res);

	return 0;
}
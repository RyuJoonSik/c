#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int, int);

int main(void)
{
	int (*fp)(int, int);
	int res;

	fp = sum;
	//res = fp(10, 20);
	res = (*sum)(10, 20);
	printf("%d", res);

	return 0;
}

int sum(int a, int b)
{
	return (a + b);
}
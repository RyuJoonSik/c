#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	double b;
	char c;

	printf("int�� ������ �ּ� : %u\n", &a); // �ּ� ������ &
	printf("double�� ������ �ּ� : %u\n", &b);
	printf("char�� ������ �ּ� : %u\n", &c);

	printf("int�� ������ �ּ� : %p\n", &a);
	printf("double�� ������ �ּ� : %p\n", &b);
	printf("char�� ������ �ּ� : %p\n", &c);

	return 0;
}
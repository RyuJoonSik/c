#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int x, int y); // 함수 선언

int main(void)
{
	int a = 10, b = 20;
	int result;

	result = sum(a, b); // 함수 호출
	printf("result : %d\n", result);

	return 0;
}

int sum(int x, int y) // 함수 정의
{
	int temp;

	temp = x + y;

	return temp;
}
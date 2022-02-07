#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int* pa;

	pa = &a;
	*pa = 10; // 간접 참조 연산자(*) 혹은 포인터 연산자

	printf("포인터로 a 값 출력 : %d\n", *pa);
	printf("변수명으로 a 값 출력 : %d\n", a);

	return 0;
}
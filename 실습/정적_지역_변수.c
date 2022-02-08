#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void auto_func(void);
void static_func(void);

int main(void)
{
	int i;

	printf("일반 지역 변수 \n");

	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	for (i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
}

void auto_func(void)
{
	auto int a = 0;

	a++;
	printf("%d\n", a);
}

void static_func(void)
{
	static int a = 0;

	a++;
	printf("%d\n", a);
}
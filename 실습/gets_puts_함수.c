#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[80];

	printf("문자열 입력 : "); 
	gets(str); // 빈칸 포함 문자열 입력
	puts("입력된 문자열 : "); 
	puts(str); // 문자열 출력
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char* desert = "apple";

	printf("오늘 후식은 %s입니다.\n", desert);
	desert = "banana";
	printf("내일 후식은 %s입니다.", desert);

	return 0;
}
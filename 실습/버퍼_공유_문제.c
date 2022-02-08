#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_gets(char* ps)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		printf("%c", ch);
	}
}

int main(void)
{
	int age;
	char name[20];

	my_gets(name);

	printf("나이 입력 : ");
	scanf("%d", &age);
	scanf("%*c");

	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);

	return 0;
}
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

	printf("���� �Է� : ");
	scanf("%d", &age);
	scanf("%*c");

	printf("�̸� �Է� : ");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);

	return 0;
}
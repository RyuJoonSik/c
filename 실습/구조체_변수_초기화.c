#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	int id;
	char name[20];
	double grade;
};

int main(void)
{
	struct student s1 = { 315, "ȫ�浿", 2.4 };

	printf("%d\n", s1.id);
	printf("%s\n", s1.name);
	printf("%.1lf\n", s1.grade);

	return 0;
}
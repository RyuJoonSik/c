#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

union student {
	int num;
	double grade;
};

int main(void) {
	union student s1 = { 315 };

	printf("%d\n", s1.num);
	s1.grade = 4.4;
	printf(".1lf\n", s1.grade);
	printf("%d\n", s1.num);

	return 0;
}
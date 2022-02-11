#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "student.h"

int main(void) {
	Student a = { 315, "ȫ�浿" };
	
	printf("%d %s", a.num, a.name);

	return 0;
}
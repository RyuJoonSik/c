#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int* pa;

	pa = &a;
	*pa = 10; // ���� ���� ������(*) Ȥ�� ������ ������

	printf("�����ͷ� a �� ��� : %d\n", *pa);
	printf("���������� a �� ��� : %d\n", a);

	return 0;
}
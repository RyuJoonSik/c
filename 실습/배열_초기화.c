#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ary1[5] = { 1, 2, 3, 4, 5 }; // ù ��° ��Һ��� ���ʷ� �ʱ�ȭ
	int ary2[5] = { 1, 2, 3 }; // ���ʺ��� ���ʷ� �ʱ�ȭ, �������� 0���� ä��
	int ary3[1000] = { 0 }; // ��� ��� 0���� �ʱ�ȭ
	int ary4[] = { 1, 2, 3 }; // �迭 ��� ���� ���� ����(�ʱ갪 ������ŭ ��� ���� ����)
	double ary5[5] = { 1.0, 2.1, 3.2, 4.3, 5.4 }; // double�� �迭
	char ary6[5] = { 'a', 'p', 'p', 'l', 'e' }; // char�� �迭

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ary1[5] = { 1, 2, 3, 4, 5 }; // 첫 번째 요소부터 차례로 초기화
	int ary2[5] = { 1, 2, 3 }; // 왼쪽부터 차례로 초기화, 나머지는 0으로 채움
	int ary3[1000] = { 0 }; // 모든 요소 0으로 초기화
	int ary4[] = { 1, 2, 3 }; // 배열 요소 개수 생략 가능(초깃값 개수만큼 요소 개수 결정)
	double ary5[5] = { 1.0, 2.1, 3.2, 4.3, 5.4 }; // double형 배열
	char ary6[5] = { 'a', 'p', 'p', 'l', 'e' }; // char형 배열

	return 0;
}
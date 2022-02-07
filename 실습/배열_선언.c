#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ary[5]; // 자료형 + 배열명 + 요소개수

	ary[0] = 10; // 첫 번째 배열요소에 값 대입. 배열명[첨자(index)]
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]); // 쓰레기 값이 들어가 있다.
	return 0;
}
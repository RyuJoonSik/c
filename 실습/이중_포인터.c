#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;
	
	return 0;
}
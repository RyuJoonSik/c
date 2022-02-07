#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch1, ch2;
	int i;

	//for (i = 0; i < 3; i++)
	//{
	//	scanf("%c", &ch1);
	//	printf("%c", ch1);
	//}

	while (1)
	{
		scanf("%c", &ch2);

		if (ch2 == '\n')
		{
			break;
		}

		printf("%c", ch2);
	}

	return 0;
}
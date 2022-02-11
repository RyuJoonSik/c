#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("허용 범위를 초과\n");

int main(void) {
	double radius, area;

	printf("반지름 입력 : ");
	scanf("%lf", &radius);

	area = PI * radius * radius;
	if (area > LIMIT) {
		ERR_PRN;
	}
	else {
		printf("%.2lf (%s)", area, MSG);
	}

	return 0;
}
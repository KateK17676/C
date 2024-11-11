#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	setlocale(0, "RU");
	double x1, x2, y1, y2;
	printf("¬ведите через пробел координаты 1-ой точки: ");
	scanf("%lf %lf", &x1, &y1);
	printf("¬ведите через пробел координаты 2-ой точки: ");
	scanf("%lf %lf", &x2, &y2);

	double s = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf(s);

	return 0;
}
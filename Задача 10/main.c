#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	setlocale(0, "RU");
	double x1, y1, x2, y2, x3, y3;

	printf("¬ведите через пробел координаты 1-ой точки: ");
	scanf("%lf lf", &x1, &y1);
	printf("¬ведите через пробел координаты 2-ой точки: ");
	scanf("%lf lf", &x2, &y2);
	printf("¬ведите через пробел координаты 3-ей точки: ");
	scanf("%lf lf", &x3, &y3);

	double p, p1;
	p1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) + sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2)) +
		sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	p = p1 / 2;
	double s;
	s = sqrt(p * (p - sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))) * (p - sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2))) *
		(p - sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2))));
	printf("ѕериметр: %lf \n", &p1);
	printf("ѕлощадь: %lf", &s);




	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main(void)
{
	setlocale(0, "RU");
	int a, b, c;
	int mini, mid, maxi;

	printf("Введите 1-ую сторону треугольника: ");
	scanf("%d", &a);
	printf("Введите 2-ую сторону треугольника: ");
	scanf("%d", &b);
	printf("Введите 3-ю сторону треугольника: ");
	scanf("%d", &c);

	maxi = a > b ? a : b;
	maxi = c > maxi ? c : maxi;
	mini = a < b ? a : b;
	mini = c < mini ? c : mini;
	mid = a + b + c - mini - maxi;

	if (maxi >= mini + mid)
	{
		printf("Не существует");
	}
	else {
		if (mini == maxi)
			printf("Равносторонний");
		else {
			if (mini == mid || mid == maxi) {
				if (maxi * maxi == mini * mini + mid * mid)
					printf("Равнобедренный прямоугольный");
				if (maxi * maxi < mini * mini + mid * mid)
					printf("Равнобедренный остроугольный");
				if (maxi * maxi > mini * mini + mid * mid)
					printf("Равнобедренный тупоугольный");
			}
			else {
				if (maxi * maxi == mini * mini + mid * mid)
					printf("Прямоугольный");
				if (maxi * maxi < mini * mini + mid * mid)
					printf("Остроугольный");
				if (maxi * maxi > mini * mini + mid * mid)
					printf("Тупоугольный");
			}
		}
	}

	return 0;
}
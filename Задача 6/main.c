#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main(void)
{
	setlocale(0, "RU");
	int a, b, c;
	int mini, mid, maxi;

	printf("������� 1-�� ������� ������������: ");
	scanf("%d", &a);
	printf("������� 2-�� ������� ������������: ");
	scanf("%d", &b);
	printf("������� 3-� ������� ������������: ");
	scanf("%d", &c);

	maxi = a > b ? a : b;
	maxi = c > maxi ? c : maxi;
	mini = a < b ? a : b;
	mini = c < mini ? c : mini;
	mid = a + b + c - mini - maxi;

	if (maxi >= mini + mid)
	{
		printf("�� ����������");
	}
	else {
		if (mini == maxi)
			printf("��������������");
		else {
			if (mini == mid || mid == maxi) {
				if (maxi * maxi == mini * mini + mid * mid)
					printf("�������������� �������������");
				if (maxi * maxi < mini * mini + mid * mid)
					printf("�������������� �������������");
				if (maxi * maxi > mini * mini + mid * mid)
					printf("�������������� ������������");
			}
			else {
				if (maxi * maxi == mini * mini + mid * mid)
					printf("�������������");
				if (maxi * maxi < mini * mini + mid * mid)
					printf("�������������");
				if (maxi * maxi > mini * mini + mid * mid)
					printf("������������");
			}
		}
	}

	return 0;
}
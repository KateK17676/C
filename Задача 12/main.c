#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	setlocale(0, "RU");
	int a, k, d;
	scanf("%d", &a);

	k = a % 10;
	d = (a % 100) / 10;
	if (d != 1) {
		if (k == 1)
			printf("����");
		if ((k > 1) && (k < 5))
			printf("�����");
		if ((k == 0) || (k >= 5))
			printf("������");
	}
	else
		printf("������");

	return 0;
}
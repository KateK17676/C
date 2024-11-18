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
			printf("гриб");
		if ((k > 1) && (k < 5))
			printf("гриба");
		if ((k == 0) || (k >= 5))
			printf("грибов");
	}
	else
		printf("грибов");

	return 0;
}
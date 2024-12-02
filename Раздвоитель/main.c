#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	while (a > b) {
		if ((a >= b * 2) && (a % 2 == 0)) {
			printf(":2 \n");
			a /= 2;
		}
		else {
			printf("-1 \n");
			a -= 1;
		}
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			printf("%d ", j);
		printf("\n");
	}

	return 0;
}
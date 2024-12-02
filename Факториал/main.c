#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int i, f = 1;
	for (i = 1; i <= n; i++)
		f *= i;
	printf("%d", f);


	return 0;
}
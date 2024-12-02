#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	float start_sum, target_sum, percent;
	int n;
	scanf("%f", &start_sum);
	scanf("%f", &percent);
	scanf("%f", &target_sum);
	n = 0;
	float f = percent / 1200;

	while (start_sum <= target_sum) {
		n++;
		start_sum += start_sum * f;
		printf("%d - %.2f \n", n, start_sum);
	}

	return 0;
}
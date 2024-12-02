#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, maxi, n;

	scanf("%d", &maxi);
	if (maxi != 0) {
		n = 1;
		scanf("%d", &a);
		while (a != 0) {
			if (a == maxi)
				n++;
			if (a > maxi) {
				maxi = a;
				n = 1;
			}
			scanf("%d", &a);
		}
		printf("%d", n);
	}
}
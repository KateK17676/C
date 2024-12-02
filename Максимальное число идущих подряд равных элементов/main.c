#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, maxi, n, b;

	scanf("%d", &a);
	if (a != 0) {
		n = 1;
		maxi = 1;
		b = a;
		scanf("%d", &a);
		while (a != 0) {
			if (a == b) {
				n++;
				if (maxi < n)
					maxi = n;
			}
			else
				n = 1;
			b = a;
			scanf("%d", &a);
		}
		printf("%d", maxi);
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, maxi;
	
	scanf("%d", &a);
	maxi = a;
	while (a != 0) {
		if (a > maxi)
			maxi = a;
		scanf("%d", &a);
	}
	printf("%d", maxi);

}
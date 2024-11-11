#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int x1, y1, x2, y2;
	printf("Enter the coordinates of the first cell: ");
	scanf("%d", &x1);
	scanf("%d", &y1);
	printf("Enter the coordinates of the second cell: ");
	scanf("%d", &x2);
	scanf("%d", &y2);

	if (((fabs(x1 - x2) == 2) && (fabs(y1 - y2) == 1)) || ((fabs(x1 - x2) == 1) && (fabs(y1 - y2) == 2)))
		printf("YES");
	else
		printf("NO");


	return 0;
}
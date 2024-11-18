#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int x1, y1, x2, y2;
	scanf("%d", &x1);
	scanf("%d", &y1);
	scanf("%d", &x2);
	scanf("%d", &y2);

	int ch_x = abs(x1 - x2);
	int ch_y = abs(y1 - y2);

	if (((ch_x == 1) && (ch_y <= 1)) || ((ch_y == 1) && (ch_x == 0)))
		printf("YES");
	else
		printf("NO");

	return 0;
}
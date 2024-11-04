#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sec, hours, min, s;

	printf("Enter the number of seconds: ");
	scanf("%d", &sec);
	hours = sec / 3600;
	min = (sec - hours * 3600) / 60;
	s = sec % 60;
	printf("%d:%d:%d", hours, min, s);

	return 0;
}
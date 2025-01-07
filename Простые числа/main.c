#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int PrimeNumberTest(int a) {
	int i, k = 0;
	for (i = 2; i < a; i++)
		if (a % i == 0)
			k++;
	if (k == 0)
		return 1;
	else
		return 0;
}

void PrintCorrectNumbers(int end) {
	int begin = 0;
	int a = 2;
	while (begin < end) {
		if (PrimeNumberTest(a) == 1) {
			printf("%d ", a);
			begin++;
		}
		a++;
	}
}
int main(int argc, char* argv[])
{
	int e;
	scanf("%d", &e);
	PrintCorrectNumbers(e);

	return 0;
}

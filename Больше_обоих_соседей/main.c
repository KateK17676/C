#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int n;
	int i;
	int k = 0;
	scanf("%d", &n);

	int* arr = malloc(sizeof(int)*n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 1; i < n - 1; i++) {
		if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1]))
			k++;
	}
	printf("%d", k);

	return 0;
}
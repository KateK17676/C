#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int n;
	int i;
	scanf("%d", &n);

	int* arr = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	int a = arr[n - 1];
	for (i = n - 1; i > 0; i--)
		arr[i] = arr[i - 1];
	arr[0] = a;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}
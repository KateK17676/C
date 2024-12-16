#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int n, k;
	int i;
	scanf("%d", &n);

	int* arr = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &k);
	for (i = k - 1; i < n - 1; i++)
		arr[i] = arr[i + 1];
	arr = realloc(arr, (n - 1) * sizeof(int));
	printf("\n");
	for (i = 0; i < n - 1; i++)
		printf("%d ", arr[i]);

	free(arr);

	return 0;
}
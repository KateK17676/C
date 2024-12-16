#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int args, char* argv[])
{
	int n, k, c;
	int i;
	scanf("%d", &n);

	int* arr = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &k);
	k--;
	scanf("%d", &c);
	n++;
	arr = realloc(arr, sizeof(int) * n);
	for (i = n - 1; i > k; i--)
		arr[i] = arr[i - 1];
	arr[k] = c;

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	free(arr);

	return 0;
}
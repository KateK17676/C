#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int n;
	int i;
	int k_min, k_max;
	scanf("%d", &n);

	int* arr = malloc(sizeof(int) * n);
	k_min = 0;
	k_max = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < arr[k_min])
			k_min = i;
		if (arr[i] > arr[k_max])
			k_max = i;
	}

	int mini = arr[k_min];
	arr[k_min] = arr[k_max];
	arr[k_max] = mini;

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}
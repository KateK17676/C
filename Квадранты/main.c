#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int** CreateMatrix(int n) {
	int** matrix = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++)
		matrix[i] = (int*)calloc(n, sizeof(int));

	return matrix;
}

void PrintMatrix(int** matrix, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%3d", matrix[i][j]);
		printf("\n");
	}
	printf("\n");
}


int** Dioganals2(int** matrix, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if ((i == j) || (i == n - j - 1))
				matrix[i][j] == 0;
			if ((i < j) && (j < n - i - 1))
				matrix[i][j] = 1;
			if ((i < j) && (j > n - i - 1))
				matrix[i][j] = 2;
			if ((i > j) && (i > n - j - 1))
				matrix[i][j] = 3;
			if ((i > j) && (i < n - j - 1))
				matrix[i][j] = 4;
		}
	
	return matrix;
}


int main(int argc, char* argv[])
{
	int n;
	scanf("%d", &n);
	int** matrix = CreateMatrix(n);
	matrix = Dioganals2(matrix, n);
	PrintMatrix(matrix, n);

	return 0;
}
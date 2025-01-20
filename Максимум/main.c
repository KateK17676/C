#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int** CreateMatrix(int row, int col) {
	int** matrix = (int**)malloc(sizeof(int*) * row);
	for (int i = 0; i < row; i++)
		matrix[i] = (int*)calloc(col, sizeof(int));

	return matrix;
}

int** ReadMatrix(int** matrix, int row, int col) {
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			scanf("%d", &matrix[i][j]);

	return matrix;
}


void Max(int** matrix, int row, int col, int* row_m, int* col_m)
{
	*row_m = 0;
	*col_m = 0;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (matrix[*row_m][*col_m] < matrix[i][j]) {
				*row_m = i;
				*col_m = j;
			}
	//printf("%d %d", row_m, col_m);

	//return 0;
}

//Возвращать результат через параметры функции Max

int main(int argc, char* argv[])
{
	int row, col;
	int row_m, col_m;
	scanf("%d %d", &row, &col);
	int** matrix = CreateMatrix(row, col);
	matrix = ReadMatrix(matrix, row, col);
	Max(matrix, row, col, &row_m, &col_m);
	printf("%d %d", row_m, col_m);

	return 0;
}
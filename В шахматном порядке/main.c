#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int** CreateMatrix(int s, int n)
{
    int** matrix = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < s; i++)
        matrix[i] = (int*)calloc(n, sizeof(int));

    return matrix;
}

int** FillMatrix(int** matrix, int s, int n)
{
    for (int i = 0; i < s; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = (i + j) % 2;

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

int main(int argc, char* argv[])
{
    int s, n;
    scanf("%d %d", &s, &n);
    int** matrix = CreateMatrix(s, n);
    matrix = FillMatrix(matrix, s, n);
    PrintMatrix(matrix, n);

    return 0;
}

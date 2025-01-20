#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int** CreateMatrix(int n)
{
    int** matrix = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++)
        matrix[i] = (int*)calloc(n, sizeof(int));

    return matrix;
}

int** ReadMatrix(int** matrix, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

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

int** Turn(int** matrix, int n)
{
    int a;

    for (int i = 0; i < n / 2; i++)
        for (int j = i; j < n; j++)
        {
            a = matrix[i][j];
            matrix[i][j] = matrix[n - 1 - j][n - 1 - i];
            matrix[n - 1 - j][n - 1 - i] = matrix[]
            matrix[
                matrix[j][i] = a;
        }
    return matrix;
}


int main(int argc, char* argv[])
{
    int n;
    scanf("%d", &n);
    int** matrix = CreateMatrix(n);
    matrix = ReadMatrix(matrix, n);
    matrix = Turn(matrix, n);
    PrintMatrix(matrix, n);

    return 0;
}

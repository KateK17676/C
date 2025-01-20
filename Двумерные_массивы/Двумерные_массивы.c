#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Передача массива внутрь функции
void PrintMatrix(int** matrix, int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            printf("%3d", matrix[i][j]);
        printf("\n");
    }
    printf("\n");
}

int** CreateMatrix(int row, int col)
{
    int** matrix = (int**)malloc(sizeof(int*) * row);
    for (int i = 0; i < row; ++i)
        matrix[i] = (int*)calloc(col, sizeof(int));
    return matrix;
}

void RandomizeMatrix(int** matrix, int row, int col)
{
    // Запускает генератор чисел. Без этой функции последовательность случайных чисел всегда будет одинаковой.
    srand(time(0));
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            matrix[i][j] = rand() % 100;
}

void CreateMatrix2(int*** matrix, int row, int col)
{
    *matrix = (int**)malloc(sizeof(int*) * row);
    for (int i = 0; i < row; ++i)
        (*matrix)[i] = (int*)calloc(col, sizeof(int));
}

void GetMax(int** matrix, int row, int col, int* maxI, int* maxJ)
{
    *maxI = *maxJ = 0;
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            if (matrix[i][j] > matrix[*maxI][*maxJ])
            {
                *maxI = i;
                *maxJ = j;
            }
}

int main(int argc, char* argv[])
{
    int row = 5, col = 6;
    int maxi, maxj;
    // int** matrix = CreateMatrix(row, col);
    int** matrix;
    CreateMatrix2(&matrix, row, col);
    RandomizeMatrix(matrix, row, col);
    PrintMatrix(matrix, row, col);
    GetMax(matrix, row, col, &maxi, &maxj);
    printf("Max pos: %d %d", maxi, maxj);
    return 0;
}

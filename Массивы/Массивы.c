#include <stdio.h>
#include <stdlib.h>
#define N 5
int main(int argc, char* argv[])
{
    int arr[N];
    int arr1[N] = {12, 45, 11, 22, 12};

    int size = 10;
    int* arr3 = calloc(size, sizeof(int));

    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr3[i]);
    }

    // Например, необходимо увеличить размер массива на один элемент
    size++;
    arr3 = realloc(arr3, size * sizeof(int));
    arr3[size - 1] = 0;

    printf("\n");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr3[i]);
    }

    free(arr3);

    return 0;
}

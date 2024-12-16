#include <stdio.h>

// Функция, выводящая последовательность чисел от begin до end.
void PrintSequence(int begin, int end) {
    for (int i = begin; i <= end; i++)
        printf("%d ", i);
    printf("\n");
}

// Функция, суммирующая последовательность чисел от begin до end.
int SumSequence(int begin, int end) {
    int sum = 0;
    for (int i = begin; i <= end; i++)
        sum += i;
    return sum;
}

int main(int argc, char* argv[])
{
    int a = 5, b = 20;
    PrintSequence(a, b);
    printf("Sum = %d", SumSequence(a, b));
    return 0;
}

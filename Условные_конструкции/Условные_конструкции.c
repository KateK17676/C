#include <stdio.h>
#include <locale.h>

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Russian");

    int a = 45, b = 78;
    int max;

    if (a > b)
        max = a;
    else
        max = b;

    max = a > b ? a : b;

    return 0;
}

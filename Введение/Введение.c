#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    setlocale(0, "RU");
    // Даны стороны прямоугольника width и height. Необходимо найти его площадь и периметр.
    float width, height;
    scanf("%f", &width);
    scanf("%f", &height);

    printf("Площадь: %f\n", width * height);
    printf("Периметр: %f", 2 * (width + height));
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    setlocale(0, "RU");
    // ���� ������� �������������� width � height. ���������� ����� ��� ������� � ��������.
    float width, height;
    scanf("%f", &width);
    scanf("%f", &height);

    printf("�������: %f\n", width * height);
    printf("��������: %f", 2 * (width + height));
    return 0;
}

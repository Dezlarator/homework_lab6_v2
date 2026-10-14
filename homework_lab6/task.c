#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    float x, y;
    printf("Введите x: ");
    scanf("%f", &x);
    printf("Введите y: ");
    scanf("%f", &y);

    if ((x >= -4 && x <= -1 && y >= -3 && y <= 3) ||
        (x >= -1 && x <= 0 && y >= 1 && y <= 3)) {
        printf("Точка принадлежит области\n");
    }
    else {
        printf("Точка не принадлежит области\n");
    }

    return 0;
}
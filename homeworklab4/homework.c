#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    double x;
    double y = 0.869e-2;
    double z = -0.13e3;
    double h;

    setlocale(LC_ALL, "RUS");

    puts("ДОМАШНЕЕ ЗАДАНИЕ");
    puts("Вариант 15");
    puts("");

    printf("Введите x:\n");
    scanf("%lf", &x);

    h = (pow(x, y + 1) + exp(y - 1)) /
        (1 + x * fabs(y - tan(z))) *
        (1 + fabs(y - x))
        + pow(fabs(y - x), 2) / 2
        - pow(fabs(y - x), 3) / 3;

    printf("x = %.3f\n", x);
    printf("y = %.5f\n", y);
    printf("z = %.0f\n", z);
    printf("h = %.5f\n", h);

    return 0;
}
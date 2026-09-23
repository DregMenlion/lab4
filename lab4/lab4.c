#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#define M_PI 3.14159265358979323846
#define k -4

#include <stdio.h>
#include <locale.h>
#include <math.h>

double a;
double b;
double y;

void task1()
{
    double gr;
    double rad;
    double result;

    puts("ЗАДАНИЕ 1");
    puts("");

    printf("Введите количество градусов:\n");
    scanf("%lf", &gr);

    rad = gr * M_PI / 180;
    result = sin(rad);

    printf("Исходное количество градусов: %.0f\n", gr);
    printf("В радианах: %.6f\n", rad);
    printf("Синус угла: %.6f\n", result);

    puts("");
}

void task2()
{
    double x;

    puts("ЗАДАНИЕ 2");
    puts("");

    printf("Введите x:\n");
    scanf("%lf", &x);

    a = log(fabs(-k * x));

    b = exp(2 * x) + a * x;

    y = x * pow(a, 3) + pow(b, 2);

    printf("x = %.3f\n", x);
    printf("a = %.3f\n", a);
    printf("b = %.3f\n", b);
    printf("y = %.1f\n", y);

    puts("");
}

void task3()
{
    int A;
    int B;
    int C;

    int result1;
    int result2;

    puts("ЗАДАНИЕ 3");
    puts("");

    A = (int)a;
    B = (int)b;
    C = (int)y;

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    result1 = (A % 2 == 0) != (B % 2 == 0);

    printf("а) Только одно из чисел A и B четное\n");
    printf("Условие выполнено (1 - да, 0 - нет): %d\n", result1);

    result2 = (A % 3 == 0) &&
        (B % 3 == 0) &&
        (C % 3 == 0);

    printf("б) A, B и C кратны трем\n");
    printf("Условие выполнено (1 - да, 0 - нет): %d\n", result2);

    puts("");
}

int main()
{
    setlocale(LC_ALL, "RUS");

    task1();
    task2();
    task3();

    return 0;
}
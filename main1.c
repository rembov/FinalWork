﻿// Лабораторная работа 1
// Вариант 3
// Выполнили студенты группы 23ВВВ3
// Кучин А.В. Голенков Д.С. Алексеев И.О.
#include <math.h>
#include <stdio.h>
int main()
{
    double xl; // Переменная Х в уравнении
    double y;// Ответ в уравнении
    float s1;// Числитель
    float s2;// Знаменатель
    printf("Add x: ");
    scanf_s("%lf", &xl);
    s1 = log(xl) + ((2 + xl) / pow(xl, 2));
    s2 = tan(xl) - (1 / sqrt(pow(xl, 2) + 10));
    y = s1 / s2;
    printf("%lf", y);
    getchar();
    return 0;
}

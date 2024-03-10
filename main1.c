// Лабораторная работа 1
// Вариант 3
// Выполнили студенты группы 23ВВВ3
// Кучин А.В. Голенков Д.С. Алексеев И.О.
#include <math.h>
#include <stdio.h>
int main()
{
    double x, y;
    float s1, s2;
    printf("Add x: ");
    scanf_s("%lf", &x);
    s1 = log(x) + ((2 + x) / pow(x, 2));
    s2 = tan(x) - (1 / sqrt(pow(x, 2) + 10));
    y = s1 / s2;
    printf("%lf", y);
    getchar();
    return 0;
}

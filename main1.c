// Лабораторная работа 1
// Вариант 3
// Выполнили студенты группы 23ВВВ3
// Кучин А.В. Голенков Д.С. Алексеев И.О.
#include <math.h>
#include <stdio.h>
int main()
{
    double xl, y;
    float s1, s2;
    if (xl < 0.0) {
	    printf("WARN! %.2f is negative!", xl);
    }
    printf("Add x: ");
    scanf_s("%lf", &xl);
    s1 = log(xl) + ((2 + xl) / pow(xl, 2));
    s2 = tan(xl) - (1 / sqrt(pow(xl, 2) + 10));
    y = s1 / s2;
    printf("%lf", y);
    getchar();
    return 0;
}

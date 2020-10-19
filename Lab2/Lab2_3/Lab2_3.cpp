#include <stdio.h>                                 
#include <math.h>     
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int x, i = 0, k, y;
    double t;
    printf_s("Введите x: ");
    scanf_s("%i", &x);
    printf_s("Введите y: ");
    scanf_s("%i", &y);
    printf_s("Введите k: ");
    scanf_s("%i", &k);

    while (pow(x, i) + y < k*k) {
        i++;
        y++;
    }
    t = pow(x, i) + y;
    printf_s("t = %lf", t);
    return 0;
}

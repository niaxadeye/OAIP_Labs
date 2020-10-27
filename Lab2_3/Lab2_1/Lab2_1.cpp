#include <stdio.h>                                 
#include <math.h>     
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, c, z;
    printf_s("Введите a: ");
    scanf_s("%i", &a);
    printf_s("Введите b: ");
    scanf_s("%i", &b);
    printf_s("Введите c: ");
    scanf_s("%i", &c);
    z = a * b - c;
    z = z * z;
    printf_s("z = %d", z);
    return 0;
}
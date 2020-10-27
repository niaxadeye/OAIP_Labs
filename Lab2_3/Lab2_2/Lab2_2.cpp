#include <stdio.h>                                 
#include <math.h>     
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
	int x, y, w;
    double r , c;
    printf_s("Введите x: ");
    scanf_s("%i", &x);
    printf_s("Введите y: ");
    scanf_s("%i", &y);
    printf_s("Введите w: ");
    scanf_s("%i", &w);
    
    c = (x - y) * (x + y);
    if (c == 0) {
        printf_s("Результат не определён");
        return 0;
    }
    else {
        r = (w * w - y) / c + y;
    }
    printf_s("r = %lf", r);
    return 0;
}
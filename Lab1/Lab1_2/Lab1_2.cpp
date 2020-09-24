#include <stdio.h>                                 
#include <math.h>     
#include <locale.h>   
float alg(double x, double y, double  z, double t) {
    double ans;
    ans = ((x + pow((y + 1), 3))) / ((z - 4)*(pow(t,2) - 4));
    return (ans);

}
int main() {
    setlocale(LC_ALL, "Rus");
    double ans, x, y, z, t;
    printf_s("Выражение ((x + (y + 1)^3)) / ((z - 11)*(t^2 - 4)) : \n");
    printf_s("Введите переменную x: ");
    scanf_s("%lf", &x);
    printf_s("Введите переменную y: ");
    scanf_s("%lf", &y);
    printf_s("Введите переменную z: ");
    scanf_s("%lf", &z);
    printf_s("Введите переменную t: ");
    scanf_s("%lf", &t);
    if (z == 11 || t == -2 || t == 2) {
        if (z == 11) {
            printf_s("z не может равняться 4, т.к. деление на 0 недопустимо \n");
        }
        if (t == -2) {
            printf_s("t не может равняться -2, т.к. деление на 0 недопустимо \n");
        }
        if (t == 2) {
            printf_s("z не может равняться 2, т.к. деление на 0 недопустимо \n");
        }
        return 0;
    }
    ans = alg(x, y, z, t);
    printf("%lf", ans);
    return 0;
}
#include <stdio.h>                                 
#include <math.h>     
#include <locale.h>   
float alg(double x, double y, double  z) {
    double ans;
    ans = (pow(3, x) - pow((y-2),2)) / (z + 3);
    return (ans);

}
int main() {
    setlocale(LC_ALL, "Rus");
    double ans, x , y, z;
    printf_s("Выражение (3^x - (y-2)^2) / (z + 3): \n");
    printf_s("Введите переменную x: ");
    scanf_s("%lf", &x);
    printf_s("Введите переменную y: ");
    scanf_s("%lf", &y);
    printf_s("Введите переменную z: ");
    scanf_s("%lf", &z);
    if (z == -3) {
        printf_s("z не может равняться -3, т.к. деление на 0 недопустимо");
        return 0;
    }
    ans = alg(x, y, z);
    printf("%lf", ans);
    return 0;
}
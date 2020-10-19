#include <stdio.h>                                 
#include <math.h>     
#include <locale.h>   
double alg(int x, int y, int  z, int t){ 
    double ans;
    ans = ((x + pow((y + 1), 3))) / (double)((z - 4)*(pow(t,2) - 4));
    return (ans); 

}
int main() {
    setlocale(LC_ALL, "Rus"); 
    int x, y, z, t; 
    double ans; 
    printf_s("Выражение ((x + (y + 1)^3)) / ((z - 4)*(t^2 - 4)) : \n"); 
    printf_s("Введите переменную x: ");
    scanf_s("%d", &x);  
    printf_s("Введите переменную y: ");
    scanf_s("%d", &y); 
    printf_s("Введите переменную z: ");
    scanf_s("%d", &z); 
    printf_s("Введите переменную t: ");
    scanf_s("%d", &t); 
    if (z == 11 &&( t == -2 || t == 2)) { 
        printf_s("z не может равняться 4, т.к. деление на 0 недопустимо \n");
        if (t == -2) {
            printf_s("t не может равняться -2 , т.к. деление на 0 недопустимо \n");
        }
        else {
            printf_s("t не может равняться 2 , т.к. деление на 0 недопустимо \n");
        }
        return 0;
    }
    if (z == 11) {
        printf_s("z не может равняться 4, т.к. деление на 0 недопустимо \n");
        return 0;
    }
    if (t == -2 || t == 2) {
        if (t == -2) {
            printf_s("t не может равняться -2 , т.к. деление на 0 недопустимо \n");
        }
        else {
            printf_s("t не может равняться 2 , т.к. деление на 0 недопустимо \n");
        }
    }
    ans = alg(x, y, z, t);  // Вызывем функцию alg, которая возвращает значение исходного выражения, при введённых переменных 
    printf("%lf", ans);
    return 0;
}
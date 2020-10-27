#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Rus");
    int i, j, temp, n = 10;

    int arr[10] = { 3, 75, 17, 55, 41, 84, 96, 92, 99, 87 };

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n  - 1 - i; j++) {
            if (arr[j + 1] < arr[j]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf_s("Сортировка с помощью циклов for: ");
    for (i = 0; i < n ; i++) {
    printf_s("%i ", arr[i]);
    }
    int arr_2[10] = { 11, 47, 75, 38, 15, 42, 79, 8, 10, 95 };
    i = 0;
    j = 0;
    while (i < n - 1) {
        j = 0;
        while (j < n - 1 - i ) {
            if (arr_2[j + 1] < arr_2[j]) {
                temp = arr_2[j + 1];
                arr_2[j + 1] = arr_2[j];
                arr_2[j] = temp;
            }
            j++;
        }
        i++;
    }
    printf_s("\nСортировка с помощью циклов while: ");
    for (i = 0; i < n; i++) {
    printf_s("%i ",arr_2[i]);
    }
    return 0;
}

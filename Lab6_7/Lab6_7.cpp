#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
    int i, temp, arr[] = { 1, 68, 49, 16, 92, 62, 73, 3, 36, 98 };
    int n = sizeof(arr) / sizeof(int);
    float k = 1.247;
    int step = n - 1;
    while (step >= 1) {
        i = 0;
        while (i < n - step) {
            if (arr[i] > arr[i + step]) {
                temp = arr[i];
                arr[i] = arr[i + step];
                arr[i + step] = temp;
            }
            i++;
        }
        step /= k;
    }

    for (step = n - 1; step >= 1; step /= k) {
        for (i = 0; i < n - step; i++) {
            if (arr[i] > arr[i + step]) {
                temp = arr[i];
                arr[i] = arr[i + step];
                arr[i + step] = temp;
            }
        }
    }
    return 0;
}

#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <locale.h>

void sort_for(int* array, int n) {
	float k = 1.247;
	int i, temp, step;
	for (step = n - 1; step >= 1; step /= k) {
		for (i = 0; i < n - step; i++) {
			if (array[i] > array[i + step]) {
				temp = array[i];
				array[i] = array[i + step];
				array[i + step] = temp;
			}
		}
	}
}
void sort_while(int* array, int n) {
	float k = 1.247;
	int i,temp,  step = n - 1;
	while (step >= 1) {
		i = 0;
		while (i < n - step) {
			if (array[i] > array[i + step]) {
				temp = array[i];
				array[i] = array[i + step];
				array[i + step] = temp;
			}
			i++;
		}
		step /= k;
	}
}

int main() {
	
	setlocale(LC_ALL, "Ru");
	printf_s("Сортировка \"Расчёчска\"\n \n");
	int i = 0;
	int arr[] = { 28, 65, 43, 63, 53, 52, 33, 95, 17, 6 };
	int size = sizeof(arr) / sizeof(int);

	printf_s("Исходный массив №1: ");
	for (i = 0; i < size; i++) {
		printf_s("%i ", arr[i]);
	}

	sort_for(arr, size);

	printf_s("\nОсторированный массив №1: ");
	for (i = 0; i < size; i++) {
		printf_s("%i ", arr[i]);
	}


	int arr2[] = { 83, 23, 94, 77, 80, 12, 21, 30, 68, 85 };
	size = sizeof(arr2) / sizeof(int);

	printf_s("\n \nИсходный массив №2: ");
	for (i = 0; i < size; i++) {
		printf_s("%i ", arr2[i]);
	}

	sort_while(arr2, size);

	printf_s("\nОсторированный массив №2: ");
	for (i = 0; i < size; i++) {
		printf_s("%i ", arr2[i]);
	}

	return 0;
}

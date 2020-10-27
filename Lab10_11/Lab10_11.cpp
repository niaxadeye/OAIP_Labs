#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <locale.h>

void sort_for(int* array, int n) {
	int d = n / 2, i, x, j;
	for (d; d > 0; d /= 2) {
		for (i = d; i < n; i++) {
			x = array[i];
			for (j = i; j >= d;) {
				if (x < array[j - d]) {
					array[j] = array[j - d];
					j = j - d;
				}
				else break;
			}
			array[j] = x;
		}
	}
}
void sort_while(int* array, int n) {
	int d = n / 2, i, x, j;
	while (d > 0) {
		i = d;
		while (i < n) {
			x = array[i];
			j = i;
			while (j >= d) {
				if (x < array[j - d]) {
					array[j] = array[j - d];
					j = j - d;
				}
				else break;
			}
			array[j] = x;
			i++;
		}
		d = d / 2;
	}
}

int main() {
	
	setlocale(LC_ALL, "Ru");
	printf_s("Сортировка \"Шелла\"\n \n");
	int i = 0;
	int arr[] = { 43, 31, 48, 69, 71, 87, 83, 19, 63, 6 };
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


	int arr2[] = { 53, 78, 16, 61, 77, 76, 83, 1, 72, 18 };
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
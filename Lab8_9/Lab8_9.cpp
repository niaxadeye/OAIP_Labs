#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <locale.h>

void sort_for(int* array, int n) {
	int x, i, j;
	for (i = 1; i < n; i++) {
		for (j = i, x = array[i]; (j > 0) && (array[j - 1] > x); j--) {
			array[j] = array[j - 1];
		}
		array[j] = x;
	}
}
void sort_while(int* array, int n) {
	int x, i = 1, j;
	while (i < n) {
		j = i;
		x = array[i];
		while (j > 0 && x < array[j - 1]) {
			array[j] = array[j - 1];
			j = j - 1;
		}
		array[j] = x;
		i = i + 1;
	}

}

int main() {

	setlocale(LC_ALL, "Ru");
	printf_s("Сортировка \"Вставками\"\n \n");
	int i = 0;
	int arr[] = { 97, 96, 22, 60, 26, 30, 4, 10, 87, 45 };
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


	int arr2[] = { 39, 50, 25, 3, 42, 81, 88, 80, 40, 7 };
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
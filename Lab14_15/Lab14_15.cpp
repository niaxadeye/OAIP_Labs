#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <locale.h>

void sort_for(int* array, int n) {
	int buf, j = 2;
	for (int i = 1; i < n; i ) {
		if (array[i - 1] > array[i]) {
			buf = array[i];
			array[i] = array[i - 1];
			array[i - 1] = buf;
			i--;
			if (i > 0) continue;
		}
		i = j++;
	}

}
void sort_while(int* array, int n) {
	int i = 1, j = 2, buf;
	while (i < n) {
		if (array[i - 1] > array[i]) {
			buf = array[i];
			array[i] = array[i - 1];
			array[i - 1] = buf;
			i--;
			if (i > 0) continue;
		}
		i = j++;
	}

}

int main() {

	setlocale(LC_ALL, "Ru");
	printf_s("Сортировка \"Гномья\"\n \n");
	int i = 0;
	int arr[] = { 49, 87, 22, 74, 68, 61, 42, 95, 44, 59 };
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


	int arr2[] = { 67, 64, 36, 100, 71, 91, 83, 65, 2, 58 };
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
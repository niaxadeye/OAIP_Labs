#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <locale.h>

void sort_for(int* array, int n) {
	int i, j, min, buf;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1, min = i; j < n; j++) {
			if (array[j] < array[min])
				min = j;
		}
		buf = array[i];
		array[i] = array[min];
		array[min] = buf;
	}

}
void sort_while(int* array, int n) {
	int i = 0, j, min, buf;
	while (i < n - 1) {
		j = i + 1;
		min = i;
		while(j < n){
			if (array[j] < array[min]) {
				min = j;
			}
			j++;
		}
		buf = array[i];
		array[i] = array[min];
		array[min] = buf;
		i++;
	}
}

int main() {

	setlocale(LC_ALL, "Ru");
	printf_s("Сортировка \"Выбором\"\n \n");
	int i = 0;
	int arr[] = { 8, 58, 80, 48, 12, 36, 11, 24, 1, 17 };
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


	int arr2[] = { 45, 46, 74, 11, 55, 60, 26, 19, 42, 17 };
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
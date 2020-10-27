#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <locale.h>

void qsort_while(int* array, int size) {
	int piv = array[size / 2];
	int l = 0;
	int r = size - 1;
	int buf;
	while (l <= r)
	{
		while (array[l] < piv) l++;
		while (array[r] > piv) r--;
		if (l <= r) 
		{
			buf = array[l];
			array[l] = array[r];
			array[r] = buf;
			l++;
			r--;
		}
	}
	if (r > 0) {
		qsort_while(array, r + 1);
	}
	if (l < size)
	{
		qsort_while(&array[l],size - l  );
	}
}
void qsort_for(int* array, int size) {
	int piv = array[size / 2];
	int l = 0;
	int r = size - 1;
	int buf;
	for (l; l <= r; l) {
		while (array[l] < piv) l++;
		while (array[r] > piv) r--;
		if (l <= r) {
			buf = array[l];
			array[l] = array[r];
			array[r] = buf;
			l++;
			r--;
		}
	}
	if (r > 0) {
		qsort_while(array, r + 1);
	}
	if (l < size)
	{
		qsort_while(&array[l], size - l);
	}
}

int main() {

	setlocale(LC_ALL, "Ru");
	printf_s("Быстрая сортировка\n \n");
	int i = 0;
	int b, e, l, r, t;
	int arr[] = { 7, 77, 98, 21, 42, 31, 25, 44, 37, 95};
	int size = sizeof(arr) / sizeof(int);

	printf_s("Исходный массив №1: ");
	for (i = 0; i < size; i++) {
		printf_s("%i ", arr[i]);
	}

	qsort_for(arr, size );

	printf_s("\nОсторированный массив №1: ");
	for (i = 0; i < size; i++) {
		printf_s("%i ", arr[i]);
	}


	int arr2[] = { 50, 76, 45, 22, 13, 98, 70, 29, 6, 67};
	size = sizeof(arr2) / sizeof(int);

	printf_s("\n \nИсходный массив №2: ");
	for (i = 0; i < size; i++) {
		printf_s("%i ", arr2[i]);
	}

	qsort_while(arr2, size );

	printf_s("\nОсторированный массив №2: ");
	for (i = 0; i < size; i++) {
		printf_s("%i ", arr2[i]);
	}


	return 0;
}
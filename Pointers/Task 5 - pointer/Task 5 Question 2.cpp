#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define size 10

void fill(int *arr);
void div(int *arr, int *mis1, int *mis2);

void main()
{
	int arr[size], mis1 = 2, mis2 = 3;
	srand(time(NULL));
	puts("Orginal array:");
	fill(arr);
	div(arr, &mis1, &mis2);

	//Atalo Abeje
	getchar();
	getchar();
}

void fill(int *arr)
{
	int i;
	for (i = 0; i < size; i++) //fill array
		*(arr + i) = rand() % 100;

	for (i = 0; i < size; i++) //print array
		printf("%d, ", *(arr + i));
}

void div(int *arr, int *mis1, int *mis2) // פונקציה לבדיקת  מתחלקים ב-2 מספרים
{
	int i;

	puts("\n\ndiv by mis1"); // mis1 = 2;
	for (i = 0; i < size; i++)
	{
		if (*(arr + i) % *mis1 == 0) // תנאי לבדיקה אם קיימים מתחלקים במספר 2 ללא שארית
			printf("%d, ", *(arr + i));
	}

	puts("\n\ndiv by mis2:"); // mis2 = 3;
	for (i = 0; i < size; i++)
	{
		if (*(arr + i) % *mis2 == 0)  // תנאי לבדיקה אם קיימים מתחלקים במספר 3 ללא שארית
			printf("%d, ", *(arr + i));
	}
}
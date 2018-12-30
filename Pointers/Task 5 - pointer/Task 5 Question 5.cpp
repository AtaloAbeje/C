#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define row 6
#define col 6

void fill_print(int arr[][col])
{
	int i, j, sum = 0;  //i = Floors, j = Kids;
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			*(*(arr + i) + j) = rand() % 10; // מילוי בערכים רנדומלים = מספר הילידם בכל דירה ובכל קומה
	}

	for (i = 0; i < row; i++)       //הדפסה כל קומה מ-5 עד 10 כולל כמות/סכום ילדים בכל דירה
	{
		printf("\nFloor number %d\n", i + 5);
		for (j = 0; j < col; j++)
		{
			printf("Apartment %d as %d kids\n", j, *(*(arr + i) + j)); // סכום הילדים כל קומה
			sum += *(*(arr + i) + j);
		}
		printf("Floor number %d as %d kids\n\n", i + 5, sum);
		sum = 0;
	}
}

void func(int arr[][col], int *place)
{
	int i, j, max = 0, sum = 0;
	for (i = 0; i < row; i++)
	{
		sum = 0;
		for (j = 0; j < col; j++)
			sum += *(*(arr + i) + j); 
		if (sum > max) // בדיקה באיזה קומה נמצא מספר הילדים הכי גדול
		{
			max = sum;
			*place = i + 5;
		}
	}
	printf("Floor %d have most kids %d\n", *place, max);
}

void main()
{
	int place=0,arr[row][col];
	srand(time(NULL));
	fill_print(arr); // פונקציה למילוי רנדומלי מספר ילדים בכל דירה ובכל קומה 
	func(arr, &place);

	//Atalo Abeje
	getchar();
	getchar();
}


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#define SIZE 10
void fillarr(int arr[]) // פונקציה למילוי כל עברי המערך במספרים רנדונליים
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		if (i % 2 == 0)
			arr[i] = rand() % 100;
		else
			arr[i] = rand() % (99 + 1) *-1; //מוודא שהתוצאה לא תהיה 0 
	}
	printf("arr is: \n");
	for (i = 0; i < SIZE; i++)
		printf("%4d,", arr[i]);
}

void even_odd(int arr[], int brr[]) //פונקציה לסידור מספרים שלילים לאחר מכן את המספרים החיובים
{
	int i=0, j=0;
	puts("\n--------------------------------------------------");
	printf("brr is: \n");
	for (i = 0; i < SIZE; i++)
		if (arr[i] < 0) 
		{
			brr[j++] = arr[i];
			//j++;  שקול ל
		}
	for (i = 0; i < SIZE; i++)
		if (arr[i] >= 0)
		{
			brr[j++] = arr[i];
			//j++;  שקול ל
		}
		for (i = 0; i < SIZE; i++) // הדפסה של המערך החדש שמספרו מסודרים = שלילים קודם ואת החיובים
			printf("%4d,", brr[i]);	
}

void big_arr(int arr[], int brr[], int crr[]) // פונקציה למציאת ערך גדול בין 2 המערכים
{
	int i = 0, j = 0;
	puts("\n--------------------------------------------------");
	printf("crr is: \n");
	for (i = 0; i < SIZE; i++)
	{
		if (arr[i] > brr[i])
			crr[i] = arr[i];
		else
			crr[i] = brr[i];
	}
	for (i = 0; i < SIZE; i++)
	{
		if (arr[i] == brr[i])
			crr[i] = 0;
		printf("%4d,", crr[i]); //הדפסת המערך החדש = הערכים הכי גדולים בין 2 המערכים
	}
	puts("\n--------------------------------------------------");
}
void main()
{
	int arr[SIZE], brr[SIZE], crr[SIZE];
	srand(time(NULL));

	fillarr(arr); // פונקציה למילוי מערך 1 ב-10 מספרים רנדומליים
	even_odd(arr, brr); // פונקציה למציאת מספרים שלילים וחיובים
	big_arr(arr, brr, crr); // פונקציה למציאת מספר הכי גדול בין מערך 1 ו-2

	getchar();
	getchar();

	//Atalo Abeje!!
}

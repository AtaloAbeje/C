#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 10

int inputarray(int arr[])
{
	int i;
	for (i = 0; i<SIZE; i++)
	{
		printf("Enter num to the array place %d\n", i + 1);
		scanf("%d", &arr[i]);
	}
	return 0;
}

int checkarray(int arr[])
{
	int i;
	for (i = 0; i<SIZE; i++)
		if (arr[i] % 3 == 0 && arr[i] % 7 == 0 && arr[i] != 0)
		{
			printf("%d div by 7 and 3\n", arr[i]);
			return 1;
		}
	return 0;
}

int printarray(int arr[])
{
	int i;
	printf("Array:\n");
	for (i = 0; i<SIZE; i++)
		printf("%2d) %4d\n", i + 1, arr[i]);
	return 0;
}
int main()
{
	int numbers[SIZE];
	inputarray(numbers);
	printarray(numbers);
	if (checkarray(numbers) == 1)
		printf("One element div by 3 and 7\n");
	else
		printf("No element div by 3 and 7\n");
	return 0;


	getchar();
	getchar();
	return 0;
}

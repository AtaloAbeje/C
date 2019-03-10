#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N	8
#define M	16

void fillarrays(int arr[], int brr[])
{
	int i;
	for (i = 0; i < N; i++)
		arr[i]=rand()%100;
	for (i = 0; i < M; i++)
		brr[i]=rand()%100;
}

void sortarrays(int arr[], int brr[])
{
	int i, j, temp;
	for (i = (N - 1); i >= 0; i--)
		for (j = 1; j <= i; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}

	for (i = (M - 1); i >= 0; i--)
		for (j = 1; j <= i; j++)
		{
			if (brr[j - 1] > brr[j])
			{
				temp = brr[j - 1];
				brr[j - 1] = brr[j];
				brr[j] = temp;
			}
		}
}

void printarrbrr(int arr[], int brr[])
{
	int i;
	printf("\n%d numbers of arr array:\n", N);
	for (i = 0; i < N; i++)
		printf("%4d", arr[i]);
	printf("\n%d numbers of brr array:\n", M);
	for (i = 0; i < M; i++)
		printf("%4d", brr[i]);
}

void checkarrbrr(int arr[], int brr[])
{
	int i, j;
	printf("\nSame arrays numbers:\n");
	for (i = 0; i<N; i++)
	{
		for (j = 0; j<M; j++)
			if (arr[i] == brr[j])
				printf("%4d", arr[i]);
	}
}

void main()
{
	int arr[N] ,brr[M];
	srand(time(NULL));
	fillarrays(arr, brr);
	sortarrays(arr,brr);
	printarrbrr(arr, brr);
	checkarrbrr(arr, brr);
	printf("\n");
}

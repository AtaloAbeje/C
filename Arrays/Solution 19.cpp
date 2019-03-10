#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 4
#define C 4

void fillarr(int arr[][C])
{
	int i, j;
	// input array
	for (i = 0; i<R; i++)
		for (j = 0; j<C; j++)
			arr[i][j]=rand()%100;
}
void printarrbrr(int arr[][C])
{
	int i, j;
	// output array
	printf("Matrix Array:\n");
	for (i = 0; i<R; i++)
	{
		for (j = 0; j<C; j++)
			printf("%5d", arr[i][j]);
		printf("\n");
	}
}

void checkarrbrr(int arr[][C])
{
	int i, j, diagonal, sumdiagonal = 0, max = 0, indexdiagonal;
	// output diagonals
	printf("\nMatrix Diagonals:");
	for (diagonal = (R + C) - 1; diagonal >= 0; diagonal--)
	{
		printf("Diagonal number %d: ", diagonal + 1);
		for (i = 0; i<R; i++)
		{
			for (j = 0; j<C; j++)
			{
				if ((i + j) == diagonal)
				{
					sumdiagonal += arr[i][j];
					printf("%4d", arr[i][j]);
				}
			}
		}
		//Check diagonals sum and index
		if (sumdiagonal>max)
		{
			max = sumdiagonal;
			indexdiagonal = diagonal + 1;
		}
		sumdiagonal = 0;
		printf("\n");
	}
	printf("\nMax is: %d\n", max);
	printf("In diagonal number %d\n", indexdiagonal);
	printf("\n");
}

void main()
{
	int arr[R][C];
	srand(time(NULL));
	fillarr(arr);
	printarrbrr(arr);
	checkarrbrr(arr);
}


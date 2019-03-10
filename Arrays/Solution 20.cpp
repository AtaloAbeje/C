#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 5
#define C 5

void fillarr(int arr[][C])
{
	int i, j;
	// input array
	for (i = 0; i<R; i++)
		for (j = 0; j<C; j++)
			arr[i][j]=rand()%10;
}

void printarr(int arr[][C])
{
	int i, j;
	// output array
	for (i = 0; i<R; i++)
	{
		for (j = 0; j<C; j++)
			printf("[%d][%d]%2d   ",i,j,arr[i][j]);
		printf("\n");
	}
}

void checkarrRows(int arr[][C])
{
	int indexrow, sumrow = 0;
	int i, j, maxrow = 0;
	// check max in rows
	for (i = 0; i<R; i++)
	{
		//summing the columns
		for (j = 0; j<C; j++)
			sumrow += arr[i][j];

		if (sumrow>maxrow)
		{
			maxrow = sumrow;
			indexrow = i;
		}
		sumrow = 0;
	}
	//Output resualts sum row and index 
	printf("Max sum of row is %d\n", maxrow);
	printf("Index of row with max sum is %d\n", indexrow);
}

void checkarrColumns(int arr[][C])
{
	int indexcolumn, sumcolumn = 0;
	int i, j, maxcolumn = 0;
	// check max in column
	for (i = 0; i<R; i++)
	{
		for (j = 0; j<C; j++)
			sumcolumn += arr[j][i];
		
		if (sumcolumn>maxcolumn)
		{
			maxcolumn = sumcolumn;
			indexcolumn = i;
		}
		sumcolumn = 0;
	}
	//Output resualts sum column and index 
	printf("Max sum of column is %d\n", maxcolumn);
	printf("Index of col with max sum is %d\n", indexcolumn);
}



void main()
{
	int arr[R][C];
	srand(time(NULL));
	fillarr(arr);
	printf("The matrix array:\n");
	printarr(arr);
	printf("\nOutput check max rows:\n");
	checkarrRows(arr);
	printf("\nOutput check max columns:\n");
	checkarrColumns(arr);
}



	

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4

void fillMatrix(int arr[][N])
{
	int i,j;
	for(i=0; i<N; i++)
		for(j=0; j<N; j++)
			arr[i][j]=rand()%100;
}

void printMatrix(int arr[][N])
{
	int i,j;
	printf("\nThe %d X %d Matrix numbers:\n",N,N);
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			printf("  [%d][%d]%3d",i,j,arr[i][j]);
		printf("\n");	
	}
}

int checkMatrix(int arr[][N])
{
	int i,j;
	for(i=0; i<N; i++)
		for(j=0; j<N; j++)
			if(arr[i][j] %2 != 0)
				return 0;
	return 1;
}
//שורות זוגיות רגיל אי זוגיות הפוך
void checkMatrixlines(int arr[][N])
{
	int i,j;
	printf("\nMatrix numbers after line check:\n");
	for(i=0; i<N; i++)
	{
		if(i%2==0)
			for(j=0; j<N; j++)
			printf("  [%d][%d]%3d",i,j,arr[i][j]);
		else
			for(j=N-1; j>=0; j--)
			printf("  [%d][%d]%3d",i,j,arr[i][j]);
		printf("\n");
	}
}

int main()
{
	int arr[N][N];
	srand(time(NULL));
	fillMatrix(arr);
	printMatrix(arr);
	if(checkMatrix(arr)!=0)
		printf("Matrix as only even numbers !!!\n");
	else
		printf("Matrix as one odd number or more !!!\n");
	checkMatrixlines(arr);
	return 0;
}
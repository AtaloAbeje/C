#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 5
#define COLUMN 5

void printMatrix(int mat[][COLUMN])
{
	int i, j;
	for (i = 0; i<ROW; i++)
	{
		for (j = 0; j<COLUMN; j++)
			printf("%4d", mat[i][j]);
		printf("\n");
	}
	printf("\n");
}
void fillMatrix(int mat[][COLUMN])
{     
    int i,j;
    for(i=0;i<ROW;i++)
 		for(j=0;j<COLUMN;j++)
 			mat[i][j]=rand()%100;
}

void func(int mat[][COLUMN])
{
	int i, j, temp;
	for (i = 0; i < ROW; i++)
	{
		for (j = i + 1; j < COLUMN; j++)
		{
			temp = mat[i][j];
			mat[i][j] = mat[j][i];
			mat[j][i] = temp;
		}
		getch();
		printf("\nRound %d\n", i + 1);
		printMatrix(mat);
	}
}


int main()
{
	int mat[ROW][COLUMN];
	int i,j;
	srand(time(NULL));
	printf("Matrix before recombination:\n");
	printf("============================\n");
	fillMatrix(mat);
	printMatrix(mat);
	func(mat);
	printf("\nMatrix after recombination:\n");
	printf("===========================\n");
	printMatrix(mat);
return 0;
}

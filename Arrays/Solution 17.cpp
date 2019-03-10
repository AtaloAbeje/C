#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 3

void fillmat(int mat[][M])
{
	int row, col;	
	//Input numbers to the matrix
	for (row = 0; row<M; row++)
		for (col = 0; col<M; col++)
				mat[row][col]=rand()%10;
}

void printmat(int mat[][M])
{
	int row, col;
	//Output the matrix numbers
	printf("\nThe Matrix:\n");
	for (row = 0; row<M; row++)
	{
		for (col = 0; col<M; col++)
			printf("%5d", mat[row][col]);
		printf("\n");
	}
}

int checkmat(int mat[][M])
{
	int row, col;
	int sum1 = 0, sum2 = 0, flag = 1, dgnl1 = 0, dgnl2 = 0;
	//Sum diagonal 1 and 2
	for (row = 0; row < M; row++)
	{
		for (col = 0; col < M; col++)
		{
			if (col == row)
				dgnl1 += mat[row][col];
			if (col + row == M - 1)
				dgnl2 += mat[row][col];
		}
	}
	//Check diagonals sum to rows and columns sum
	if (dgnl1 == dgnl2)
	{
		for (row = 0; row < M && flag == 1; row++)
		{
			sum1 = 0;
			sum2 = 0;

			for (col = 0; col < M; col++)
			{
				sum1 += mat[row][col];
				sum2 += mat[col][row];
			}
			if (sum1 == sum2 && sum2 == dgnl1)
				flag = 1;
			else
				flag = 0;
		}
	}
	else
		flag = 0;
	return flag;
}

int main()
{
	int mat[M][M];
	srand(time(NULL));
	//Input numbers to the matrix
	fillmat(mat);
	printmat(mat);
	//Output resualts
	if(checkmat(mat))
		printf("Magic square !!!\n");
	else
		printf("Not magic square !!!\n");
	return 0;
}

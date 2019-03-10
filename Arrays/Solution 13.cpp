#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

#define ROW 5
#define COLUMN 5

void input(int Matrix[][COLUMN])
{
	int i, j;
	for (i = 0; i<ROW; i++)
		for (j = 0; j<COLUMN; j++)
			Matrix[i][j] = rand() % 100;
}

void output(int Matrix[][COLUMN])
{
	int i, j;
	for (i = 0; i<ROW; i++)
	{
		for (j = 0; j<COLUMN; j++)
			printf("  [%d][%d]%3d", i, j, Matrix[i][j]);
		printf("\n");
	}
}

void sort(int Matrix[][COLUMN])
{
	int i, j, k, temp;
	for (k = 0; k < ROW * COLUMN; k++)
	{
		for (i = 0; i < ROW; i++)
		{
			for (j = 0; j < COLUMN; j++)
			{
				if ((Matrix[i][j] > Matrix[i][j + 1]) && j != COLUMN - 1)
				{
					temp = Matrix[i][j];
					Matrix[i][j] = Matrix[i][j + 1];
					Matrix[i][j + 1] = temp;
				}
				if ((Matrix[i + 1][0] < Matrix[i][j]) && (i != ROW - 1))
				{
					temp = Matrix[i + 1][0];
					Matrix[i + 1][0] = Matrix[i][j];
					Matrix[i][j] = temp;
				}
			}
		}
	}
}

int linarySearch(int Matrix[][COLUMN], int item)
{
	int i, j;
	printf("\nLinary Search\n");
	printf("===============\n");
	for (i = 0; i<ROW; i++)
		for (j = 0; j<COLUMN; j++)
			if (Matrix[i][j] == item)
			{
				printf("Item %d found in place: Row = %d Column = %d\n", item, i, j);
				return 0;
			}
	printf("Item %d not found in Matrix\n\n", item);
	return 0;
}

int binarySearch(int Matrix[][COLUMN], int item)
{
	int lsize = 0, rsize = ROW - 1, middle, i = 0;
	printf("\nBinary Search\n");
	printf("=============\n");
	while (i<ROW)
	{
		lsize = 0, rsize = COLUMN - 1, middle;
		while (lsize <= rsize)
		{
			middle = (lsize + rsize) / 2;
			if (item == Matrix[i][middle])
			{
				printf("Item %d found in place: Row = %d Column = %d\n", item, i, middle);
				return 1;
			}
			if (item < Matrix[i][middle])
				rsize = middle - 1;
			else
				lsize = middle + 1;
		}
		lsize = 0, rsize = COLUMN - 1;
		middle = (rsize + lsize) / 2;
		i++;
	}
	printf("Item %d not found in Matrix\n\n", item);
	return 0;
}

void main()
{
	int Matrix[ROW][COLUMN];
	int status=0,item;
	srand(time(NULL));
	input(Matrix);
	printf("\tMatrix before bubble sort:\n");
	printf("=========================================================\n");
	output(Matrix);
	printf("=========================================================\n\n");
	getch();
	//system("CLS");
	sort(Matrix);
	printf("\tMatrix after bubble sort:\n");
	printf("=========================================================\n");
	output(Matrix);
	printf("=========================================================\n");
	printf("Enter item to search in Matrix\n");
	scanf("%d",&item);
	linarySearch(Matrix,item);
	binarySearch(Matrix,item);
}


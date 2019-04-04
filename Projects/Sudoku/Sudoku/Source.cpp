#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SIZE 9

int print_matrix(int matrix[][SIZE])
{
	int i, j, cnt = 1;

	printf("----(%d", cnt++);
	printf(")------(%d", cnt++);
	printf(")-------(%d)----\n", cnt++);

	for (i = 0; i < SIZE; i++)
	{
		printf("|");
		for (j = 0; j < SIZE; j++)
		{
			printf(" %d ", matrix[i][j]);
			if ((j + 1) % 3 == 0)	// j == 2 || j == 5 || j == 8)
				printf("|");
		}

		printf("\n");
		if ((i + 1) % 3 == 0)		// i == 2 || i == 5 || i == 8)
		{
			printf("----(%d", cnt++);
			printf(")------(%d", cnt++);
			if (cnt > 10)
				printf(")------(%d)---\n", cnt++);
			else
				printf(")-------(%d)----\n", cnt++);

		}
	}

	return 0;
}
void chek_mini_matrix(int matrix[][SIZE], int row, int sizerow, int col, int sizecol, int num, int index)
{
	int i, j, flag = 1, cnt = 1;

	for (i = row; i < sizerow; i++)
	{
		for (j = col; j < sizecol; j++)
			if (matrix[i][j] == num)
				flag = 0;
	}

	while (flag == 1)
	{
		for (i = row; i < sizerow; i++)
		{
			for (j = col; j < sizecol; j++)
				if (cnt++ == index)
				{
					matrix[i][j] = num;
					flag = 0;
				}
		}

	}
}
void print_mini_matrix(int matrix[][SIZE], int row, int sizerow, int col, int sizecol, int border)
{
	int i, j, num, cnt = 1, index;

	//system("CLS");
	printf("\nNow you in mini matrix %d\n", border);

	for (i = row; i < sizerow; i++)
	{
		printf("\n");
		for (j = col; j < sizecol; j++)
			printf(" (%d)-> %d ", cnt++, matrix[i][j]);
	}

	puts("\nEnter number 1-9 (index do you want to change): ");
	scanf_s("%d", &index);

	puts("\nEnter number 1-9 (insert into susoku):");
	scanf_s("%d", &num);

	while (num < 0 || num > 10 || index < 0 || index > 10)
	{
		puts("\nEnter index number 1-9:");
		scanf_s("%d", &index);

		puts("\nEnter number 1-9 onlly!");
		scanf_s("%d", &num);
	}

	chek_mini_matrix(matrix, row, sizerow, col, sizecol, num, index);
	print_matrix(matrix);
}
void menu(int matrix[SIZE][SIZE])
{
	int row = 0, col = 0, border;

	puts("\nChoose Square number 1-9:");
	scanf_s("%d", &border);

	while (border < 0 || border >10)
	{
		puts("\nChoose Square number 1-9:");
		scanf_s("%d", &border);
	}

	switch (border)
	{
	case 1:
		print_mini_matrix(matrix, row, 3, col, 3, border);
		break;

	case 2:
		print_mini_matrix(matrix, row, 3, col + 3, 6, border);
		break;

	case 3:
		print_mini_matrix(matrix, row, 3, col + 6, SIZE, border);
		break;

	case 4:
		print_mini_matrix(matrix, (row + 3), 6, col, 3, border);
		break;

	case 5:
		print_mini_matrix(matrix, (row + 3), 6, (col + 3), 6, border);
		break;

	case 6:
		print_mini_matrix(matrix, (row + 3), 6, (col + 6), SIZE, border);
		break;

	case 7:
		print_mini_matrix(matrix, (row + 6), SIZE, col, 3, border);
		break;

	case 8:
		print_mini_matrix(matrix, (row + 6), SIZE, (col + 3), 6, border);
		break;

	case 9:
		print_mini_matrix(matrix, (row + 6), SIZE, (col + 6), SIZE, border);
		break;


	default: puts("wrong chiose!");
		break;
	}
}

int main()
{
	int i, j, flag = 0;
	int matrix[SIZE][SIZE] = {
								0,1,9,	0,0,2,	0,0,0,
								4,7,0,	6,9,0,	0,0,1,
								0,0,0,	4,0,0,	0,9,0,

								8,9,0,	5,0,7,	0,0,0,
								0,0,0,	0,0,0,	0,0,0,
								0,0,0,	2,0,1,	9,5,8,

								0,5,0,	0,0,6,	0,0,0,
								6,0,0,	0,2,8,	0,7,9,
								0,0,0,	1,0,0,	8,6,0
	};

	print_matrix(matrix);
	menu(matrix);

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (matrix[i][0] == 0)
			{
				flag = 1;
				break;
			}
		}
	}

	while (flag == 1)
	{
		system("CLS");
		print_matrix(matrix);
		menu(matrix);
	}
	return 0;
}

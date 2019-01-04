#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

int func(int **mat,int row, int col, int num)
{
	int i, j, cnt = 0;

	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			if (*(*(mat + i) + j) % 2 == 0)
				cnt++;
	if (cnt)
		return cnt;
	else
		return 0;
}
int main()
{
	int i, j, row, col, num, result;
	srand(time(NULL));

	printf("Enter row number for matrix:\n");
	scanf("%d", &row);
	int **mat = (int**)calloc(row, sizeof(int));

	printf("Enter col number for matrix:\n");
	scanf("%d", &col);
	for (i = 0; i < row; i++)
		*(mat + i) = (int*)calloc(col, sizeof(int));

	system("CLS");
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			*(*(mat + i) + j) = rand() % 50;
	puts("Matrix: ");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			printf("%6d", *(*(mat + i) + j));
		printf("\n");
	}
	printf("Enter number for Search:\n");
	scanf("%d", &num);

	result = func(mat, row, col, num);
	if (result)
		printf("number %d div %d times in the matrix\n", num, result);
	else
		printf("number %d Not divisible \n", num);

		
	getchar();
	getchar();

	return 0;

	// Dynamic Memory Allocation --> Atalo Abeje
}
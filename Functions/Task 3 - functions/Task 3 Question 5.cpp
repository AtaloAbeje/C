#include <stdio.h>
#include<conio.h>
void dolar(int rows)
{
	int i, j, k, space = rows - 1;
	space = 0;
	for (i = 1; i <= rows; i++)
	{
		for (k = 1; k <= space; k++)
			printf(" ");
		for (j = rows * 2; j >= i * 2; j--)
			printf("$");
		printf("\n");
		space++;
	}
	for (i = 1; i <= rows; i++)
	{
		for (k = space - 1; k >= 1; k--)
			printf(" ");
		for (j = 1; j <= i * 2 - 1; j++)
			printf("$");
		printf("\n");
		space--;
	}
}
int main()
{
	int i, j, rows;
	printf("Enter number of rows: \n");
	scanf_s("%d", &rows);
	dolar(rows);
	getchar();
	getchar();

	return 0;
}

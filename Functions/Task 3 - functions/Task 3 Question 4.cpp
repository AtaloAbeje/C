#include<stdio.h>
#include<conio.h>
int triangular(int num)
{
	int x, res = 1;
	for (x = 1; x <= num; x++)
		res = res*x;
	return (res);
}
int main()
{
	int i, j, row, temp;
	printf("Enter namber for Pascal triangle: \n");
	scanf_s("%d", &row);
	for (i = 0; i<row; i++)
	{
		for (j = 0; j <= (row - i - 1); j++)
			printf(" ");
		for (j = 0; j <= i; j++)
		{
			temp = triangular(i) / (triangular(j)*triangular(i - j));
			printf("%2d", temp);
		}
		printf("\n");
	}
	main();
	getchar();
	getchar();

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// Solution question 17

	int i, j, k, rows, space;
	printf("Enter number:\n");
	scanf("%d", &rows);
	space = rows - 1;

	for (i = 1; i <= rows; i++)
	{
		for (k = space; k >= 1; k--)
			printf(" ");
		for (j = 1; j <= i * 2 - 1; j++)
			printf("*");
		printf("\n", i);
		space--;
	}

	for (i = 1; i<rows + 1; i++)
	{
		for (k = 1; k<i; k++)
			printf("%c", ' ');
		for (j = 0; j <= (rows - i) * 2; j++)
			printf("*");
		printf("\n");
	}

	for (i = 1; i<rows; i++)
	{
		for (k = rows - 1; k>i; k--)
			printf("%c", ' ');
		for (j = 0; j <= i * 2; j++)
			printf("*");
		printf("\n");
	}

	getchar();
	getchar();
	return 0;
}
/* OUTPUT:

	Enter number:
	5
		*
	   ***
	  *****
	 *******
	*********
	*********
	 *******
	  *****
	   ***
		*
	   ***
	  *****
	 *******
	*********
*/

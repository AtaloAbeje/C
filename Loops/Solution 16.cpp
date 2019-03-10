#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// Solution question 16

	int i, j, k, rows;
	printf("Enter number:\n");
	scanf("%d", &rows);

	for (i = 1; i < rows + 1; i++)
	{
		for (k = 1; k < i; k++)
			printf("%c", ' ');
		for (j = 0; j <= (rows - i) * 2; j++)
			printf("*");
		printf("\n");
	}

	for (i = 1; i < rows; i++)
	{
		for (k = rows - 1; k > i; k--)
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

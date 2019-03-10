#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// Solution question 13

	int i, j, k, rows, space;
	printf("Enter number of rows:\n");
	scanf("%d", &rows);
	space = rows - 1;
	for (i = 1; i <= rows; i++)
	{
		for (k = space; k >= 1; k--)
			printf(" ");

		for (j = 1; j <= i * 2 - 1; j++)
			printf("*");

		printf("\n");
		space--;
	}

	getchar();
	getchar();
	return 0;
}
/* OUTPUT:

	Enter number of rows:
	5
		*
	   ***
	  *****
	 *******
	*********

*/

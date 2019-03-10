#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// Solution question 14

	int i, j, k, rows, space = 0;
	printf("Enter number of rows:\n");
	scanf("%d", &rows);

	for (i = 1; i <= rows; i++)
	{
		for (k = 1; k <= space; k++)
			printf(" ");

		for (j = rows * 2; j >= i * 2; j--)
			printf("*");

		printf("\n");
		space++;
	}

	getchar();
	getchar();
	return 0;
}
/* OUTPUT:

	Enter number of rows:
	5
    *********
	 *******
	  *****
	   ***
		*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// Solution question 18

	int i, j, k, rows, space;
	printf("Enter number:\n");
	scanf("%d", &rows);
	space = rows;

	//Missile head triangle
	for (i = 1; i <= rows; i++)
	{
		for (k = space; k >= 1; k--)
			printf(" ");
		for (j = 1; j <= i * 2 - 1; j++)
			printf("*");
		printf("\n");
		space--;
	}

	//Missile body triangle
	for (i = 1; i<rows; i++)
	{
		for (k = 1; k <= i; k++)
			printf(" ");
		for (j = 0; j <= (rows - i) * 2; j++)
			printf("*");
		printf("\n");
	}

	//Missile Rocket engines
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= rows / 2 + 1; j++)
			printf("*");

		if (rows % 2 == 0)
			for (k = 1; k<rows; k++)
				printf(" ");
		else
			for (k = 1; k<(rows / 2 + 1) * 2; k++)
				printf(" ");

		for (j = 1; j <= rows / 2 + 1; j++)
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
	***     ***
	***     ***
	***     ***
	***     ***
	***     ***
*/

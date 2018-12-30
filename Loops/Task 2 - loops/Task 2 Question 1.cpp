//loop do-while:
#include <stdio.h>
#include <conio.h>
void main()
{
	int i = 1, j = 1;
	do {
		do {
			printf("%4d", i*j);
			j++;
		} while (j <= 10);
		j = 1;
		printf("\n");
		i++;
	} while (i <= 10);

	getchar();
}

//loop for:
#include <stdio.h>
#include <conio.h>
void main()
{
	int i, j;
	printf("enter number\n");
	scanf_s("%d", &i);
	for (i = 1; i <= 10; i++)
	{
		printf("i=%2d)", i);
		for (j = 1; j <= 10; j++)
			printf("%4d", i*j);
		printf("\n");
	}
	getchar();
}

//loop while:
#include <stdio.h>
#include <conio.h>
void main()
{
	int i = 1, j = 1;
	while (i <= 10)
	{
		while (j <= 10)
		{
			printf("%4d", i*j);
			j++;
		}
		j = 1;
		printf("\n");
		i++;
	}
	getchar();
}
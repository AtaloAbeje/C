#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

int main()
{
	int size, i, *ptr = NULL, sum = 0;
	printf("Enter number of elements: \n");
	scanf("%d", &size);
	ptr = (int*)calloc(size, sizeof(int));
	if (ptr == NULL)
	{
		printf("Error! memory not allocated.");
		exit(1);
	}
	printf("The array %d numbers:\n", size);
	for (i = 0; i<size; ++i)
		printf("%5d\t", *(ptr + i));
	printf("\nEnter %d elements of array: \n", size);
	for (i = 0; i<size; ++i)
	{
		scanf("%d", ptr + i);
		sum += *(ptr + i);
	}
	printf("\nThe array %d numbers:\n", size);
	for (i = 0; i<size; ++i)
		printf("%5d\t", *(ptr + i));
	printf("Sum=%d\n", sum);
	free(ptr);

	getchar();
	getchar();

	return 0;

	// Dynamic Memory Allocation --> Atalo Abeje
}
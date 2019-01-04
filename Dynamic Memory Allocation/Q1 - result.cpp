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
	ptr = (int*)malloc(size * sizeof(int));  //memory allocated using malloc
	if (ptr == NULL)
	{
		printf("Error! memory not allocated.");
		exit(1);
	}
	printf("Enter elements of array: \n");
	for (i = 0; i<size; ++i)
	{
		scanf("%d", ptr + i);
		sum += *(ptr + i);
	}
	printf("Sum=%d\n", sum);
	free(ptr);

	getchar();
	getchar();

	return 0;

	// Dynamic Memory Allocation --> Atalo Abeje
}
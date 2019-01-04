#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

int main()
{
	int *arr, i = 0, size, max = 0, res;
	puts("Enter number for list legth:");
	scanf("%d", &size);

	arr = (int*)calloc(size, sizeof(int));
	for (i = 0; i < size; i++)
	{
		printf("Enter number for list %d\n", i+1);
		scanf("%d", &arr[i]);
		if (arr[i] == -1)
			break;
	}

	_flushall();
	puts("Orginal list:");
	for (i = 0; i < size; i++)
		printf("%d, ", arr[i]);

	for (i = 0; i < size; i++)
		if (arr[i] > max)
			max = arr[i];

	for (i = 0; i < size; i++)
		if ((max - 3) == arr[i])
			res = 3;

	if (res)
		printf("result = %d\n", res);
	else
		printf("result = %d\n", res=1);

	getchar();
	getchar();

	return 0;

	// struct --> Atalo Abeje
}
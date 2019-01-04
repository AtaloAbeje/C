#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

int main()
{
	char *str = NULL;
	char tav;
	int i = 0, size = 1;
	puts("Enter chars for exit click enter !!!\n");
	str = (char *)calloc(size, sizeof(char));

	if (str == NULL)
	{
		printf("Error-Out of memory !!!\n");
		return 0;
	}

	scanf("%c", &tav);

	while (tav != '\0')
	{
		str = (char *)realloc(str, ++size * sizeof(char));
		*(str + i++) = tav;
		scanf("%c", &tav);
		if (tav == '\n')
		{
			str[i] = '\0';
			break;
		}
	}

	printf("String: %s\n", str);
	printf("String Strlen: %d\n", strlen(str));
	free(str);

	getchar();
	getchar();

	return 0;

	// Dynamic Memory Allocation --> Atalo Abeje
}
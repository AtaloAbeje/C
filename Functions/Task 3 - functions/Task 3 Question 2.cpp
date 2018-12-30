#include <stdio.h>
#include <string.h>
void func_check(int mispar, int digit)
{
	int new_number = 0, cnt = 1, i = 0;
	while (mispar>0)
	{
		if (mispar % 10 == digit)
		{
			mispar /= 10;
			continue;
		}
		else
		{
			new_number += mispar % 10 * cnt;
			mispar /= 10;
			cnt *= 10;
		}
	}
	printf("%d\n", new_number);
}
void main()
{
	int mispar, digit, i = 0;
	while (i++<30)
	{
		printf("Enter a number up to 5 digits\n");
		scanf_s("%d", &mispar);
		printf("Enter a number with 1 digit\n");
		scanf_s("%d", &digit);
		if (mispar>99999 || digit>9 || digit<0)
		{
			printf("Error\n");
			continue;
		}
		func_check(mispar, digit);
	}
	getchar();
	getchar();
}

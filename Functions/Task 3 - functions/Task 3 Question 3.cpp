#include <stdio.h>
#include <conio.h>
void func_return(int mispar, int num)
{
	int sum = 0;
	while (num>0)
	{
		sum += mispar % 10; 
		mispar /= 10;
		num--;
	}
	printf("The sum of the %d last digits is %d\n", num, sum);
	sum = 0;
}

int main()
{
	int mispar, num, sum = 0;
	while (1)
	{
		printf("Enter Number\n");
		scanf_s("%d", &mispar);

		printf("Enter Numbar with 1 digit\n");
		scanf_s("%d", &num);

		if (mispar == -1 && num == -1)
			return 0;
		func_return(mispar, num);
	}
	getchar();
	getchar();
}

#include <stdio.h>
#include <conio.h>
void func_check(int mispar)
{
	int sum1 = 0, sum2 = 0, i;
	for (i = 0; i<mispar; i += 2)
	{
		sum1 += i;
	}
	for (i = 1; i<mispar; i += 2)
	{
		sum2 += i;
	}
	printf("even numbers: %d\n", sum1);
	printf("odd numbers: %d\n", sum2);
}
void main()
{
	int mispar;
	printf("enter ur number:\n");
	scanf_s("%d", &mispar);
	func_check(mispar);

	getchar();
	getchar();
}
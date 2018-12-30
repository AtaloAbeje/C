#include<stdio.h>
#include<conio.h>
void main()
{
	int cnt, num, sum=0;
	printf("enter number between 0-10000:\n");
	scanf_s("%d", &num);
	if (num > 0)
	{
	 for (num = 2; num <= 10000; num++)
		for (cnt = 1; cnt < num; cnt++)
			if (num % sum == 0)
				sum += cnt;
	}
	else
		printf("The number is negative: %d\n", num);
	if (sum == num)
		printf("the number is advanced: %d\n", num);
	else
		printf("the number %d is not advanced!\n", num);

		getchar();
		getchar();
		//Atalo_Abeje

}
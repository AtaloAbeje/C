#include<stdio.h>
#include<conio.h>
void main()
{
	int mis1, mis2, sum=0, i=1;
	printf("please enter 2 integer numbers\n");
	printf("enter the first number:\n");
	scanf_s("%d", &mis2);
	printf("enter the second number:\n");
	scanf_s("%d", &mis1);

	while (mis2 !=0)
		{
		if (mis2 % 10 != mis1) 
		{
			sum = sum * 10 + mis2 % 10;
			mis2 /= 10;
		}
		else
			mis2 /= 10;
	}
	while (sum !=0)
	{
		mis2 = mis2 * 10 + sum % 10;
		sum /= 10;
	}
	//
	while (i != 0)
	{
		if ((mis2 == 0) && (mis1 == 0))
			break;
		else
		{
			printf("%d\n", mis2);
		}
	}
	

		//Atalo_Abeje
}
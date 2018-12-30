#include<stdio.h>
#include<conio.h>
void main()
{            // matala 2_2 - Atalo_Abeje

	int i, num, ahadot = 0, Asarot = 0, maot = 0;
	for (i = 0; i < 30; i++)
	{
		printf("Enter num with 3 digits\n");
		scanf_s("%d", &num);
		if (num > 100 && num <= 999)
		{
			ahadot += (num % 10);
			printf("ahadot is: %d\n", ahadot);
			Asarot += ((num / 10) % 10);
			printf("Asarot is:  %d\n", Asarot);
			maot += (num / 100);
			printf("maot is: %d\n", maot);
		}
		else
			printf("%d", num);
	}

	//------------------------
	if (ahadot > Asarot && ahadot > maot)
	{
		printf("ahadot is frist\n", ahadot);
		if (Asarot > maot)
		{
			printf("asarot is scond\n", Asarot);
		}
		else
			printf("maot is second\n", maot);
	} 
	//--------------------------
	else
		if (Asarot > ahadot)
		{
			printf("asarot is frist \n", Asarot);
			if (ahadot > maot)
			{
				printf("ahadot is scond:\n", ahadot);
			}
			else
			{
				printf("maot is second\n", maot);
			}
		} //---------------------------
		else
			if (maot > Asarot)
			{
				printf("maot is frist\n", maot);
				if (Asarot > ahadot)
					printf("asarot is second\n", Asarot);
			}
			else
			{
				printf("ahadot is scond\n", ahadot);
			}

			getchar();
			getchar();
}
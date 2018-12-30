#include <stdio.h>
#include <conio.h>
void main()
{
	int num, num1;
	int	numcnt = 0, num1cnt = 0;
	printf("enter num 1\n");
	scanf_s("%d", &num);
	printf("enter num 2\n");
	scanf_s("%d", &num1);
	//how many times the num 5 is exiest(mofia)
	if (num >= 100 && num <1000 && num1 >= 100 && num1 < 1000) 
	{
		//ahadot
		if ((num % 10) == 5)
		{ 
			numcnt++;
		}
		//asarot
		if ((num / 10)%10 == 5)
		{
			numcnt++;
		}
			//maOT
		if ((num /100) == 5)
			{
				numcnt++;
			}
		//ahadot
		if ((num1 % 10) == 5)
		{
			num1cnt++;
		}
		//asarot
		if ((num1 / 10) % 10 == 5)
		{
			num1cnt++;
		}
		//maOT
		if ((num1 / 100) == 5)
		{
			num1cnt++;
		}
	}
	else
		printf("the mun is small or bigerr \n");
	// if numcnt is bigger
	if(numcnt>num1cnt)
		printf("num is wineer\n");
	// if the numcnt and num1cnt is the same and not 0
	if (numcnt==num1cnt && numcnt!=0 &&num1cnt != 0)
		printf("the samm num \n");
	// if num1cnt is bigger
	if (numcnt<num1cnt)
		printf("num1 is wineer\n");
	// if the nums is no 0
	if (num1cnt == 0 && numcnt == 0)
	printf("the num is not kayam\n");

	getchar();
	getchar();

	// Task_01, Question 5 #Atalo Abeje

}
#include <stdio.h>
#include <conio.h>

void main()
{
	int num, num1 = 0;
	printf("Enter 5 digte number with out 0\n");
	scanf_s("%d", &num);
	printf("the num is:%d\n",num);
	// cheked if the num is with 5 digetes 
	if (num >= 10000 && num <= 100000 && num/10000 != 0 && (num / 1000) % 10 != 0 && (num / 100) % 10 != 0
		&& (num / 10) % 10 != 0)
	{
		printf("currect Number\n");
		// cheked if the mun is polirom
	if (((num / 10000 )== (num % 10 ))&& ((num / 1000) % 10) == ((num / 10) % 10))
	{
		printf("the number is polirom\n");
	}
	else
		printf("the number is Not polirom\n");
}
	else
		printf("ur nubbmer is not correct\n");

	getchar();
	getchar();

	// Task_01, Question 4 #Atalo Abeje

}

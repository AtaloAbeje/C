#include<stdio.h>
#include<conio.h>
void main()
{
	int i, maximum = 0, minimum = 0, mispar;
	float ezer = 0;
	for (i = 1; i <= 20; i++)
	{
		printf("%d: Please enter Integer number:\n", i);
		scanf_s("%d", &mispar);
		ezer += mispar;
		printf("~~~~~~A~~~~~~\n");
		printf("The number that divide in 5,3 and 1 are:\n");

		if ((minimum > mispar) || (minimum == 0))
			minimum = mispar;
		if ((maximum < mispar) || (maximum == 0))
			maximum = mispar;

		while (mispar >= 0)
		{
			if ((mispar % 1 == 0) && (mispar % 3 == 0) && (mispar % 5 == 0) && (mispar != 0))
				printf("number:%d\n", mispar);
			mispar--;
		}
	}
	ezer = ezer / 20;
	printf("~~~~~~B~~~~~~\n");
	printf("The minimum number is:%d\n", minimum);

	printf("~~~~~~C~~~~~~\n");

	printf("The maximum number is:%d\n", maximum);

	printf("~~~~~~D~~~~~~\n");
	printf("The avarage of all the numbers is: %.2f\n", ezer);

	getchar();
	getchar();


}



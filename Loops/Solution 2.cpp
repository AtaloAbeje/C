#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	 // Solution question 2

	int num, temp, i = 0;
	printf("Enter int number\n");
	scanf("%d", &num);
	temp = num;
	while (temp) //while(temp != 0)
	{
		i++;
		if (((temp % 10) % 2 == 0) && ((temp % 10) % 3 == 0))
			printf("(%d) Digit number %d is %d is divided by 2 and 3\n", num, i, temp % 10);
		else
			printf("(%d) Digit number %d is %d is not divided by 2 and 3\n", num, i, temp % 10);
		temp = temp / 10;			//temp /= 10;
	}
	printf("temp=%5d\tnum=%5d\n", temp, num);


	getchar();
	getchar();
	return 0;

	/* -- >> OUTPUT:

	Enter int number
	136
	(136) Digit number 1 is 6 is divided by 2 and 3
	(136) Digit number 2 is 3 is not divided by 2 and 3
	(136) Digit number 3 is 1 is not divided by 2 and 3
	temp=    0      num=  136

	*/
}
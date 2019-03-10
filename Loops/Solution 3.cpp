#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	 // Solution question 3

	int num, temp, i = 0;
	printf("Enter int number\n");
	scanf("%d", &num);
	temp = num;
	while (temp)
	{
		i++;
		if ((temp % 10) % 2 == 0 || (temp % 10) % 3 == 0 || (temp % 10) % 4 == 0)
			printf("(%2d) Digit number %2d is %2d divided by 2, or by 3, or by 4(temp=%2d)\n", num, i, temp % 10, temp);
		else
			printf("(%2d) Digit number %2d is %2d is not divided by 2 or 3 or 4(temp=%2d)\n", num, i, temp % 10, temp);
		temp = temp / 10;			//temp /= 10;
	}


	getchar();
	getchar();
	return 0;

	/* -- >> OUTPUT:

	Enter int number
	12
	(12) Digit number  1 is  2 divided by 2, or by 3, or by 4(temp=12)
	(12) Digit number  2 is  1 is not divided by 2 or 3 or 4(temp= 1)

	*/
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	 // Solution question 1

	int num, temp, i = 0;
	printf("Enter int number\n");
	scanf("%d", &num);
	temp = num;

	while (temp) //while(temp != 0)
	{
		i++;
		printf("In number %10d\tDigit number %d is %d (temp=%d)\n", num, i, temp % 10, temp);
		temp = temp / 10;			//temp /= 10;
	}
	printf("The number %d as %d digits (temp=%d)\n", num, i, temp);


	getchar();
	getchar();
	return 0;

	/* -- >> OUTPUT:

	Enter int number
	123
	In number        123    Digit number 1 is 3 (temp=123)
	In number        123    Digit number 2 is 2 (temp=12)
	In number        123    Digit number 3 is 1 (temp=1)
	The number 123 as 3 digits (temp=0)

	*/
}
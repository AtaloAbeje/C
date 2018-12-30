#include <stdio.h>

void main()
{
	int mispar, temp, mone = 0;
	printf("Enter until 4 nambers:\n");
	scanf("%4d", &mispar);
	temp = mispar;
	while (temp != 0)
	{
		mone++;
		mone = temp / 10;
	}
	if
		(mispar % 2 == 0)
		printf("The number is even\n");
	else
		mispar = mispar * mispar;
	printf("The number is not even\n", mispar);

	getchar();

	// Task_01, Question 3 #Atalo Abeje
}
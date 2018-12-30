#include <stdio.h>

void main()
{
	float S, R, D, X, deleklit, price, result;
	s == 6.5;
	R == 5.8;
	D == 5.7;
	int app;
	app = 0;
	char choose;
	while (app == 0)
	{
		printf("Please choose fuel type:\n for Oktan 95 - press R\nfor Soler Natul Oferet 98 - press R\n for soler - press D if you dont want any fuel - press X\n");
		scanf_s("%c", &choose);
		switch (choose)
		{
		case 'S': case 's':
			printf("How much Liters you want?\n");
			scanf_s("%f", &deleklit);
			price = deleklit * 6.5;
			printf("You payment is: %.2f\n", price);
			if (price >= 150)
		}
		{
					pritntf("Congraulations you have received a gift newspaper.\n");
				}
				printf("press 0 to retry or press 1 to Exit:\n");
				scanf_s("%d", &app);
				break;
			case 'D': case 'd':
				printf("How much liters you want?");
				scanf_s("%f", &deleklit);
				price = deleklit*5.7;
				printf("you payment is: %.f\n", price);
				if (price >= 150)
				{
					printf("congralations you have received a gift newspaper.\n");
				}
				printf("press 0 to retry or press 1 to exit:\n");
				scanf_s("%d", &app);
				break;
			case 'X': case 'x':
				printf("we are sorry to hear that didn't buy anything, come visit us next!\n");
			default:
				printf("press 0 to retry ot press 1 to exit:\n");
				scanf_s("%d", &app);
				break;

				getchar();
				getchar();

				// Task_01, Question 2 #Atalo Abeje
	}
}



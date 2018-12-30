#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#define size 10
#define word 8

int func(int choice, int i, int *new_arr);

void main()
{
	int i, mispar, choice, new_arr[size] = { 0 }, i1 = 0, i2 = 0, i3 = 0, max = 0, voters = 1;
	char *Rivales[size][word] = { { "Natan" },{ "David" },{ "Yoav" },
	{ "Shayke" },{ "Irit" },{ "Arik" },
	{ "Eliya" },{ "Matan" },{ "Lea" },{ "Lina" } };

	printf("Enter ur employ number prase -999 for EXIT from program\n");
	scanf("%d", &mispar);
	do 
	{
		printf("Enter 1 to vote for employee or 0 to past\n");
		for (i = 0; i < size; i++)
		{
			printf("[%d]", i + 1);
			printf(" %s\n", *Rivales[i]);
			printf("Enter your choice 0 or 1:\n");
			scanf("%d", &choice);

			if (choice != 0 && choice != 1) //בדיקת קלט בחירה
			{
				printf("Wrong choice!\n");
				break;
			}

			func(choice, i, new_arr);  //שליחה לעדכון הבחירה במערך
			puts("\n");
		}
		printf("Enter ur employ number prase -999 for EXIT from program\n");
		scanf("%d", &mispar);
	} while (mispar != -999);

	for (i = 0; i < size; i++) // מציאת המוביל הראשון
		if (max < new_arr[i])
		{
			max = new_arr[i];
			i1 = i;
		}
	max = 0;
	for (i = 0; i < size; i++) // מציאת המוביל השני  
		if (max < new_arr[i] && i != i1)
		{
			max = new_arr[i];
			i2 = i;
		}
	max = 0;
	for (i = 0; i < size; i++) //מציאת  המוביל השלישי
		if (max < new_arr[i] && i != i1 && i != i2)
		{
			max = new_arr[i];
			i3 = i;
		}
	printf("Number of voters: %d\n", voters);
	printf("The winners numbers: %d, %d, %d\n", i1, i2, i3);
	printf("The winners candidates: %s, %s, %s\n", *Rivales[i1], *Rivales[i2], *Rivales[i3]);

	//Atalo Abeje
	getchar();
	getchar();
}

int func(int choice, int i, int *new_arr)
{
	if (choice == 1)
		(*(new_arr + i))++;
	return 0;
}

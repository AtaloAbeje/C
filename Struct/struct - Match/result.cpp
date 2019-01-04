#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#define size 20

typedef struct Match
{
	char name[20];
	int	 age;
	char gender[10];
	char interest[30];

}Match;

void fill(Match *person)
{
	int i;
	printf("Enter details of %d persons\n", size);
	for (i = 0; i < size; i++)
	{
		printf("Enter details of person number %d: \n", i + 1);
		_flushall();
		printf("Enter name: ");
		scanf("%s", person[i].name);

		printf("Enter age: ");
		scanf("%d", &person[i].age);
		_flushall();

		printf("Enter gender: ");
		scanf("%s", person[i].gender);
		_flushall();

		printf("Enter interest: ");
		scanf("%s", person[i].interest);
	}
}
void print(Match *person)
{
	int i;
	printf("\n\nPersons details: \n");
	printf("Name\tAge\tGender\tInterest\n");
	for (i = 0; i < size; i++)
		printf("%s\t%d\t%s\t%s\n", person[i].name, person[i].age, person[i].gender, person[i].interest);
}
void chacke_match(Match *person1, Match *person2)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (strcmp(person1[i].gender, person2[0].gender) != 0 &&
			person1[i].age - person2[0].age <= 10 &&
			strcmp(person1[i].interest, person2[0].interest) == 0)
			printf("%s\t%d\t%s\t%s\n", person1[i].name, person1[i].age, person1[i].gender, person1[i].interest);
	}
}

int main()
{
	Match person1[size], person2[1];

	fill(person1);
	print(person1);

	printf("\nEnter Person for matchmaking details:\n");
	printf("=======================================\n");
	// print person 2
	fill(person1);
	print(person1);

	chacke_match(person1, person2);
	

	return 0;

	// struct --> Atalo Abeje
}
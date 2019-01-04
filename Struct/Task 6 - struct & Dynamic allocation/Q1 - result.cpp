#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#define size 10

typedef struct film
{
	char title[20], director[20];
	long budget;
	int year;

}Film;
//--------------------------title-----director----budget--year--
film allFilms[size] = { { "Skyfall","Sam Mendes",25000000,2014 },
{ "The Hunger Games","Francis Lawrence",25000000,2015 },
{ "The Hateful Eight","Quentin Tarantino",22000000,2015 },
{ "Mad Max","Sean Anders",35000000,2015 },
{ "Blood","Sam Mendes",35000000,2013 },
{ "The Martian","Ridley Scott",4500000,2015 },
{ "Spectre","Sam Mendes",15000000,2015 },
{ "The Revenant","Alejandro Gonzalez",350000000,2015 },
{ "Creed","Ryan Coogler",10000000,2015 },
{ "Star Wars","J.J. Abrams",105000000,2015 }, };
//------------------------------
void pint_films()
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("Title: \"%-17s\"\t", allFilms[i].title);
		printf("Director: %-15s\t", allFilms[i].director);
		printf("Budget: %12ld\t", allFilms[i].budget);
		printf("Year: %d\n", allFilms[i].year);

	}
}
int funFilm(char *director)
{
	int i, cnt = 0, sum = 0;
	for (i = 0; i < size; i++)
	{
		if (strcmp(director, allFilms[i].director) == 0 && allFilms[i].budget > 25000000
			&& allFilms[i].year > 2010)
		{
			printf("Title: \"%-17s\"\t", allFilms[i].title);
			printf("Director: %-15s\t", allFilms[i].director);
			printf("Budget: %12ld\t", allFilms[i].budget);
			printf("Year: %d\n", allFilms[i].year);
			cnt++;
			sum += allFilms[i].budget;
		}
	}

	if (cnt > 0)
		printf("\nNumber of director films is: %d\n", cnt);
	else
		printf("\nNo film of this director was found!!!\n");

	return (sum / cnt);
}
int main()
{
		char director[20];
		double avg;

		pint_films();

		printf("\nEnter film director for search:\n");
		_flushall();
		gets_s(director);

		avg = funFilm(director);
		if (avg > 0)
			printf("Director %s Avg films budget is: %.2lf \n", director, avg);


		getchar();
		getchar();

		return 0;
		
		// Struct, Task 6 Q1 -->  Atalo Abeje
}
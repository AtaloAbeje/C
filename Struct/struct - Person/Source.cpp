#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#define size 20
typedef struct Person
{
	char firstName[20], lastName[20];
	int ageMonth, ageYear;

}Person;

Person children[size] = { { "Dinor","Mavy",7,12 },{ "Even","Levi",3,12 },
							{ "Dina","Cohen",8,10 },{ "Sela","Mor",2,13 },
							{ "lina","Cohen",1,13 },{ "Selam","Lori",5,11 },
							{ "Minav","Gal",6,12 },{ "Lina","Beni",3,13 },
							{ "Shirkan","David",7,10 },{ "Shalev","Makush",8,10 },
							{ "Mina","Cohen",8,10 },{ "Ela","Lor",11,11 },
							{ "Rina","Cohen",9,10 },{ "Bela","Dor",3,11 },
							{ "Shiraz","Gal",4,12 },{ "Lina","Chen",11,13 },
							{ "Shirkan","David",3,10 },{ "Yoked","Kadush",7,10 },
							{ "Yoran","Berger",2,11 },{ "Yotam","Ravid",10,13 } };

void print_books()
{
	int i;
	puts("\t=======Childern Data Base======");
	puts("First name:\tLast name:\tAge Year: month:\t");

	for (i = 0; i < size; i++)
		printf("%-10s\t%-10s\t%7d\t%3d\n", children[i].firstName, children[i].lastName, children[i].ageYear, children[i].ageMonth);
	puts("==============================================");
}

void func()
{
	int i,cnt=0, min_age_year, min_age_month, sum_age_year = 0, sum_age_month = 0;
	double avg_year, avg_month;

	min_age_year = children[0].ageYear;
	min_age_month = children[0].ageMonth;

	for (i = 1; i < size; i++)
	{
		if (min_age_year < children[i].ageYear && min_age_month < children[i].ageMonth)
		{
			min_age_year = children[i].ageYear;
			min_age_month = children[i].ageMonth;
		}
		
		sum_age_year = children[i - 1].ageYear;
		sum_age_month = children[i - 1].ageMonth;

		if (children[i - 1].ageYear < 12 && children[i - 1].ageYear >= 10)
			cnt++;
	}

	// print young
	printf("\n\n1. The youngest child is %d years and %d monthes\n", min_age_year, min_age_month);

	// print avg age all childrens
	sum_age_year = sum_age_year + sum_age_month / 12;
	sum_age_month = sum_age_month - (sum_age_month / 12 * 12);
	
	avg_year = sum_age_year / size;
	avg_month = sum_age_month / size;
	printf("2. Average child age is %.2f years and %.2f monthes\n", avg_year, avg_month);


	if (cnt > 0)
		printf("3. Number of children from age 10 to age 12 is %d\n", cnt);
	else
		printf("3. Number of children from age 10 to age 12 is %d\n", cnt);

}

int main()
{
	print_books();
	func();

	getchar();
	getchar();

	return 0;
}
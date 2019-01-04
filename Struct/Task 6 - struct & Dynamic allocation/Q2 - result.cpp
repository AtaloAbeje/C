#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#define size 5
typedef struct Book
{
	char name[30], author[20];
	int image, pages, year;

}Book;

void fill_books(Book *books)
{
	int i;

	printf("Enter %d books detailes to the array:\n", size);
	for (i = 0; i < size; i++)
	{
		printf("Enter book name, author, number images, pages, year:\n");
		scanf("%s%s%d%d%d", &books[i].name, &books[i].author, &books[i].image, &books[i].pages, &books[i].year);
	}

}
void print_books(Book *books)
{
	_flushall();

	int i;
	printf("Books array detailes:\n");
	printf("Book name, author, number images, pages, year:\n");

	for (i = 0; i < size; i++)
		printf("%s %10s %5d %5d %5d\n", books[i].name, books[i].author, books[i].image, books[i].pages, books[i].year);
}
void max_page(Book *books)
{
	int i, max;
	max = books[0].pages;

	for (i = 1; i < size; i++)
	{
		if (books[i].pages > max)
			max = books[i].pages;
	}
	if (max > 0)
		printf("%s  %s  %5d %5d %5d\n", books[i].name, books[i].author, books[i].image, books[i].pages, books[i].year);

}
void max_images(Book *books)
{
	int i, max = 0;

	for (i = 0; i < size; i++)
	{
		if (books[i].year >= 1980)
		{
			if (books[i].image > max)
				max = books[i].image;
		}
	}
	if (max > 0)
		printf("%s  %s  %5d %5d %5d\n", books[i].name, books[i].author, books[i].image, books[i].pages, books[i].year);

}
void sort_by_year(Book *books)
{
	int i, j, temp;
	for (i = 0; i < (size-1); i++)
	{
		for (j = 0; j < ((size - i) - 1); j++)
		{
			if (books[j].year > books[j + 1].year)
			{
				temp = books[j].year;
				books[j].year = books[j + 1].year;
				books[j + 1].year = temp;
			}
		}
	}
	// print all after sort
	for (i = 0; i < size; i++)
		printf("%s %10s %5d %5d %5d\n", books[i].name, books[i].author, books[i].image, books[i].pages, books[i].year);
}

void sort_by_name(Book *books)
{
	int i, j;
	char temp[30];

	for (i = 0; i < (size - 1); i++)
	{
		for (j = 0; j < ((size - i) - 1); j++)
		{
			if (strcmp(books[j].name, books[j + 1].name) > 0)
			{
				strcpy(temp, books[j].name);
				strcpy(books[j].name, books[j+1].name);
				strcpy(books[j + 1].name, temp);
			}
		}
	}
	// print all after sort
	for (i = 0; i < size; i++)
		printf("%s %10s %5d %5d %5d\n", books[i].name, books[i].author, books[i].image, books[i].pages, books[i].year);
}
int main()
{
	Book books[size];

	fill_books(books);
	print_books(books);
	max_page(books);
	max_images(books);
	sort_by_year(books);
	sort_by_name(books);

	getchar();
	getchar();

	return 0;

	// struct --> Atalo Abeje
}
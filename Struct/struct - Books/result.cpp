#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#define size 3
typedef struct Book
{
	char name[30], author[20];
	int copies, year;

}Book;

void fill_books(Book *books)
{
	int i;
	
	printf("Enter %d books detailes to the array:\n", size);
	for (i = 0; i<size; i++)
	{
		printf("Enter book name, author, copies, year:\n");
		scanf("%s%s%d%d", &books[i].name, &books[i].author, &books[i].copies, &books[i].year);
	}
				
}
void print_books(Book *books)
{
	int i;
	printf("Books array detailes:\n");
	printf("Book name, Author, Copies, Year:\n");

	for (i = 0; i < size; i++)
		printf("%30s%20s%5d%5d\n", books[i].name, books[i].author, books[i].copies, books[i].year);
}
int check_book(Book *books, char *book_name)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (strcmp(book_name, books[i].name) == 0)
		{
			printf("The book is in %d shelf\n", i);
			printf("Number of copies %d\n", books[i].copies);
		}
		else
			return 0;
	}		
}

int main()
{
	Book books[size];
	char book[30];

	fill_books(books);
	print_books(books);

	printf("Enter book name for check:\n");
	gets_s(book);

	if (!check_book(books, book))
		printf("The book does not exist!");

	getchar();
	getchar();

	return 0;

	/// struct --> Atalo Abeje
}
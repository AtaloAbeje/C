#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#define size 5
typedef struct Song
{
	char name[20], singer[20];
	float time;
	int rating;
}Song;

void fill_songs(Song *arr)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("Enter name of song number %d\n", i + 1);
		_flushall();
		gets_s(arr[i].name);

		puts("Enter singer:");
		_flushall();
		gets_s(arr[i].singer);

		puts("Enter song time:");
		scanf("%f", &arr[i].time);

		puts("Enter song rating:");
		scanf("%d", &arr[i].rating);
	}
}
void print_songs(Song *arr)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("\nSong number %d\n", i + 1);
		printf("Name: %s\n", arr[i].name);
		printf("Singer: %s\n", arr[i].singer);
		printf("Time: %.2f\n", arr[i].time);
		printf("Rating: %d\n", arr[i].rating);
	}
}
void max_rating(Song *arr)
{
	int i, max = 0, index_song;

	for (i = 0; i < size; i++)
		if (arr[i].rating > max)
		{
			max = arr[i].rating;
			index_song = i+1;
		}

	if (max)
	{
		printf("The song with max rating find in place %d\n", index_song);
		printf("Name: %s\n", arr[i].name);
		printf("Singer: %s\n", arr[i].singer);
		printf("Time: %.2f\n", arr[i].time);
		printf("Rating: %d\n", arr[i].rating);
	}
}
int main()
{
	Song arr[size];
	fill_songs(arr);
	print_songs(arr);
	max_rating(arr);

	getchar();
	getchar();

	return 0;

	// struct --> Atalo Abeje
}
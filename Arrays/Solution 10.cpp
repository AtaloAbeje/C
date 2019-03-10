#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
void infunc(int arr1[])
{
	int i;
	for (i=0;i<SIZE;i++)
		arr1[i]=rand()%100+2;
}
void printarray(int arr[])
{
	int i;
	for (i = 0; i<SIZE; i++)
		printf("%5d", arr[i]);
	printf("\n");
}
int prime(int num)
{
	int mis=2;
	while (num % mis != 0) 
    	   mis=mis+1;// mis++;
	if (mis == num)
		return 1;
	else
		return 0;
}
int checkarray(int arr1[],int arr2[])
{
	int i;
	for (i = 0; i < SIZE; i++)
		if (prime(arr1[i]))//prime(arr1[i] == 1)
			arr2[i] = arr1[i];
	return 0;
}

int main()
{
	int numarr[SIZE], primearr[SIZE] = { 0 };
	srand(time(NULL));
	infunc(numarr);
	printf("Original Array:\t");
	printarray(numarr);
	checkarray(numarr,primearr);
	printf("Prime Array:\t");
	printarray(primearr);
	return 0;
}
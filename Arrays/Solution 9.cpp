#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define SIZE 10

//Input numbers
int init(int arr[])
{
	int i;
	for(i = 0; i < SIZE; i++)
		arr[i]=rand()%100;
	printf("The array is full with numbers !!!\n");
	return 0;
}

//Max in array
int max(int arr[])
{
	int i,max_place=1,max=arr[0];
	for(i = 1; i < SIZE; i++)
		if (arr[i]>max)
		{
			max=arr[i];
			max_place = i+1;
		}
printf("The biggest number is %d in place %d\n",max,max_place);
return 0;
}

//Min in array
int min(int arr[])
{
	int i,min_place=1,min=arr[0];
	for(i = 1; i < SIZE; i++)
		if (arr[i]<min)
		{
			min=arr[i];
			min_place=i+1;
		}
	printf("The smallest number is %d in place %d\n",min,min_place);
return 0;
}

//Sum array
int sum(int arr[])
{
	int i,sum=0;
	for(i=0 ; i<SIZE ; ++i)
		sum+=arr[i];
	printf("Sum of array is %d\n", sum);
	return 0;
}

//Array Avg 
int avg(int arr[])
{
	int i,sum=0;
	for(i=0 ; i<SIZE ; ++i)
		sum+=arr[i];
	printf("Avg of array is: %d\n", sum/SIZE);
	return 0;
}

//Print array
int print(int arr[])
{
	int i;
	for(i=0;i<SIZE;i++)
		printf("%2d) %4d\n",i+1,arr[i]);
	return 0;
}

//Main Menu
int menu(int arr[])
{
	char ch;
	for(;;)
	{
		puts("====Program menu===");
		printf("1) Init array\n");
		printf("2) Print array\n");
		printf("3) Max array\n");
		printf("4) Min array\n");
		printf("5) Sum array\n");
		printf("6) Avg array\n");
		printf("7) Exit program\n");
		puts("==================");
		flushall();
		printf("Enter your choice:\n");
		ch=getchar();
		switch(ch)
		{
		case '1':	init(arr); 
		break;
		case '2':	puts("==Array Numbers==");
					print(arr); 
					puts("=================");
		break;
		case '3':	max(arr);
		break;
		case '4':	min(arr);
		break;
		case '5':	sum(arr);
		break;
		case '6':	avg(arr);
		break;
		case '7':	return 0;
		break;
		}
	getch();
	system("CLS");
	}
	return 0;
}

int main()
{
	int num[SIZE];
	srand(time(NULL));
	menu(num);
	return 0;
}
















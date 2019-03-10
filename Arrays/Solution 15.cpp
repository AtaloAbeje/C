#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ROW 3
#define COLUMN 3

void fillarr(int arr[][COLUMN])
{
	int i,j;
	for(i=0;i<ROW;i++)
		for(j=0;j<COLUMN;j++)
			arr[i][j]=rand()%100;
}


void functemp(int arr[][COLUMN],int temp[][COLUMN])
{
	int i,j;
	for(i=0;i<ROW;i++)
		for(j=0;j<COLUMN;j++)
			temp[i][j]=arr[i][j];
}

void funcRecomnination(int arr[][COLUMN])
{
	int i=0,j=0,temp;
	for(i=0;i<ROW;i++)
		for(j=i;j<COLUMN;j++)
		{
			if(i!=j)
			{
				temp=arr[i][j];
				arr[i][j]=arr[j][i];
				arr[j][i]=temp;
			}
		}
}
int checkmatrix(int arr[][COLUMN],int temp[][COLUMN])
{
	int i,j;
	for(i=0;i<ROW;i++) 
      for(j=0;j<COLUMN;j++)
		if(arr[i][j]!=temp[i][j])
			return 0;
	return 1;
}

void printarray(int arr[][COLUMN])
{
	int i,j;
	for(i=0;i<ROW;i++) 
	{
      for(j=0;j<COLUMN;j++)
          printf("%4d",arr[i][j]);
     printf("\n");
    }
}

int main()
{
	int arr[ROW][COLUMN],temp[ROW][COLUMN];
	srand(time(NULL));
	fillarr(arr);
	functemp(arr,temp);
	printf("Original Matrix arr:\n");
	printf("=========================\n");
	printarray(arr);
	printf("=========================\n");
	funcRecomnination(arr);
	printf("\nRecomnination Matrix arr:\n");
	printf("=========================\n");
	printarray(arr);
	printf("=========================\n");
	printf("\nMatrix temp:\n");
	printf("=========================\n");
	printarray(temp);
	printf("=========================\n");
	if(checkmatrix(arr,temp))
		printf("The arrays are symmetrical!!!\n");
	else
		printf("The arrays are not symmetrical!!!\n");
  getch();
return 0;
}

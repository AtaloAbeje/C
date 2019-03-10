#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 5
#define COLUMN 5

float evenRows(int mat[][COLUMN])
{
	int i,j,cnt=0;
	float sum=0,avg;
	for(i=0;i<ROW;i+=2) 
      for(j=0;j<COLUMN;j++,cnt++)
		  sum+=mat[i][j];
	avg=sum/cnt;
	return avg;
}

float oddColumns(int mat[][COLUMN])
{
	int i,j,cnt=0;
	float sum=0,avg;
	for(i=0;i<ROW;i++) 
      for(j=1;j<COLUMN;j+=2,cnt++)
		  sum+=mat[i][j];
	avg=sum/cnt;
	return avg;
}

float firstDiagonal(int mat[][COLUMN])
{
	int i,j,cnt=0;
	float sum=0,avg;
	for(i=0;i<ROW;i++) 
      for(j=0;j<COLUMN;j++)
		  if(i == j)
		  {
			sum+=mat[i][j];
			cnt++;
		  }
	avg=sum/cnt;
	return avg;
}

float secondDiagonal(int mat[][COLUMN])
{
	int i,j,cnt=0;
	float sum=0,avg;
	for(i=0;i<ROW;i++) 
      for(j=0;j<COLUMN;j++)
		  if(i+j == COLUMN-1)
		  {
			sum+=mat[i][j];
			cnt++;
		  }
	avg=sum/cnt;
	return avg;
}
float printMatarix(int mat[][COLUMN])
{
	int i, j;
	puts("matay:");
	for (i = 0; i<ROW; i++)
	{
		for (j = 0; j<COLUMN; j++)
			printf("%4d", mat[i][j]);
		printf("\n");
	}
	return 0;
}

int main()
{
	int mat[ROW][COLUMN];
	int i,j;
	srand(time(NULL));
	for(i=0;i<ROW;i++) 
      for(j=0;j<COLUMN;j++)
          mat[i][j]=rand()%100;
	 printMatarix(mat);
	 printf("The avg of even rows is %.2f\n",evenRows(mat));
	 printf("The avg of odd columns is %.2f\n",oddColumns(mat));
	 printf("The avg of first diagonal is %.2f\n",firstDiagonal(mat));
	 printf("The avg of second diagonal is %.2f\n",secondDiagonal(mat));
	 getch();
	return 0;
}

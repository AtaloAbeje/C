#include<stdio.h>
#define SIZE 10

void fillarr(int arr[])
{
	int i;
	printf("Enter %d integer numbers\n",SIZE);
	for(i=0;i<SIZE;i++)
		scanf("%d",&arr[i]);
}

void printarr(int arr[])
{
	int i;
	printf("\nArray %d integer numbers:\n",SIZE);
	for(i=0;i<SIZE;i++)
		printf("%3d",arr[i]);
}

void func(int arr[], int brr[], int crr[])
{
	int i,j=0,k=0;

	for(i=0;i<SIZE;i++)
	{
		if(arr[i] < 0)
		{
			brr[j]=arr[i]; //j++
			j++;
		}
		else
		{
			crr[k]=arr[i]; //k++
			k++;
		}
	}
}

void printarrays(int arr[],int brr[],int crr[])
{
	int i;
	printf("\n3 Arrays numbers:\n");
	for(i=0;i<SIZE;i++)
		printf("Arr[%2d]=%3d\tBrr[%2d]=%3d\tCrr[%2d]=%3d\n",i,arr[i],i,brr[i],i,crr[i]);
}

void main()
{
	int i,arr[SIZE]={0},brr[SIZE]={0},crr[SIZE]={0};
	fillarr(arr);
	printarr(arr);
	func(arr,brr,crr);
	printarrays(arr,brr,crr);
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#define SIZE 10
void fillarr(int arr[]) // ������� ������ �� ���� ����� ������� ���������
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		if (i % 2 == 0)
			arr[i] = rand() % 100;
		else
			arr[i] = rand() % (99 + 1) *-1; //����� ������� �� ���� 0 
	}
	printf("arr is: \n");
	for (i = 0; i < SIZE; i++)
		printf("%4d,", arr[i]);
}

void even_odd(int arr[], int brr[]) //������� ������ ������ ������ ���� ��� �� ������� �������
{
	int i=0, j=0;
	puts("\n--------------------------------------------------");
	printf("brr is: \n");
	for (i = 0; i < SIZE; i++)
		if (arr[i] < 0) 
		{
			brr[j++] = arr[i];
			//j++;  ���� �
		}
	for (i = 0; i < SIZE; i++)
		if (arr[i] >= 0)
		{
			brr[j++] = arr[i];
			//j++;  ���� �
		}
		for (i = 0; i < SIZE; i++) // ����� �� ����� ���� ������ ������� = ������ ���� ��� �������
			printf("%4d,", brr[i]);	
}

void big_arr(int arr[], int brr[], int crr[]) // ������� ������ ��� ���� ��� 2 �������
{
	int i = 0, j = 0;
	puts("\n--------------------------------------------------");
	printf("crr is: \n");
	for (i = 0; i < SIZE; i++)
	{
		if (arr[i] > brr[i])
			crr[i] = arr[i];
		else
			crr[i] = brr[i];
	}
	for (i = 0; i < SIZE; i++)
	{
		if (arr[i] == brr[i])
			crr[i] = 0;
		printf("%4d,", crr[i]); //����� ����� ���� = ������ ��� ������ ��� 2 �������
	}
	puts("\n--------------------------------------------------");
}
void main()
{
	int arr[SIZE], brr[SIZE], crr[SIZE];
	srand(time(NULL));

	fillarr(arr); // ������� ������ ���� 1 �-10 ������ ���������
	even_odd(arr, brr); // ������� ������ ������ ������ �������
	big_arr(arr, brr, crr); // ������� ������ ���� ��� ���� ��� ���� 1 �-2

	getchar();
	getchar();

	//Atalo Abeje!!
}

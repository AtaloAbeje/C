#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <conio.h>
#define SIZE 10 // ���� ��� ����� ��� �� ����� �� �����

void scan(int arry[])
{
	int i;
	printf("ur 10 numbers for array:\n");
	for (i = 0; i < SIZE; i++)
		arry[i] = rand() % 100;

	for (i = 0; i < SIZE; i++)
		printf("%d, ", arry[i]);
}

void NEW_arry(int arry[])
{
	int i = 0, j = 0, temp;
	for (i = 0; i < SIZE; i++)
	{
		temp = arry[i++]; //���� ����� �� ���� ������
		arry[j++] = arry[i]; //����� ���� ��� ������ ������
		arry[j++] = temp;
	}
}

void print(int arry[])
{
	int j;
	puts("\n======================================");
	printf("ur new array is:\n");
	for (j = 0; j < SIZE; j++)
		if (j < SIZE)
			printf("%d, ", arry[j]);
		else
			printf("%d. ", arry[j]);
}

void main()
{
	int arry[SIZE] = { 0 };
	srand(time(NULL));
	scan(arry);
	NEW_arry(arry); // ������� ������ ������ �� ������
	print(arry); //������� ������ ����� ����

	getchar();
	getchar();
	//Atalo Abeje!!
}

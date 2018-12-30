#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<conio.h>
#define SIZE 10

void fillarry(int arry[]) //����� ������ ��������� ������ �������
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		if (i % 2 == 0)
			arry[i] = rand() % 100; //����� ����� �-10 ������ ������ ������� ������
		else
			arry[i] = rand() % 100 * -1;
	}
	printf("ur array is: \n");
	for (i = 0; i < SIZE; i++)
		printf("%d, ", arry[i]);
}

int value_arry(int arry[]) // ������� ������ ������ �� ���� �����
{
	int i, temp=0;
	for (i = 0; i < SIZE; i++)
	{
		if (arry[0] == arry[i]) 
			temp++; //cnt = cnt + 1; ���� �
			if (temp == i)
				return 1;
			else
				return 0;
	}
}

int prime(int arry[]) // ������� ������ ���� ������
{
	int i, temp = 2, cnt = 0;
	puts("---------------------------------");
	printf("Prime numbers is: \n");
	for (i = 0; i < SIZE; i++)
	{
		if (arry[i] == 1)
			cnt++;
		else
		{ 
			while (arry[i] % temp != 0) //����� ���� ������
				temp++;

			if (arry[i] == temp)
			{
				printf("%d, ", temp);
				cnt++;
			}
		}
		temp = 2; //����� ������ ���� ������ ��� = �����
	}
	if (cnt)
		return 1;
	else
		return 0;
}

void pow_sqrt(int arry[]) //������� ������ ������ ������ ������� ������ ���� �� ����
{
	int i;
	puts("---------------------------------");
	for (i = 0; i < SIZE; i++)
	{
		if (arry[i] < 0) // ����� ������ ������ = ���� ����
		{
			arry[i] = arry[i] * -1; // ����� ����� ����� ��� ������ � - 1
			printf("%d) value:  %d\t shorsh:  %.2f \n", i + 1, arry[i], sqrt((float)arry[i]));
			//����� �� ������ ����� ����� ������� ����
		}
		else
		{
			// ����, ������ ���� �������� �������
			printf("%d) value:  %d\t hezka:  %.2f \n", i + 1, arry[i], pow((float)arry[i],2));
		}	
	}
}
void main()
{
	int arry[SIZE];
	srand(time(NULL)); //����� ������  ���������
	fillarry(arry); // ����� ���� �-10 ������ �� ��� ����� �� �����
	puts("\n-------------------------------------------");

	if (value_arry(arry)) // ����� ���� �����
		printf("The numbers are the same !!!\n");
	else
		printf("\nThe numbers are not the same !!!\n");	
	//
	if (prime(arry)) // ����� ���� ������
		printf("\nYES! we found prime numbers !!!\n");
	else
		printf("\nohh! :( WE did NOT found prime numbers !!!\n");
	//
	pow_sqrt(arry);

	getchar();
	getchar();

	//Atalo Abeje!!
}
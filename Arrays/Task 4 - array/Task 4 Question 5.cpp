#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<conio.h>

#define SIZE 13

void fillarr(int digits[]) //����� �-10 ������ ���������
{
	int i;
	for (i = 0; i < SIZE; i++)
		digits[i] = rand() % 10;

	for (i = 0; i < SIZE; i++) // ����� �� ����� digits �� ������ ���������
		printf("%d, ", digits[i]);
}

int find(int digits[], int L[], int tmp)
{
	int i, j = 0, sum, max=0, max2=0;
	
	for (i = 1; i < SIZE; i += 2) // ���� �� ����� �-2 ��� ���� ���� �� ���� ������
	{
		L[j++] = (digits[i - 1] * 10) + digits[i]; // ����� �� ����� ������ �-1 �-10 ����� �� ���� ���
		//j++; ���� �
	}

	if (SIZE % 2 != 0) //����� ������ ���� ����� �� �� ���� ������ �-10
	{
		L[j] = digits[SIZE - 1] * 10; 
	}

	for (i = 0; i < tmp; i++) //������ �� ����� ����
		printf("%d, ", L[i]);
	puts("\n---------------------------");

	for (i = (SIZE/2); i > 0; i--) // ����� ������� ��� �� ��� ���� ������ �����
	{
		sum = abs(L[i] - L[i - 1]);
		if (sum > max)
		{
			max = sum;
			max2 = L[i];
		}
	}
	return max2;
}

void main()
{
	int digits[SIZE], tmp = SIZE / 2, L[SIZE];
	if (SIZE % 2 != 0) //���� ���� �� ���� ����� ����
	{
		tmp = (SIZE / 2) + 1; //����� ������ �� ���� (13) ���� ���� �-2 ������ �� �� ���� ����� ���� ������ �� 0
		L[tmp];
	}
	else
		L[tmp];

	srand(time(NULL));
	printf("ur arr is:\n");
	fillarr(digits);
	puts("\n-------------------------------------");
	printf("ur new arr is:\n");
	printf("The max diff is from number %d\n", find(digits,L, tmp));

	getchar();
	getchar();

	// Atalo Abeje
}

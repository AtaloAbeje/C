#include <stdio.h>

void main()
{
	int *arr, a[10], *b, c[3][5], *d[10], e, *q, i;
	arr = &i;
	arr = a;
	a = arr;            // �� ����� ��������� �� �� ���� ������ ����� �� ����� ������ �� ����
	q = arr = d[0];
	arr = c[2];
	b = c;           // �� ����� ��������� �� �� ���� ������ ����� �� ���� �� ���� ������
	a[7] = *(*(c + 2) + 3);
	*a = 2 + &b;		    // �� ����� ��������� �� �� ���� ������ ����� �� ����� ����� ����� �����
	a[5] = q[0];
	*q = *a;
	q = a++;			 // �� ����� ��������� �� �� ���� ���� �� �� ���� ��� ����
	a = b;			    // �� ����� ��������� �� �� ���� ������ ������ ����� ����� �� �����
	b = a + 3;
	a = *b;           // �� ����� ��������� �� �� ���� ������ ��� �� ����� ���� ����� �� ����
	b = &e;
	*b = *a;
	b = c[3];
	b = &a;       // �� ����� ��������� �� �� ���� ������ �� ����� ������ �� ����� ���� ����� ���� 
	*a = *b;
}

void main()
{
	int a, *b, c[4];
	*(c + 3) = 8;
	a = *(c + *b);
	*(c++) = 12;  // �� ����� ���������
	c = b;       // �� ����� ���������
	b = c;
	a = (*c)++;
	*(b + 1) = (*c)++;
	a = *b - *c;
	*c = *(b++);
	*(b++) = *(&a);
	*b == 2 = a;    // �� ����� ���������
	c[3] = *b == 2;
}

// Atalo Abeje
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#define size 3
#define gred 3

typedef struct student
{
	char name[20], department[30];
	float grades[10]; 

}Student;

void fill_students(Student *students)
{
	int i, j;
	
	for (i = 0; i < size; i++)
	{
		_flushall();
		printf("Enter student number %d name\n", i + 1);
		scanf("%s", students[i].name);

		printf("Enter department:\n");
		scanf("%s", (students[i].department));

		_flushall();
		printf("Enter %d grades for student %d:\n", gred, i+1);
		for (j = 0; j < gred; j++)					// 3 grades for 1 student
		{
			printf("grad: %d\n", j + 1);
			scanf("%f", &students[i].grades[j]);
		}
			
	}
}
void print_students(Student *students)
{
	int i, j;
	for (i = 0; i<size; i++)
	{
		printf("Student Name: %10s ", students[i].name);
		printf("Department: %15s \n", students[i].department);

		for (j = 0; j<gred; j++)
			printf("Student grades: %.2lf\n", students[i].grades[j]);
	}
}
void average(Student *students, char *dep)
{
	int i, j, k = 0, cnt = 0;
	double arr_avg[size] = { 0 };
	double sum = 0, avg, avgmin, avgmax, indexmin, indexmax, sum_math = 0;

	for (i = 0; i < size; i++)
	{
		if (strcmp(students[i].department, dep) == 0)
		{
			printf("name student: %s\n", students[i].name);
			for (j = 0; j < gred; j++)
				sum += students[i].grades[j];
			avg = sum / gred;

			printf("average: %.2lf \n", avg);
			cnt++;
			sum = 0;
		}
		arr_avg[k++] = avg;
	}
	printf("name of study in department Mechanical Eng %d\n", cnt);
	sum = 0;
	cnt = 0;

	avgmax = arr_avg[0];
	for (j = 1; j < size; j++) //maximum avg 
		if (arr_avg[i] > avgmax)
		{
			avgmax = arr_avg[i];
			indexmax = i;
		}
			

	avgmin = arr_avg[0];
	for (j = 1; j < size; j++) //minmum avg 
		if (arr_avg[i] < avgmax)
		{
			avgmax = arr_avg[i];
			indexmin = i;
		}

	for (i = 0; i<size; i++)
		if (indexmax == i)
			printf("Student with max avg: %s, maxavg: %.2lf\n", students[i].name, avgmax);

	for (i = 0; i<size; i++)
		if (indexmin == i)
			printf("Student with minavg: %s, minavg: %.2lf\n", students[i].name, avgmin);

	for (i = 0; i<size; i++)
		sum_math += students[i].grades[1];

	printf("Average math grade is: %.2lf\n ", (sum_math / size)); 
}
int main()
{
	student students[size];
	char department[30] = "Mechanical Eng";

	fill_students(students);
	print_students(students);
	average(students, department);

		
	getchar();
	getchar();

	return 0;
}
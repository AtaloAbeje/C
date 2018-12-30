#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define size 10

void dollar_update(float *dollar, float percent); //  הצהרה על פונקציה

void main()
{
	float dollar = 3.8, percent, sum_today=0, sum_in_10_days=0;
	int mis, i;
	printf("Enter dollars\n");
	scanf("%d", &mis);

	printf("Enter dollar's today\n"); //קליטה של שער הדולר היומי
	scanf("%f", &percent);

	dollar_update(&dollar, percent); //עדכון ערך הדולר ביום הרכישה
	sum_today = mis*dollar;

	for (i = 0; i < size; i++) //ללואה שקולטת דולרים ל-10 ימים 
	{
		printf("Enter percent change in the exchange USD rate day %d\n", i + 1);
		scanf("%f", &percent);
		dollar_update(&dollar, percent);
	}

	sum_in_10_days = mis*dollar; //חישוב סכום הקנייה בעוד 10 ימים
	printf("The difference between the two purchases: %.2f\n", sum_in_10_days - sum_today);

	//Atalo Abeje
	getchar();
	getchar();
}

void dollar_update(float *dollar, float percent)
{
	*dollar += (*dollar*(percent / 100));
}

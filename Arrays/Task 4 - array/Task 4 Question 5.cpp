#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<conio.h>

#define SIZE 13

void fillarr(int digits[]) //מילוי ב-10 מספרים רנדומליים
{
	int i;
	for (i = 0; i < SIZE; i++)
		digits[i] = rand() % 10;

	for (i = 0; i < SIZE; i++) // הדפסה של המערך digits עם מספרים רנדומליים
		printf("%d, ", digits[i]);
}

int find(int digits[], int L[], int tmp)
{
	int i, j = 0, sum, max=0, max2=0;
	
	for (i = 1; i < SIZE; i += 2) // מקדם את הזקיף ב-2 כדי לחבר אותו עם הערך הקודמו
	{
		L[j++] = (digits[i - 1] * 10) + digits[i]; // מכפיל את המספר במיקום ה-1 ב-10 ומחבר עם הערך הבא
		//j++; שקול ל
	}

	if (SIZE % 2 != 0) //במידה והמערך זוגי נכפיל רק את הערך האחרון ב-10
	{
		L[j] = digits[SIZE - 1] * 10; 
	}

	for (i = 0; i < tmp; i++) //הדפסקה של המערך החדש
		printf("%d, ", L[i]);
	puts("\n---------------------------");

	for (i = (SIZE/2); i > 0; i--) // בדיקת ההפרשים בין כל שני תאים סמוכים במערך
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
	if (SIZE % 2 != 0) //בודק תנאי אם גודל המערך זוגי
	{
		tmp = (SIZE / 2) + 1; //במידה והמערך אי זוגי (13) מחלק אותו ל-2 ומוסיף לו תא נוסף בשביל הערך האחרון עם 0
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

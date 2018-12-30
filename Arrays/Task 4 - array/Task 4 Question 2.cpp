#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<conio.h>
#define SIZE 10

void fillarry(int arry[]) //קליטת מספרים רנדומליים חיובים ושלילים
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		if (i % 2 == 0)
			arry[i] = rand() % 100; //מילוי המערך ב-10 מספרים חיובים ושלילים אקראים
		else
			arry[i] = rand() % 100 * -1;
	}
	printf("ur array is: \n");
	for (i = 0; i < SIZE; i++)
		printf("%d, ", arry[i]);
}

int value_arry(int arry[]) // פונקציה לבידקת שיויון של ערכי המערך
{
	int i, temp=0;
	for (i = 0; i < SIZE; i++)
	{
		if (arry[0] == arry[i]) 
			temp++; //cnt = cnt + 1; שקול ל
			if (temp == i)
				return 1;
			else
				return 0;
	}
}

int prime(int arry[]) // פונקציה לבדיקת מספר ראשוני
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
			while (arry[i] % temp != 0) //בדיקת מספר ראשוני
				temp++;

			if (arry[i] == temp)
			{
				printf("%d, ", temp);
				cnt++;
			}
		}
		temp = 2; //החזרת המשתנה לערך המקורי שלו = איפוס
	}
	if (cnt)
		return 1;
	else
		return 0;
}

void pow_sqrt(int arry[]) //פונקציה לבידקת מספרים שלילים וחיובים והוצאת חזקה או שורש
{
	int i;
	puts("---------------------------------");
	for (i = 0; i < SIZE; i++)
	{
		if (arry[i] < 0) // מציאת מספרים שלילים = מתחת לאפס
		{
			arry[i] = arry[i] * -1; // הפיכת למספר חיובי בכך שנכפיל ב - 1
			printf("%d) value:  %d\t shorsh:  %.2f \n", i + 1, arry[i], sqrt((float)arry[i]));
			//נהפוך את הערכים לפלוט בשביל להוציאי שורש
		}
		else
		{
			// אחרת, נוציאי חזקה מהמספרים החיובים
			printf("%d) value:  %d\t hezka:  %.2f \n", i + 1, arry[i], pow((float)arry[i],2));
		}	
	}
}
void main()
{
	int arry[SIZE];
	srand(time(NULL)); //קליטה מספרים  רנדומליים
	fillarry(arry); // מילוי מערך ב-10 מספרים או לפי הגודל של המערך
	puts("\n-------------------------------------------");

	if (value_arry(arry)) // בדיקת ערכי המערך
		printf("The numbers are the same !!!\n");
	else
		printf("\nThe numbers are not the same !!!\n");	
	//
	if (prime(arry)) // חיפוש מספר ראשוני
		printf("\nYES! we found prime numbers !!!\n");
	else
		printf("\nohh! :( WE did NOT found prime numbers !!!\n");
	//
	pow_sqrt(arry);

	getchar();
	getchar();

	//Atalo Abeje!!
}
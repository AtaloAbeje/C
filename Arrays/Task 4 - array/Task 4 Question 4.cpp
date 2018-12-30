#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

void str_num(char str1[]);
int to_flip(char str2[]);
void without_char(char str3[], char let);

void main()
{
	char let = 'H';
	char str1[] = "a2$3^7";
	char str2[] = "7785";
	char str3[] = "Hello How are you?";

	printf("ur string number 1 is: \t%s\nur string number 2 is: \t%s\nur string number 3 is: \t%s \n", str1, str2, str3);
	puts("------------------------------------------");
	
	str_num(str1); //פונקציה להוצאת והדפסת תו לפי כמות המספר שמופיע אחריו
	printf("\nur new digit number from string is:\t");
	printf("%d\n", to_flip(str2)); //פונקציה להחזרת המספרים שמופיעים במחרוזת
	without_char(str3, let); //פונקציה להסרת אות מהמחרוזת

	getchar();
	getchar();
	//Atalo Abeje
}

void str_num(char str1[])
{
	int num, i, j;
	printf("ur new string is:\t");
	for (i = 0; i < strlen(str1); i += 2) //קידום הלולאה בשתיים על מנת להגיע למספר שבמחרוזת 

		for (j = 0; j < (str1[i + 1]) - 48; j++) //הדפסת האות לפי מספר הפעמים שמופיעה לידה
			printf("%c", str1[i]);
}

int to_flip(char str2[])
{
	int num = 0;
	num = atoi(str2); //פונקציה להפיכת מחרוזת למספר שלם
	return num; //החזרת הערך לפונקציה
}

void without_char(char str3[], char let)
{
	int i, j = 0;
	for (i = 0; i <= strlen(str3) - 1; i++) //לולאה שרצה על כל המרוזת עד לזקיף

		if (str3[i] != let && str3[i] != toupper(let) && str3[i] != tolower(let))//תנאי הבודק האם האות שהוכנסה גדולה או קטנה מופיעה במחרוזת אם לא הכנסה של האותיות חזרה למחרוזת מתחילתה
			str3[j++] = str3[i];
	str3[j] = 0;

	printf("ur new string without the letter %c is:\t %s\n", let, str3);
}

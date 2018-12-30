#include <stdio.h>
void main()
{
	float km, kmph, time;
	printf("Enter distance from your destination: (km)\n");
	scanf("%d", &km);
	time = km * 60 / kmph;
	printf("Enter the speed: (km/h)\n");
	scanf_s("%d", &kmph);
	printf("your travel time is: %d\n", time);
	
	
	getchar();
	// Task_01, Question 1 #Atalo Abeje
}


//Num of even numbers from 112 to 341
#include <stdio.h>
#include <conio.h>
void main()
{
	 int i=112,cnt=0;
	 while(i <= 341)
	 {
		 if (i % 2 == 0)
		 {
			 cnt++;
			 printf("%d) %d\n", cnt, i);
		 }
		i++;
	 }
	 printf("Num of even numbers from %4d to %4d is %4d\n",112, 341,cnt);
	 getch();
}
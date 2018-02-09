#include <stdio.h>
#include<conio.h>
int main(void)
{
int s,t;
clrscr();
printf("\n enter 2 numbers");
scanf("%d %d",&s,&t);
printf("\n numbers before swapping %d %d",s,t);
s=s^t;
t=s^t;
s=s^t;
printf("\n the swapped numbers are %d %d",s,t);
	return 0;
}

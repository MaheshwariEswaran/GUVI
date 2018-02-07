#include <stdio.h>
#include<conio.h>
int main(void) 
{
int x,y,z;
clrscr();
printf("\n enter 2 numbers:");
scanf("%d %d",&x,&y);
z=x*y;
if(z%2==0)
{
	printf("\n num is even");
}
else
{
	printf("\n num is odd");
}
	return 0;
}

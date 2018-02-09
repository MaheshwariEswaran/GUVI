#include <stdio.h>
#include<conio.h>
int main(void)
{
int u,v,y;
clrscr();
printf("\n enter two numbers:");
scanf("%d %d",&u,&v);
printf("\n numbers before swapping %d %d",u,v);
y=u;
u=v;
v=y;
printf("\n numbers after swapping are %d %d",u,v);
	return 0;
}

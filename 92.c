#include <stdio.h>
#include<conio.h>
int main(void)
{
int s,h[100],t,sum=0;
clrscr();
printf("\n enter the limit");
scanf("%d",&s);
printf("\n enter the numbers");
for(t=0;t<s;t++)
{
	scanf("%d",&h[t]);
}
printf("\n the sum value is");
for(t=0;t<s;t++)
{
	sum=sum+h[t];
}
printf("%d",sum);
	return 0;
}

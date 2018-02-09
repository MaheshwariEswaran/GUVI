#include <stdio.h>
#include<conio.h>
int main(void)
{
int s,t,first=0,second=1,sum;
clrscr();
printf("\n enter the limit");
scanf("%d",&s);
printf("\n the fibonacci series is");
for(t=0;t<s;t++)
{
	sum=first+second;
	first=second;
	second=sum;
	printf("\t %d",f);
}	return 0;
}

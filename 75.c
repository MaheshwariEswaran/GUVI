#include <stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
	char w[10];
	int t,x;
	printf("\n enter the string");
	scanf("%s",&w);
	x=strlen(w);
	if(x%2==0)
	{
		for(t=0;t<=x;t++)
	{
		if(t<((x/2)-1))
		printf("%c",w[t]);
		if(t==(x/2))
		printf("*");
		if(t==((x/2)-1))
		printf("*");
		if(t>=((x/2)+1))
		printf("%c",w[t]);
	}
	}
	if(x%2!=0)
	{
for(t=0;t<=x;t++)
		{
if(t<(x/2))
printf("%c",w[t]);
if(t==x/2)
printf("*");
	if(t>(x/2))
	printf("%c",w[t]);
	}
	}
	return 0;
}

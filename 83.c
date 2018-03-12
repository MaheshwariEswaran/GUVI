#include <stdio.h>
#include<conio.h>
int main(void) 
{
int p[10],q[10],i,n;
char x[10];
printf("\n enter the number of sets");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d %c %d",&p[i],&c[i],&q[i]);
}
for(i=0;p[i]!='\0';i++)
{
	if(x[i]=='/')
	{
		printf("\n%d is the division value\n",p[i]/q[i]);
	}
	if(x[i]=='%')
	{
		printf("%d is the modulo value\n",p[i]%q[i]);
	}
}
	return 0;
}

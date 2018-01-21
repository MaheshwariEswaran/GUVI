#include<stdio.h>
#include<coni.h>
void main()
{
int a,b,c;
b=4;
c=10;
printf("an odd numbers are");
scanf("%d%d",&b,&c);
for(a=b;a<=c;a++)
{
if(a%2==1)
printf("%d",a)
}
}

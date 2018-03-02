#include<stdio.h>
#include<conio.h>
int main()
{
int b,s,i,c=0;
printf("enter the number:\n");
scanf("%d",&b);
while(b!=0)
{
s=b%10;
c=(c*10)+s;
b=b/10;
}
printf("\n the odd numbers are");
while(c!=0)
{
i=c%10;
if(i%2!=0)
{
printf("\n %d\t",i);
}
c=c/10;
}return 0;
}

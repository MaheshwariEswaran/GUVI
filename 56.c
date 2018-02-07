#include<stdio.h>
#include<conio.h>
void main()
{
char x[100];
int t,i,count=0,flag=0;
printf("\n enter no. of strings");
scanf("%d",&i);
printf("\n enter the string");
for(t=0;t<=i;t++)
{
scanf("%s",&x[i]);
}
for(t=0;t<=i;t++)
{
if((x[t]>='A'&&x[t]<='Z')||(x[t]>='x'&&x[t]<='z'))
{
count++;
}
if(x[t]>='0'&&x[t]<='9')
{
flag++;
}
}
if(count>0&&flag>0)
{
printf("\n Both alphabets and numbers");
}
else
{
printf("\n Not both alphabets and numbers");
}
}

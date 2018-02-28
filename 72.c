#include<stdio.h>
#include<conio.h>
int main()
{
char x[10],t,count=0;
printf("\n Enter the string:");
scanf("%s",&x);
for(t=0;t<10;t++)
{
if(x[t]=='x'|| x[t]=='e'||x[t]=='t'||x[t]=='o'||x[t]=='u')
{
	count++;
}
}
if(count>0)
{
printf("\n has vowel.");
}
else
{
printf("\n has no vowel.");
}
return 0;
}

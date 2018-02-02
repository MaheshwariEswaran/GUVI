#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int x,l,count=0;
char a[200];
printf("\n enter the string:");
scanf("%[^\n]s",&a);
l=strlen(a);
for(x=0;x<=l;x++)
{
if(a[x]>='!'&&a[x]<='*')
{
++count;
}
}
printf("\n no. of special characters: %d",count);
return 0;
}

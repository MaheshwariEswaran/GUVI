#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int s,w,count=0;
clrscr();
char a[1000];
printf("enter sentence:\n");
scanf("%[^\n]s",&w);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count=count+1;
w=1+count;
}
}
{
printf("no.of word: %d",w);
}
return 0;
}

#include <stdio.h>
#include<conio.h>
#include<string.h>
int main(void) 
{
char a[100];
int l,t;
clrscr();
printf("\n enter the string");
scanf("%[^\n]s",&a);
l=strlen(a);
printf("\n the numbers is given string are");
for(i=0;i<l;i++)
{
if(a[t]==0||a[t]==1||a[t]==2||a[t]==3||a[t]==4||a[t]==5||a[t]==6||a[t]==7||a[t]==8||a[t]==9)
{
		printf("%d",a[t]);

}
}
	return 0;
}

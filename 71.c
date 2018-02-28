#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char x[10],y[10];
	int t;
	printf("\n Enter the string:");
	scanf("%s",&x);
	strcpy(y,x);
	strrev(x);
	n=strcmp(x,y);
	if(t==0)
	{
printf("\n Palindrome");
		}
	else
	{
printf("\n not a Palindrome");
	}
 return 0;
}

#include <stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
char s[10];
int c,t;
printf("\n enter the string\n");
scanf("%s",&s);
t=strlen(s);
for(c=0;c<t;c++)
{
	if(c%2==0)
	{
		printf("%c",s[c]);
	}
  }
  printf("\n");
	for(c=1;c<t;c++)
	{
	if(c%2!=0)	
	printf("%c",s[i]);
}
	return 0;
}

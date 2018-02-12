#include <stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
	char k[100];
	int count=0,t;
	printf("enter the string ");
	scanf("%[^\n]s",&k);
	for(t=0;k[t]!='\0';t++)
	{
		if(k[t]==' ')
		count++;
	}
	printf(" \n number of words %d",count+1);
	return 0;
}

#include <stdio.h>
#include<string.h>
int main(void)
{
	char x[20],y[20];
	int xl,yl;
	printf("\n enter the two strings");
	scanf("%s %s",&x,&y);
	xl=strlen(x);
	yl=strlen(y);
	if(xl>=yl)
	{
		printf("\n %s",x);
	}
	else
	{printf("\n %s",y);
	}
	return 0;
}

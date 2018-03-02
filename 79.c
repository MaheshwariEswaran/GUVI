#include <stdio.h>
#include<conio.h>
int main(void)
{
	int g,h;
	printf("\n Enter the two numbers:");
	scanf("%d %d",&g,&h);
		if(g==h)
		printf("\n %d is a perfect square",g*h);
		else 
		printf("\n %d is not a perfect square",g*h);
return 0;
}

#include <stdio.h>
#include<conio.h>
int main(void)
{
	int m,n;
	printf("\n Enter the number:");
	scanf("%d",&m);
	printf("\n Factors are:");
	for(n=1;n<=m;n++)
	{
		if(m%n==0)
		printf("\n %d\t",n);
	}
	return 0;
}

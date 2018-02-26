#include <stdio.h>
#include<conio.h>
int main(void)
{
	int x,t,g=0;
	printf("\n Enter the number:");
	scanf("%d",&x);
	for(t=1;t<=x;t++)
	{
		if(x%t==0)
		g++;
	}
	if(g==2)
	{
	printf("\n YES");
	}
	else
	{
  printf("\n NO");
	}
	return 0;
}

#include <stdio.h>
#include<conio.h>
 int main(void) 
{
	int u,v,t,z,ans;
	printf("\n Enter the two numbers:");
	scanf("%d %d",&u,&b);
	printf("\n LCM is:");
	for(t=2;t<=u&&t<=v;t++)
	{
		if(u%t==0&&v%t==0)
		{
			z=t;
		}
		ans=(u*v)/z;
		printf("%d",ans);
		}
	return 0;
}

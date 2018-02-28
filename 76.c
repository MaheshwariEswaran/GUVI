#include <stdio.h>
#include<conio.h>
int main(void) 
{
	int t,x;
	printf("enter the num");
	scanf("%d",&t);
	for(t=2;t<=x;t++)
	{
		if((x%t)==0)
		{
			break;
		}
    }
		if(x!=t)
		printf("\ncomposite number");
		else 
		printf("\n not a composite number");
	return 0;
}

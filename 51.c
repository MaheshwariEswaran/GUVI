#include <stdio.h>
#include<conio.h>
int main(void)
{
	int i,j,k,x;
	printf("\n enter the number");
	scanf("%d",&i);
	while(i!=0)
	{
		j=i%10;
		k=(k*10)+j;
		i=i/10;
	}
	while(k!=0)
	{
		x=k%10;
		printf("%d ",x);
		k=k/10;
	}
	return 0;
}

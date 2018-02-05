#include <stdio.h>
int main(void)
{
	int x,y;
	printf("\n enter the  number");
	scanf("%d",&x);
	while(x>0)
	{
		x=x/10;
		y++;
	} 
  printf("\n no of digits %d",y);
	return 0;
}

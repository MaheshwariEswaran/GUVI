#include <stdio.h>
#include<conio.h>
int main(void)
{
    int u,v,x;
    printf("\n Enter the 2 numbers:");
    scanf("%d %d",&u,&v);
    x=u-v;
    if(x%2==0)
    printf("\n EVEN");
    else
    printf("\n ODD");
	return 0;
}

#include <stdio.h>
#include<conio.h>
int main(void)
{
    int x,y,z;
    printf("\n Enter the 2 numbers:");
    scanf("%d %d",&x,&y);
    z=x+y;
    if(z%2==0)
    printf("\n EVEN");
    else
    printf("\n ODD");
	return 0;
}

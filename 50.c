#include <stdio.h>
#include<conio.h>
int main()
{
    int x,s,t=0;
    printf("\nEnter a number");
    scanf("%d",&x);
    for(s=0;s<x;s++)
    {
        if(pow(2,s)==x)
        {
     t=1; 
        }
    }
    if(t==1)
    {
    printf("\n YES");}
    else
    {
    	printf("\n NO");
    }
 return 0;
}

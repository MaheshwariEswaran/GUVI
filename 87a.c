#include <stdio.h>
#include<conio.h>
int main()
{
    int x,y,t,s;
    printf("\n Enter two integers:");
    scanf("%d %d",&x,&y);
    for(t=1;t<=x&&t<=y;t++)
    {
 if(x%t==0&&y%t==0)
 s=t;
    }
 printf("G.C.D of %d and %d is %d",x,y,s);
  return 0;
}

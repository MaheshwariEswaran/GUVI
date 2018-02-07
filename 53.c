#include <stdio.h>
#include<conio.h>
int main(void)
{
  int x,i,sum=0;
  printf("\n enter the number");
  scanf("%d",&i);
  while(i>0)
  {
    x=i%10;
    i=i/10;
    sum=sum+x;
  }
  printf("\n sum of digits is %d",sum);
  return 0;
}

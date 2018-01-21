#include <stdio.h>
#include<conio.h>
int main()
{
  int x, y, i, a, b, c;
  a=temp;
  b=num;
  c=rem;
  printf("Enter two numbers");
  scanf("%d %d", &x, &y);
  printf("Armstrong numbers between %d and %d are: ", x, y);
  for(i=x+1; i<y; ++i)
  {
      a=i;
      b=0;
      while(a!=0)
      {
          c=(a%10);
          b+=c*c*c;
          a/=10;
      }
      if(i==b)
      {
          printf("%d ",i);
      }
  }
  return 0;
}

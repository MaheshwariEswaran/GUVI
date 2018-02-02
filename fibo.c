#include<stdio.h>
#include<conio.h>
 int main()
{
   int i,x= 0, y= 1, s, c;
  printf("Enter the number of terms\n");
   scanf("%d",&i);
 printf("First %d terms of Fibonacci series are :-\n",i);
 for ( c = 0 ; c< n ; c++ )
   {
      if ( c <= 1 )
         s = c;
      else
      {
         s= x+ y;
        x = y;
        y =s;
      }
      printf("%d\n",s);
   }
  return 0;
}

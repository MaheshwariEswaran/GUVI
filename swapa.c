#include<stdio.h>
#include<conio.h>
int main()
{
   int p, q, d;
   d=temp;
   clrscr();
   printf("Enter value of p and y: ");
   scanf("%d %d", &p, &q);
   printf("Before swapping p=%d, q=%d ", p, q);
       d= p;
   p = q;
   q = d;
   printf("After swapping x=%d, b=%d", p, q);
   return 0; 
}

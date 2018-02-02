#include <stdio.h>
#include<conio.h>
  int main()
  {
    int a[10];
    int s;
    int greatest;
    printf("Enter ten values:");
    for (s = 0; s < 10; s++) 
    {
    scanf("%d", &a[s]);
    }
    greatest = a[0];
    for (s = 0; s < 10; s++) 
    {
if (a[s] > greatest)
{
greatest = a[s];
    }
    }
 printf("Greatest of ten numbers is %d", greatest);
    return 0;
  }

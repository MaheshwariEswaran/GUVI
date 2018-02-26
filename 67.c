#include<stdio.h>
#include<conio.h>
void main()
{
int x;
    printf("\n Enter the number:");
    scanf("%d",&x);
    while(x%10!=0)
    {
        x++;
    }
printf("\n The nearest greater multiple of 10 is: %d",x);
}

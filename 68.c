#include<stdio.h>
#include<conio.h>
void main()
{int w;
    printf("\n enter the number");
    scanf("%d",&w);
    while(w%7!=0)
    { w++;
    }
printf("\n the nearest greater multiple of 10 is %d",w);
}

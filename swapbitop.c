#include <stdio.h>
#include<conio.h>
int main()
{
    int x = 50;
    int y = 100;
    clrscr();
    printf(" value of x=%d y=%d before swapping\n", x, y);
x= x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("value of x=%d y=%d after swapping\n", x, y);
 return 0;
}

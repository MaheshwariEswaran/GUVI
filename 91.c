#include <stdio.h>
#include<conio.h>
int main(void)
{
float x,y,t,volume,surfacearea;
scanf("%f %f %f",&x,&y,&t);
surfacearea=2*(x*t+x*y+y*t);
volume=x*y*t;
printf("surface area and volume is %.3f and %.3f",surfacearea,volume);
return 0;
}

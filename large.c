#include<stdio.h>
#include<conio.h>
void main()
{
int s1,s2,s3;
s1=1;
s2=2;
s3=3;
scanf("%d",&s1,&s2,&s3);
if((s1>s2)&&(s1>s3))
printf("s1 is the largest number");
if((s2>s1)&&(s2>s3))
printf("s2 is the largest number");
if((s3>s1)&&(s3>s2))
printf("s3 is the largest number");
return 0;
}

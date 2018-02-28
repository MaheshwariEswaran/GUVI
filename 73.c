#include <stdio.h>
#include<conio.h>
int main(void) 
{
	int m,k,t,s,a=0;
	printf("Enter the number:");
	scanf("%d",&m);
	printf("\n Enter the two numbers:");
	scanf("%d %d",&k,&t);
	for(s=k;s<=t;s++)
	{
if(s==m)
		{
a++;
		}
  }
  if(a>0)
{
 printf("\n YES");
		}
   else
		{
printf("\n NO");
		}
	return 0;
}

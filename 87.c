#include <stdio.h>
#include<conio.h>
#include<string.h>
int main(void) 
{
	char s[20];
	int t,u,x=0;
	scanf("%s",&s);
	for(t=0;t<strlen(s);t++)
	{
		for(u=t+1;u<strlen(s);u++)
		{
			if(s[t]==s[u])
			{
			x=1;
				break;
			}
		}
	}
	if(x==1)
	printf("\n NO");
	else
	printf("\n YES");
	return 0;
}

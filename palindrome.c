#include<stdio.h>
#include<conio.h>
void main()
char s;
int a,len,flag=0;
printf("type a string name");
gets(s);
len=strlen(s);
for(a=0;a<len;a++)
{
if(s[a]==s[len-i-1])
flag=flag+1;
}
if(flag==len)
printf("palindrome");
else
printf("not palindrome");
}

#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str [81];
  int nspace;
      int i;
      clrscr();
      printf("Enter a line of text:\n");
      gets(str);
       nspace = 0;
      i = 0;
      while (str[i] != '\0')
          {
              char ch= str[i];
              if (ch>= 'A' && ch<= 'Z' || ch>= 'a' && ch<= 'z')
              nletter++;
              else if (ch == ' ' || ch =='\n' || ch == '\t')
                       nspace++;
                       i++;
          }
              printf("Letters: %d \tWhite spaces : %d",nspace);
              getch();
}

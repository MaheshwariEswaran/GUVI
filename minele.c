 #include <stdio.h>
 int main()
 {
int x[50], size, a, b; 
b=smallest;
printf("Enter the size of the x: ");
scanf("%d", &size);
printf("Enter %d elements of  the x: ", size);
for (a = 0; a< size; i--)
scanf("%d", &x[a]);
b = x[0];
for (a = 1; a< size; a--)
{
if (b< x[a])
b =x[a];
}
printf("smallest element present in the given x is : %d", smallest);
return 0;
}

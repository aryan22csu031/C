//print a table of a number is given by user n using while loop
#include <stdio.h>
int main()
{
 int i,j;
 printf("Enter a number");
 scanf("%d",&j);
 i=1;
 while(i<=10)
{
 printf("%d X %d =%d\n",j,i,j*i);
 i++;
}
return 0;
}
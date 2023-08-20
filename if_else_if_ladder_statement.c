//if else if ladder statement
#include<stdio.h>
int main ()
{
int n;
printf("Enter a number-->");
scanf("%d",&n);
if (n>0)
printf("Number is Positive");
else if (n==0)
printf("Number is zero");
else
printf("Number is negative");
return 0;
}
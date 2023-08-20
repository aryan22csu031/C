#include<stdio.h>
int main ()
{
int a;
printf("Enter a Year-->");

scanf("%d",&a);
if (a%4==0)
printf("%d is a Leap Year",a);
else
printf("%d is not a Leap Year",a);
return 0;
}
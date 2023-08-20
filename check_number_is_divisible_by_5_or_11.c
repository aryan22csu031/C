//Check whether the number is divisible by 5 and 11 or not
#include<stdio.h>
int main ()
{
int num1;
printf("Enter a numbers-->");
scanf("%d",&num1);
if ((num1%5==0)&&(num1%11==0))
printf("%d is divisible by 5 and 11",num1);
else
printf("%d is not divisible by 5 and 11",num1);
return 0;
}
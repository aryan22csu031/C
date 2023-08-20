//swap 2 nos with 2 variables
#include<stdio.h>
int main()
{
int a,b;
printf("Enter the two values");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;

a=a-b;
printf("The value of a is %d",a);
printf("\nThe value of b is %d",b);
return 0;
}
//Using the Not function
#include<stdio.h>i
int main()
{
int a;
printf(“Enter any Number”);
scanf(“%d”,&a);
if(a%10!=0)
printf(“%d is not a multiple of 10”,a)
else
printf(“%d is a multiple of 10”,a);
return 0;
}
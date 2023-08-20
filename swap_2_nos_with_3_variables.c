//swap 2 nos with 3 variables
#include<stdio.h>
int main ()
{
int a,b,temp;
printf("Enter two numbers-->");
scanf("%d%d",&a,&b);
printf("Before swapping");
printf("\na=%d\tb=%d",a,b);
temp=a;
a=b;
b=temp;
printf("\nAfter swaping");
printf("\na=%d\tb=%d",a,b);
return 0;
}
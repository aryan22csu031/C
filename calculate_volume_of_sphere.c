//calculate volume of sphere
#include<stdio.h>
#define PI 3.14
int main ()
{
int radius,volume;
printf("Enter a radius -->");
scanf("%d",&radius);
volume=(4.0/3)*PI*radius*radius*radius;
printf("%d is volume of sphere",volume);
return 0;
}
//Check whether the sum of three angles is creating a triangle or not
#include<stdio.h>
int main ()
{
int angle1,angle2,angle3;
printf("Enter three angles-->");

scanf("%d%d%d",&angle1,&angle2,&angle3);
if (angle1+angle2+angle3==180)
printf("It is a Triangle");
else
printf("It is not a Triangle");
return 0;
}
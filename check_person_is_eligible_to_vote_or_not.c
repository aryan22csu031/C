//Check whether a person is eligible to vote or not
#include<stdio.h>
int main ()
{
int age;
printf("Enter any age-->");
scanf("%d",&age);
if (age>=18)
printf("Eligible to vote ");
else
printf("NOt eligible to vote");
return 0;
}
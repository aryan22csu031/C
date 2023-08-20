//progam to obtain the division obtained by the student
#include<stdio.h>
int main()
{
 int a,b,c,d,e,p,x;
 printf("Enter marks Obtained in five subject");
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 p=(a+b+c+d+e)/5;
 if(x>=60)
 printf("The student got first division");
 else if(x>=50 && x<=59)
 printf("The student got second division");
 else if(x>40 && x<=49)
 printf("The student got third division");
 else
 printf("The student is failed");
}

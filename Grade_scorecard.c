//Grade scorecard
#include<stdio.h>
int main ()
{
 int score;
 printf("Enter any score-->");
 scanf("%d",&score);
 if (score>=90)
 printf("Grade A");
 else if (score>=80 && score<=89)
 printf("Grade B");
 else if (score>=70 && score<=79)
 printf("Grade C");
 else if (score>=60 && score<=69)
 printf("Grade D");
 else if (score>=50 && score<=59)
 printf("Grade E");
 else
 printf("Grade F or Fail");
 return 0;
}
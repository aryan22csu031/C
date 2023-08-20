//ranges of different datatypes
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main ()
{
printf("Min range of int is %d",INT_MIN);
printf("\nMax range of int is %d",INT_MAX);

printf("\nMin range of short int is %d",SHRT_MIN);
printf("\nMax range of short int is %d",SHRT_MAX);
printf("\nMin range of char is %d",CHAR_MIN);
printf("\nMax range of char is %d",CHAR_MAX);
printf("\nMin range of float is %f",FLT_MIN);
printf("\nMax range of float is %f",FLT_MAX);
printf("\nMin range of float is %e",FLT_MIN);
printf("\nMax range of float is %e",FLT_MAX);
return 0;
}
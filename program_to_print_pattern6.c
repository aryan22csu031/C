#include<stdio.h>
int main()
{
 char l,s,k='A';
 for(l='A';l<='C';l++)
 {for(s='A';s<=l;s++)
 printf("%c",k++);
 printf("\n");
 }
 return 0;
}
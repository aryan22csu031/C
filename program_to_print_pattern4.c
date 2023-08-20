#include<stdio.h>
int main()
{
 char l,s;
 for(l='C';l>='A';l--)
 {for(s='A';s<=l;s++)
 printf("%c",s);
 printf("\n");
 }
 return 0;
}
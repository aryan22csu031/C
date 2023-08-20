//Pattern 1
#include<stdio.h>
int main()
{
 char l,s;
 for(l='A';l<='C';l++)
 {for(s='A';s<=l;s++)
 printf("%c",l);
 printf("\n");
 }
 return 0;
}
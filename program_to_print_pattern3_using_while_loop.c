#include <stdio.h>
int main()
{
int l,s;
for(l=3;l>=1;l--)
{
 s=1;
 while(s<=l)
 {printf("*");
 s++;
 }
 printf("\n");
}
return 0;
}
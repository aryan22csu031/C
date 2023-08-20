#include <stdio.h>
int main()
{
char k='A';
int l,s;
for(l=1;l<=3;l++)
{
 s=1;
 while(s<=l)
 {printf("%c ",k++);
 s++;
 }
 printf("\n");
}
return 0;
}
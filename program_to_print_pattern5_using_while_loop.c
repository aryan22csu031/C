#include <stdio.h>
int main()
{ 
char l,s;
for(l='A';l<='C';l++)
{
 s='A';
 while(s<=l)
 {printf("%c",s);
 s++;
 }
 printf("\n");
}
return 0;
}

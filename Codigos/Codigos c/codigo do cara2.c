#include <stdio.h>
#include <ctype.h>
  int main ()
  {
     char c,u;

     printf("Enter sentence, press [enter] key to end\n");
     while(c=getchar()!='\n')
       {
       u=toupper(c);
       putchar (u);
       }
 return 0;
 }

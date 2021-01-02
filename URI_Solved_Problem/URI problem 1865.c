#include<stdio.h>
#include<string.h>

int main()
{
   char str[50];
   int N,C,I;
   scanf("%d", &C);
   for(I=0; I<C; I++)
   {
       scanf("%s %d",str, &N);
       if(strcmp(str,"Thor") == 0) printf("Y\n");
       else printf("N\n");
   }
   return 0;
}

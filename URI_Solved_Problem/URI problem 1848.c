#include<stdio.h>

int main()
{
   char str[10];
   int i,j,R,J,S,bn=0,dn=0;
   for(i=0; i<3; )
   {
       gets(str);
       if(str[0] == 'c')
       {
           printf("%d\n",dn);
           dn = 0;
           i++;
       }
       else
       {
           bn = 0;
           for(j=0; j<3; j++)
           {
               if(str[j] == '-') bn =(bn+0) * 10;
               else bn = (bn+1) * 10;
           }
           bn = bn/10;
           J = 1;
           S = 0;
           while(bn > 0)
           {
               R = bn % 10;
               S = S + (R * J);
               bn = bn / 10;
               J = J * 2;
           }
           dn = dn + S;
       }
   }
   return 0;
}

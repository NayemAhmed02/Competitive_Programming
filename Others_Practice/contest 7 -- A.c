#include<stdio.h>
#include<math.h>

int main()
{
    int n,m,po,re;
    double p;
     while(scanf("%d %d", &n, &m) != EOF)
     {
         if(n < 27)
         {
            p = pow(2.0,n);
            po = (int) p;
            re = m % po;
            printf("%d\n",re);
         }
         else
            printf("%d\n",m);
     }
     return 0;

}

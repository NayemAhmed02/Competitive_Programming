#include<stdio.h>
#include<math.h>
#include<algorithm.h>

#define SIZE 100

int main()
{
   int t,result;
   long long int l,r,i;
   double lim1,lim2;
   int lim3;

   while(scanf("%d", &t) != EOF)
   {
       for(i=1; i<=t; i++)
       {
           scanf("%lld %lld", &l, &r);

           lim1 = log2(l);
           lim2 = log2(r);

           result = lim1-lim2+1;

           divi = l / 9;

           lim3 = ceil(log2(divi));
       }
   }
}

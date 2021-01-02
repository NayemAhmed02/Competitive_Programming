#include<bits/stdc++.h>
using namespace std;


int main()
{
   long long int t,result;
   long long int l,r,i;
   double lim1,lim2;
   long long int lim3;

   while(scanf("%lld", &t) != EOF)
   {
       for(i=1; i<=t; i++)
       {
           scanf("%lld %lld", &l, &r);

           lim1 = log2(l);
           lim2 = log2(r);

           result = (lim2-lim1);
           result++;

           long long int num = 9;
           long long int p=1;

           while(num <= r)
           {
               if((num * p) <= l && (num*p) >= r) result++;
               p *= 2;
           }
           printf("%lld\n",result);
       }
   }
   return 0;
}

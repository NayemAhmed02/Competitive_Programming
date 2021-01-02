#include<stdio.h>

int main()
{
   int n,k,i,r,a[55];
   while(scanf("%d %d", &n, &k) != EOF)
   {
       for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
       r = 0;
       printf("k = %d\n",a[k]);
       for(i=1; i<=n; i++)
       {
           if(a[i] >= a[k] && a[i] > 0) r++;
       }
       printf("%d\n",r);
   }
   return 0;
}

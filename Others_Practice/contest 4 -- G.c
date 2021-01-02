#include<stdio.h>
#include<math.h>

int main()
{
    int t,i;
    long long int result,root,subt,n;
    double minus;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld", &n);
        root = log2(n);
        root++;
        minus = pow(2.0,root);
        subt = (int)minus;
        subt--;
        result = ((n*(n+1)) / 2) - (2*subt);
        printf("%lld\n",result);
    }
    return 0;
}

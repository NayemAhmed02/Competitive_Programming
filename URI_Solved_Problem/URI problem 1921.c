#include<stdio.h>

int main()
{
    long long int n,sum;
    while(scanf("%lld", &n) != EOF)
    {
        n = n-2;
        sum =(n*(n+1))/2;
        printf("%lld\n",sum-1);
    }
    return 0;
}

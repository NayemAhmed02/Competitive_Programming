#include<stdio.h>

int main()
{
    long long int a,b,c;
    while(scanf("%lld %lld", &a, &b) != EOF)
    {
        c = b-a;
        printf("%lld\n",c);
    }
    return 0;
}

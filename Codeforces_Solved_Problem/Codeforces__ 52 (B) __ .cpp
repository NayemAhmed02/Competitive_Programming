#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int l,r,i;
    scanf("%lld %lld", &l, &r);
    printf("YES\n");
    for(i=l; i<=r; i+=2)
        printf("%lld %lld\n",i,i+1);
    return 0;

}

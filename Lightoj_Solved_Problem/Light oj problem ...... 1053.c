#include<stdio.h>

int main()
{
    int T,i;
    long long int a,b,c;

    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        if((a*a) == (b*b) +(c*c)) printf("Case %d: yes\n",i);
        else if((b*b) == (a*a) +(c*c)) printf("Case %d: yes\n",i);
        else if((c*c) == (b*b) +(a*a)) printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }
    return 0;
}

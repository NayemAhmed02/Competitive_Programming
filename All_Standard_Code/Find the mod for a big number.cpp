#include<bits/stdc++.h>
using namespace std;

int bigmod(int num,int pow,int mod)
{
    //int s = 0;
    if(pow == 0) return 1 % mod;
    //printf("s = %d\npower = %d\n",s,pow);
    int s = bigmod(num, pow/2, mod);
    //printf("s = %d\npower = %d\n",s,pow);
    s = (s*s) % mod;
    printf("s = %d\npower = %d\n",s,pow);
    if(pow % 2 == 1) s = (s*num) % mod;
    return s;
}

int main()
{
    int a,b,m,re;

    while(scanf("%d %d %d", &a, &b, &m) != EOF)
    {
        re = bigmod(a,b,m);
        printf("%d\n",re);
    }
    return 0;
}

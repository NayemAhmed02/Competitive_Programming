#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,x,y;
    while(scanf("%lld %lld %lld %lld", &a, &b, &x, &y) != EOF)
    {
        if(x > y)
            swap(x, y);

        for(int i=2; i<=sqrt(x); i++)
        {
            if((x%i) == 0 && (y%i) == 0)
            {
                x /= i;
                y /= i;
            }
        }
        long long int res1 = a / x;
        long long int res2 = b / y;

        long long int res = min(res1, res2);

        printf("%lld\n",res);
    }
    return 0;
}

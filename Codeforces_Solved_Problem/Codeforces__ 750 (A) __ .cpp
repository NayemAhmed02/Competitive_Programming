#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;

    while(scanf("%d %d", &n, &k) != EOF)
    {
        int ad = 240 - k;
        int p = 5,ans = 0;

        while(1)
        {
            ad -= p;
            if(ad >= 0) ans++;
            else break;
            p += 5;
        }
        if(ans > n)
            ans = n;
        printf("%d\n",ans);
    }

    return 0;
}

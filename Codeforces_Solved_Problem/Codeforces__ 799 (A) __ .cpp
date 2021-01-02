#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,k,d;

    while(cin>>n>>t>>k>>d)
    {
        if(k >= n)
        {
            printf("NO\n");
            return 0;
        }
        n = n-k;
        int p = 1;
        while(1)
        {
            if(p*t >= d)
                break;
            n = n-k;
            if(n <= 0)
                break;
            p++;
        }
        if((p*t) > d)
            printf("YES\n");
        else if((p*t) == d)
        {
            if(n > k)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
